
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec_t ;
struct TYPE_28__ {int planenum; int surf; TYPE_1__* winding; int flags; scalar_t__ texinfo; } ;
typedef TYPE_2__ side_t ;
struct TYPE_29__ {float dist; int normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_30__ {int numsides; int* mins; int* maxs; TYPE_2__* sides; int original; } ;
typedef TYPE_4__ bspbrush_t ;


 TYPE_4__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,float) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_1__**,int ,float,int ) ;
 int FUNC_6 (TYPE_1__*,int ,float,int ,TYPE_1__**,TYPE_1__**) ;
 TYPE_4__* FUNC_7 (TYPE_4__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 float FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 TYPE_3__* VAR_4 ;

void FUNC_15(bspbrush_t *VAR_5, int VAR_6, int VAR_7,
       bspbrush_t **VAR_8, bspbrush_t **VAR_9)
{
 bspbrush_t *VAR_10[2];
 int VAR_11, VAR_12;
 winding_t *VAR_13, *VAR_14[2], *VAR_15;
 plane_t *VAR_16, *VAR_17;
 side_t *VAR_18, *VAR_19;
 float VAR_20, VAR_21, VAR_22;

 *VAR_8 = *VAR_9 = ((void*)0);
 VAR_16 = &VAR_4[VAR_6];


 VAR_21 = VAR_22 = 0;
 for (VAR_11=0 ; VAR_11<VAR_5->numsides ; VAR_11++)
 {
  VAR_13 = VAR_5->sides[VAR_11].winding;
  if (!VAR_13)
   continue;
  for (VAR_12=0 ; VAR_12<VAR_13->numpoints ; VAR_12++)
  {
   VAR_20 = FUNC_9 (VAR_13->p[VAR_12], VAR_16->normal) - VAR_16->dist;
   if (VAR_20 > 0 && VAR_20 > VAR_21)
    VAR_21 = VAR_20;
   if (VAR_20 < 0 && VAR_20 < VAR_22)
    VAR_22 = VAR_20;
  }
 }

 if (VAR_21 < 0.1)
 {
  *VAR_9 = FUNC_7 (VAR_5);
  FUNC_12("HL_SplitBrush: only on back\n");
  return;
 }
 if (VAR_22 > -0.1)
 {
  *VAR_8 = FUNC_7 (VAR_5);
  FUNC_12("HL_SplitBrush: only on front\n");
  return;
 }



 VAR_13 = FUNC_1 (VAR_16->normal, VAR_16->dist);
 for (VAR_11 = 0; VAR_11 < VAR_5->numsides && VAR_13; VAR_11++)
 {
  VAR_17 = &VAR_4[VAR_5->sides[VAR_11].planenum ^ 1];
  FUNC_5(&VAR_13, VAR_17->normal, VAR_17->dist, 0);
 }

 if (!VAR_13 || FUNC_14(VAR_13))
 {
  int VAR_23;

  FUNC_12("HL_SplitBrush: no split winding\n");
  VAR_23 = FUNC_3 (VAR_5, VAR_16);
  if (VAR_23 == VAR_1)
   *VAR_8 = FUNC_7 (VAR_5);
  if (VAR_23 == VAR_0)
   *VAR_9 = FUNC_7 (VAR_5);
  return;
 }

 if (FUNC_13(VAR_13))
 {
  FUNC_12("HL_SplitBrush: WARNING huge split winding\n");
 }

 VAR_15 = VAR_13;



 for (VAR_11 = 0; VAR_11 < 2; VAR_11++)
 {
  VAR_10[VAR_11] = FUNC_0 (VAR_5->numsides+1);
  VAR_10[VAR_11]->original = VAR_5->original;
 }



 for (VAR_11=0 ; VAR_11<VAR_5->numsides ; VAR_11++)
 {
  VAR_18 = &VAR_5->sides[VAR_11];
  VAR_13 = VAR_18->winding;
  if (!VAR_13)
   continue;
  FUNC_6 (VAR_13, VAR_16->normal, VAR_16->dist,
   0 , &VAR_14[0], &VAR_14[1]);
  for (VAR_12=0 ; VAR_12<2 ; VAR_12++)
  {
   if (!VAR_14[VAR_12])
    continue;







   VAR_19 = &VAR_10[VAR_12]->sides[VAR_10[VAR_12]->numsides];
   VAR_10[VAR_12]->numsides++;
   *VAR_19 = *VAR_18;




   VAR_19->winding = VAR_14[VAR_12];
   VAR_19->flags &= ~VAR_2;
  }
 }




 for (VAR_11=0 ; VAR_11<2 ; VAR_11++)
 {
  FUNC_2 (VAR_10[VAR_11]);
  for (VAR_12=0 ; VAR_12<3 ; VAR_12++)
  {
   if (VAR_10[VAR_11]->mins[VAR_12] < -4096 || VAR_10[VAR_11]->maxs[VAR_12] > 4096)
   {
    FUNC_12("HL_SplitBrush: bogus brush after clip\n");
    break;
   }
  }

  if (VAR_10[VAR_11]->numsides < 3 || VAR_12 < 3)
  {
   FUNC_10 (VAR_10[VAR_11]);
   VAR_10[VAR_11] = ((void*)0);
   FUNC_12("HL_SplitBrush: numsides < 3\n");
  }
 }

 if ( !(VAR_10[0] && VAR_10[1]) )
 {
  if (!VAR_10[0] && !VAR_10[1])
   FUNC_12("HL_SplitBrush: split removed brush\n");
  else
   FUNC_12("HL_SplitBrush: split not on both sides\n");
  if (VAR_10[0])
  {
   FUNC_10 (VAR_10[0]);
   *VAR_8 = FUNC_7 (VAR_5);
  }
  if (VAR_10[1])
  {
   FUNC_10 (VAR_10[1]);
   *VAR_9 = FUNC_7 (VAR_5);
  }
  return;
 }


 for (VAR_11 = 0; VAR_11 < 2; VAR_11++)
 {
  VAR_19 = &VAR_10[VAR_11]->sides[VAR_10[VAR_11]->numsides];
  VAR_10[VAR_11]->numsides++;

  VAR_19->planenum = VAR_6^VAR_11^1;
  VAR_19->texinfo = 0;

  VAR_19->surf = VAR_7;

  VAR_19->flags &= ~VAR_3;
  VAR_19->flags &= ~VAR_2;
  if (VAR_11==0)
   VAR_19->winding = FUNC_8 (VAR_15);
  else
   VAR_19->winding = VAR_15;
 }


{
 vec_t VAR_24;
 int VAR_25;

 for (VAR_25=0 ; VAR_25<2 ; VAR_25++)
 {
  VAR_24 = FUNC_4 (VAR_10[VAR_25]);
  if (VAR_24 < 1)
  {
   FUNC_10 (VAR_10[VAR_25]);
   VAR_10[VAR_25] = ((void*)0);
   FUNC_12("HL_SplitBrush: tiny volume after clip\n");
  }
 }
}

 *VAR_8 = VAR_10[0];
 *VAR_9 = VAR_10[1];
}
