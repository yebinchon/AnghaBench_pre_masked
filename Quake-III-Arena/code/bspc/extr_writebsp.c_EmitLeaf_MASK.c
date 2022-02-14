
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ** face; TYPE_2__** nodes; struct TYPE_8__** next; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_9__ {int contents; TYPE_1__* portals; TYPE_4__* brushlist; int maxs; int mins; int area; int cluster; } ;
typedef TYPE_2__ node_t ;
typedef int face_t ;
struct TYPE_10__ {int contents; int firstleafbrush; int numleafbrushes; void* firstleafface; void* numleaffaces; int maxs; int mins; int area; int cluster; } ;
typedef TYPE_3__ dleaf_t ;
struct TYPE_11__ {int original; struct TYPE_11__* next; } ;
typedef TYPE_4__ bspbrush_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int* VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 size_t VAR_8 ;

void FUNC_3 (node_t *VAR_9)
{
 dleaf_t *VAR_10;
 portal_t *VAR_11;
 int VAR_12;
 face_t *VAR_13;
 bspbrush_t *VAR_14;
 int VAR_15;
 int VAR_16;


 if (VAR_8 >= VAR_2)
  FUNC_1 ("MAX_MAP_LEAFS");

 VAR_10 = &VAR_4[VAR_8];
 VAR_8++;

 VAR_10->contents = VAR_9->contents;
 VAR_10->cluster = VAR_9->cluster;
 VAR_10->area = VAR_9->area;




 FUNC_2 (VAR_9->mins, VAR_10->mins);
 FUNC_2 (VAR_9->maxs, VAR_10->maxs);




 VAR_10->firstleafbrush = VAR_6;
 for (VAR_14=VAR_9->brushlist ; VAR_14 ; VAR_14=VAR_14->next)
 {
  if (VAR_6 >= VAR_1)
   FUNC_1 ("MAX_MAP_LEAFBRUSHES");

  VAR_16 = VAR_14->original - VAR_5;
  for (VAR_15=VAR_10->firstleafbrush ; VAR_15<VAR_6 ; VAR_15++)
   if (VAR_3[VAR_15] == VAR_16)
    break;
  if (VAR_15 == VAR_6)
  {
   VAR_3[VAR_6] = VAR_16;
   VAR_6++;
  }
 }
 VAR_10->numleafbrushes = VAR_6 - VAR_10->firstleafbrush;




 if (VAR_10->contents & VAR_0)
  return;

 VAR_10->firstleafface = VAR_7;

 for (VAR_11 = VAR_9->portals ; VAR_11 ; VAR_11 = VAR_11->next[VAR_12])
 {
  VAR_12 = (VAR_11->nodes[1] == VAR_9);
  VAR_13 = VAR_11->face[VAR_12];
  if (!VAR_13)
   continue;

  FUNC_0 (VAR_10, VAR_13);
 }

 VAR_10->numleaffaces = VAR_7 - VAR_10->firstleafface;
}
