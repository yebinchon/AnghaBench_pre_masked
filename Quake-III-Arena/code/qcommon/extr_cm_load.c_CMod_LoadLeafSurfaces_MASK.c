
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_1__ lump_t ;
struct TYPE_5__ {int* leafsurfaces; int numLeafSurfaces; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_3( lump_t *VAR_4 )
{
 int VAR_5;
 int *VAR_6;
 int *VAR_7;
 int VAR_8;

 VAR_7 = (void *)(VAR_2 + VAR_4->fileofs);
 if (VAR_4->filelen % sizeof(*VAR_7))
  FUNC_0 (VAR_0, "MOD_LoadBmodel: funny lump size");
 VAR_8 = VAR_4->filelen / sizeof(*VAR_7);

 VAR_1.leafsurfaces = FUNC_1( VAR_8 * sizeof( *VAR_1.leafsurfaces ), VAR_3 );
 VAR_1.numLeafSurfaces = VAR_8;

 VAR_6 = VAR_1.leafsurfaces;

 for ( VAR_5=0 ; VAR_5<VAR_8 ; VAR_5++, VAR_7++, VAR_6++) {
  *VAR_6 = FUNC_2 (*VAR_7);
 }
}
