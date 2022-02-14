
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int texinfo; int planenum; int surf; int flags; int contents; int * winding; int * original; } ;
typedef TYPE_1__ side_t ;
struct TYPE_10__ {int numsides; TYPE_1__* original_sides; int contents; scalar_t__ brushnum; int entitynum; } ;
typedef TYPE_2__ mapbrush_t ;
struct TYPE_11__ {int numbrushes; scalar_t__ firstbrush; } ;
typedef TYPE_3__ entity_t ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

mapbrush_t *FUNC_1(mapbrush_t *VAR_6, entity_t *VAR_7)
{
 int VAR_8;
 mapbrush_t *VAR_9;
 side_t *VAR_10, *VAR_11;

 if (VAR_4 >= VAR_0)
  FUNC_0 ("MAX_MAPFILE_BRUSHES");

 VAR_9 = &VAR_3[VAR_4];
 VAR_9->original_sides = &VAR_2[VAR_5];
 VAR_9->entitynum = VAR_6->entitynum;
 VAR_9->brushnum = VAR_4 - VAR_7->firstbrush;
 VAR_9->numsides = VAR_6->numsides;
 VAR_9->contents = VAR_6->contents;


 for (VAR_8 = 0; VAR_8 < VAR_6->numsides; VAR_8++)
 {
  if (VAR_5 >= VAR_1)
   FUNC_0 ("MAX_MAPFILE_BRUSHSIDES");
  VAR_10 = VAR_6->original_sides + VAR_8;

  VAR_11 = VAR_9->original_sides + VAR_8;
  VAR_11->original = ((void*)0);
  VAR_11->winding = ((void*)0);
  VAR_11->contents = VAR_10->contents;
  VAR_11->flags = VAR_10->flags;
  VAR_11->surf = VAR_10->surf;
  VAR_11->planenum = VAR_10->planenum;
  VAR_11->texinfo = VAR_10->texinfo;
  VAR_5++;
 }

 VAR_4++;
 VAR_7->numbrushes++;
 return VAR_9;
}
