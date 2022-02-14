
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_1__ lump_t ;
struct TYPE_8__ {int dist; int * normal; } ;
typedef TYPE_2__ dplane_t ;
struct TYPE_9__ {scalar_t__* normal; int signbits; int type; void* dist; } ;
typedef TYPE_3__ cplane_t ;
struct TYPE_10__ {int numPlanes; TYPE_3__* planes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*) ;
 TYPE_4__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void FUNC_4 (lump_t *VAR_5)
{
 int VAR_6, VAR_7;
 cplane_t *VAR_8;
 dplane_t *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = (void *)(VAR_3 + VAR_5->fileofs);
 if (VAR_5->filelen % sizeof(*VAR_9))
  FUNC_0 (VAR_1, "MOD_LoadBmodel: funny lump size");
 VAR_10 = VAR_5->filelen / sizeof(*VAR_9);

 if (VAR_10 < 1)
  FUNC_0 (VAR_1, "Map with no planes");
 VAR_2.planes = FUNC_1( ( VAR_0 + VAR_10 ) * sizeof( *VAR_2.planes ), VAR_4 );
 VAR_2.numPlanes = VAR_10;

 VAR_8 = VAR_2.planes;

 for ( VAR_6=0 ; VAR_6<VAR_10 ; VAR_6++, VAR_9++, VAR_8++)
 {
  VAR_11 = 0;
  for (VAR_7=0 ; VAR_7<3 ; VAR_7++)
  {
   VAR_8->normal[VAR_7] = FUNC_2 (VAR_9->normal[VAR_7]);
   if (VAR_8->normal[VAR_7] < 0)
    VAR_11 |= 1<<VAR_7;
  }

  VAR_8->dist = FUNC_2 (VAR_9->dist);
  VAR_8->type = FUNC_3( VAR_8->normal );
  VAR_8->signbits = VAR_11;
 }
}
