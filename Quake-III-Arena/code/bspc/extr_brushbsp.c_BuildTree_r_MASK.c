
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int planenum; } ;
typedef TYPE_1__ side_t ;
struct TYPE_12__ {int planenum; int contents; struct TYPE_12__** children; int * volume; struct TYPE_12__* parent; TYPE_1__* side; int * brushlist; } ;
typedef TYPE_2__ node_t ;
typedef int bspbrush_t ;


 TYPE_2__* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 TYPE_1__* FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,int,int **,int **) ;
 int FUNC_7 (int *,TYPE_2__*,int **,int **) ;
 int FUNC_8 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (char*,int ) ;

node_t *FUNC_10 (node_t *VAR_10, bspbrush_t *VAR_11)
{
 node_t *VAR_12;
 side_t *VAR_13;
 int VAR_14, VAR_15;
 bspbrush_t *VAR_16[2];

 FUNC_9("\r%6d", VAR_8);
 VAR_8++;

 if (VAR_9 == 1)
 {
  VAR_15 = FUNC_8() + VAR_2 + VAR_1;
  if (VAR_15 > VAR_4)
   VAR_4 = VAR_15;
  VAR_3++;
 }

 if (VAR_7)
  FUNC_1(VAR_11, VAR_10);


 VAR_13 = FUNC_5 (VAR_11, VAR_10);
 if (!VAR_13)
 {

  VAR_10->side = ((void*)0);
  VAR_10->planenum = -1;
  FUNC_4(VAR_10, VAR_11);
  if (VAR_10->contents & VAR_0) VAR_5++;
  if (VAR_6)
  {

   FUNC_3(VAR_10->brushlist);
   VAR_10->brushlist = ((void*)0);

   if (VAR_10->volume)
   {
    FUNC_2(VAR_10->volume);
    VAR_10->volume = ((void*)0);
   }
  }
  return VAR_10;
 }


 VAR_10->side = VAR_13;
 VAR_10->planenum = VAR_13->planenum & ~1;


 FUNC_7 (VAR_11, VAR_10, &VAR_16[0], &VAR_16[1]);

 FUNC_3 (VAR_11);


 for (VAR_14 = 0; VAR_14 < 2; VAR_14++)
 {
  VAR_12 = FUNC_0 ();
  VAR_12->parent = VAR_10;
  VAR_10->children[VAR_14] = VAR_12;
 }


 FUNC_6 (VAR_10->volume, VAR_10->planenum, &VAR_10->children[0]->volume,
  &VAR_10->children[1]->volume);

 if (VAR_6)
 {

  if (VAR_10->volume)
  {
   FUNC_2(VAR_10->volume);
   VAR_10->volume = ((void*)0);
  }
 }

 for (VAR_14 = 0; VAR_14 < 2; VAR_14++)
 {
  VAR_10->children[VAR_14] = FUNC_10(VAR_10->children[VAR_14], VAR_16[VAR_14]);
 }

 return VAR_10;
}
