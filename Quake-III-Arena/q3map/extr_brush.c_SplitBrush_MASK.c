
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_28__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef double vec_t ;
struct TYPE_29__ {int planenum; TYPE_1__* winding; int * shaderInfo; scalar_t__ backSide; } ;
typedef TYPE_2__ side_t ;
struct TYPE_30__ {float dist; int normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_31__ {int numsides; scalar_t__* mins; scalar_t__* maxs; TYPE_2__* sides; int original; int * next; } ;
typedef TYPE_4__ bspbrush_t ;


 TYPE_4__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,float) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 double FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_1__**,int ,float,int ) ;
 int FUNC_6 (TYPE_1__*,int ,float,int ,TYPE_1__**,TYPE_1__**) ;
 TYPE_4__* FUNC_7 (TYPE_4__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 float FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 TYPE_3__* VAR_4 ;
 int FUNC_13 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_14 (char*) ;

void FUNC_15 (bspbrush_t *VAR_5, int VAR_6,
 bspbrush_t **VAR_7, bspbrush_t **VAR_8)
{
 bspbrush_t *VAR_9[2];
 int VAR_10, VAR_11;
 winding_t *VAR_12, *VAR_13[2], *VAR_14;
 plane_t *VAR_15, *VAR_16;
 side_t *VAR_17, *VAR_18;
 float VAR_19, VAR_20, VAR_21;

 *VAR_7 = *VAR_8 = ((void*)0);
 VAR_15 = &VAR_4[VAR_6];


 VAR_20 = VAR_21 = 0;
 for (VAR_10=0 ; VAR_10<VAR_5->numsides ; VAR_10++)
 {
  VAR_12 = VAR_5->sides[VAR_10].winding;
  if (!VAR_12)
   continue;
  for (VAR_11=0 ; VAR_11<VAR_12->numpoints ; VAR_11++)
  {
   VAR_19 = FUNC_9 (VAR_12->p[VAR_11], VAR_15->normal) - VAR_15->dist;
   if (VAR_19 > 0 && VAR_19 > VAR_20)
    VAR_20 = VAR_19;
   if (VAR_19 < 0 && VAR_19 < VAR_21)
    VAR_21 = VAR_19;
  }
 }
 if (VAR_20 < 0.1)
 {
  *VAR_8 = FUNC_7 (VAR_5);
  return;
 }
 if (VAR_21 > -0.1)
 {
  *VAR_7 = FUNC_7 (VAR_5);
  return;
 }



 VAR_12 = FUNC_1 (VAR_15->normal, VAR_15->dist);
 for (VAR_10=0 ; VAR_10<VAR_5->numsides && VAR_12 ; VAR_10++)
 {
  if ( VAR_5->sides[VAR_10].backSide ) {
   continue;
  }
  VAR_16 = &VAR_4[VAR_5->sides[VAR_10].planenum ^ 1];
  FUNC_5 (&VAR_12, VAR_16->normal, VAR_16->dist, 0);
 }

 if (!VAR_12 || FUNC_12 (VAR_12) )
 {
  int VAR_22;

  VAR_22 = FUNC_3 (VAR_5, VAR_15);
  if (VAR_22 == VAR_3)
   *VAR_7 = FUNC_7 (VAR_5);
  if (VAR_22 == VAR_2)
   *VAR_8 = FUNC_7 (VAR_5);
  return;
 }

 if (FUNC_11 (VAR_12))
 {
  FUNC_14 ("WARNING: huge winding\n");
 }

 VAR_14 = VAR_12;



 for (VAR_10=0 ; VAR_10<2 ; VAR_10++)
 {
  VAR_9[VAR_10] = FUNC_0 (VAR_5->numsides+1);
  FUNC_13( VAR_9[VAR_10], VAR_5, sizeof( bspbrush_t ) - sizeof( VAR_5->sides ) );
  VAR_9[VAR_10]->numsides = 0;
  VAR_9[VAR_10]->next = ((void*)0);
  VAR_9[VAR_10]->original = VAR_5->original;
 }



 for (VAR_10=0 ; VAR_10<VAR_5->numsides ; VAR_10++)
 {
  VAR_17 = &VAR_5->sides[VAR_10];
  VAR_12 = VAR_17->winding;
  if (!VAR_12)
   continue;
  FUNC_6 (VAR_12, VAR_15->normal, VAR_15->dist,
   0 , &VAR_13[0], &VAR_13[1]);
  for (VAR_11=0 ; VAR_11<2 ; VAR_11++)
  {
   if (!VAR_13[VAR_11])
    continue;







   VAR_18 = &VAR_9[VAR_11]->sides[VAR_9[VAR_11]->numsides];
   VAR_9[VAR_11]->numsides++;
   *VAR_18 = *VAR_17;
   VAR_18->winding = VAR_13[VAR_11];
  }
 }




 for (VAR_10=0 ; VAR_10<2 ; VAR_10++)
 {
  FUNC_2 (VAR_9[VAR_10]);
  for (VAR_11=0 ; VAR_11<3 ; VAR_11++)
  {
   if (VAR_9[VAR_10]->mins[VAR_11] < VAR_1 || VAR_9[VAR_10]->maxs[VAR_11] > VAR_0)
   {
    FUNC_14 ("bogus brush after clip\n");
    break;
   }
  }

  if (VAR_9[VAR_10]->numsides < 3 || VAR_11 < 3)
  {
   FUNC_10 (VAR_9[VAR_10]);
   VAR_9[VAR_10] = ((void*)0);
  }
 }

 if ( !(VAR_9[0] && VAR_9[1]) )
 {
  if (!VAR_9[0] && !VAR_9[1])
   FUNC_14 ("split removed brush\n");
  else
   FUNC_14 ("split not on both sides\n");
  if (VAR_9[0])
  {
   FUNC_10 (VAR_9[0]);
   *VAR_7 = FUNC_7 (VAR_5);
  }
  if (VAR_9[1])
  {
   FUNC_10 (VAR_9[1]);
   *VAR_8 = FUNC_7 (VAR_5);
  }
  return;
 }


 for (VAR_10=0 ; VAR_10<2 ; VAR_10++)
 {
  VAR_18 = &VAR_9[VAR_10]->sides[VAR_9[VAR_10]->numsides];
  VAR_9[VAR_10]->numsides++;

  VAR_18->planenum = VAR_6^VAR_10^1;
  VAR_18->shaderInfo = ((void*)0);
  if (VAR_10==0)
   VAR_18->winding = FUNC_8 (VAR_14);
  else
   VAR_18->winding = VAR_14;
 }

{
 vec_t VAR_23;
 int VAR_24;

 for (VAR_24=0 ; VAR_24<2 ; VAR_24++)
 {
  VAR_23 = FUNC_4 (VAR_9[VAR_24]);
  if (VAR_23 < 1.0)
  {
   FUNC_10 (VAR_9[VAR_24]);
   VAR_9[VAR_24] = ((void*)0);

  }
 }
}

 *VAR_7 = VAR_9[0];
 *VAR_8 = VAR_9[1];
}
