
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef int vec3_t ;
struct TYPE_14__ {TYPE_4__* headnode; int maxs; int mins; } ;
typedef TYPE_3__ tree_t ;
struct TYPE_15__ {TYPE_5__* brushlist; int volume; } ;
typedef TYPE_4__ node_t ;
struct TYPE_16__ {int numsides; int maxs; int mins; TYPE_2__* sides; TYPE_1__* original; struct TYPE_16__* next; } ;
typedef TYPE_5__ bspbrush_t ;
struct TYPE_13__ {int flags; scalar_t__ texinfo; int winding; } ;
struct TYPE_12__ {int brushnum; int entitynum; } ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_7 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (char*) ;

tree_t *FUNC_9(bspbrush_t *VAR_15, vec3_t VAR_16, vec3_t VAR_17)
{
 int VAR_18, VAR_19, VAR_20, VAR_21;
 bspbrush_t *VAR_22;
 node_t *VAR_23;
 tree_t *VAR_24;
 vec_t VAR_25;


 FUNC_5("-------- Brush BSP ---------\n");

 VAR_24 = FUNC_7();

 VAR_19 = 0;
 VAR_20 = 0;
 VAR_21 = 0;
 VAR_10 = 0;
 for (VAR_22 = VAR_15; VAR_22; VAR_22 = VAR_22->next)
 {
  VAR_21++;

  VAR_25 = FUNC_3(VAR_22);
  if (VAR_25 < VAR_12)
  {
   FUNC_5("WARNING: entity %i, brush %i: microbrush\n",
    VAR_22->original->entitynum, VAR_22->original->brushnum);
  }

  for (VAR_18=0 ; VAR_18<VAR_22->numsides ; VAR_18++)
  {
   if (VAR_22->sides[VAR_18].flags & VAR_0)
    continue;
   if (!VAR_22->sides[VAR_18].winding)
    continue;
   if (VAR_22->sides[VAR_18].texinfo == VAR_2)
    continue;
   if (VAR_22->sides[VAR_18].flags & VAR_1)
   {
    VAR_19++;
   }
   else
   {
    VAR_20++;

   }
  }
  VAR_10 += VAR_22->numsides;

  FUNC_0 (VAR_22->mins, VAR_24->mins, VAR_24->maxs);
  FUNC_0 (VAR_22->maxs, VAR_24->mins, VAR_24->maxs);
 }

 FUNC_5("%6i brushes\n", VAR_21);
 FUNC_5("%6i visible faces\n", VAR_19);
 FUNC_5("%6i nonvisible faces\n", VAR_20);
 FUNC_5("%6i total sides\n", VAR_10);

 VAR_3 = VAR_21;
 VAR_5 = 0;
 VAR_4 = 0;
 VAR_8 = 0;

 VAR_6 = 0;
 VAR_7 = 0;
 VAR_23 = FUNC_1 ();


 VAR_23->volume = FUNC_2 (VAR_16, VAR_17);

 VAR_24->headnode = VAR_23;

 VAR_13 = 0;


 VAR_24->headnode->brushlist = VAR_15;
 FUNC_4(VAR_24);





 if (VAR_11) return VAR_24;

 FUNC_8("\n");
 FUNC_6("%6d splits\r\n", VAR_13);





 if (VAR_14 == 1)
 {





  FUNC_5("%6i KB of peak total bsp memory\n", VAR_9 >> 10);
 }
 return VAR_24;
}
