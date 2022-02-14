
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int numpoints; double** points; } ;
typedef TYPE_1__ winding_t ;
struct TYPE_16__ {int dist; int normal; } ;
struct TYPE_15__ {int merged; size_t numportals; int num; int hint; int leaf; TYPE_3__ plane; TYPE_1__* winding; struct TYPE_15__** portals; } ;
typedef TYPE_2__ vportal_t ;
typedef TYPE_3__ plane_t ;
typedef TYPE_2__ leaf_t ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_1 (int) ;
 char* VAR_2 ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (double*,double*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,int) ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 TYPE_2__* FUNC_10 (int) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_2__* VAR_15 ;
 int * VAR_16 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;

void FUNC_13 (char *VAR_19)
{
 int VAR_20, VAR_21, VAR_22;
 vportal_t *VAR_23;
 leaf_t *VAR_24;
 char VAR_25[80];
 FILE *VAR_26;
 int VAR_27;
 winding_t *VAR_28;
 int VAR_29[2];
 plane_t VAR_30;

 if (!FUNC_12(VAR_19,"-"))
  VAR_26 = VAR_16;
 else
 {
  VAR_26 = FUNC_8(VAR_19, "r");
  if (!VAR_26)
   FUNC_0 ("LoadPortals: couldn't read %s\n",VAR_19);
 }

 if (FUNC_9 (VAR_26,"%79s\n%i\n%i\n%i\n",VAR_25, &VAR_13, &VAR_11, &VAR_10) != 4)
  FUNC_0 ("LoadPortals: failed to read header");
 if (FUNC_12(VAR_25,VAR_2))
  FUNC_0 ("LoadPortals: not a portal file");

 FUNC_6 ("%6i portalclusters\n", VAR_13);
 FUNC_6 ("%6i numportals\n", VAR_11);
 FUNC_6 ("%6i numfaces\n", VAR_10);


 VAR_6 = ((VAR_13+63)&~63)>>3;
 VAR_7 = VAR_6/sizeof(long);

 VAR_12 = ((VAR_11*2+63)&~63)>>3;
 VAR_14 = VAR_12/sizeof(long);


 VAR_15 = FUNC_10(2*VAR_11*sizeof(vportal_t));
 FUNC_11 (VAR_15, 0, 2*VAR_11*sizeof(vportal_t));

 VAR_8 = FUNC_10(VAR_13*sizeof(leaf_t));
 FUNC_11 (VAR_8, 0, VAR_13*sizeof(leaf_t));

 for (VAR_20 = 0; VAR_20 < VAR_13; VAR_20++)
  VAR_8[VAR_20].merged = -1;

 VAR_9 = VAR_3 + VAR_13*VAR_6;

 ((int *)VAR_18)[0] = VAR_13;
 ((int *)VAR_18)[1] = VAR_6;

 for (VAR_20=0, VAR_23=VAR_15 ; VAR_20<VAR_11 ; VAR_20++)
 {
  if (FUNC_9 (VAR_26, "%i %i %i ", &VAR_27, &VAR_29[0], &VAR_29[1]) != 3)
   FUNC_0 ("LoadPortals: reading portal %i", VAR_20);
  if (VAR_27 > VAR_0)
   FUNC_0 ("LoadPortals: portal %i has too many points", VAR_20);
  if ( (unsigned)VAR_29[0] > VAR_13
  || (unsigned)VAR_29[1] > VAR_13)
   FUNC_0 ("LoadPortals: reading portal %i", VAR_20);
  if (FUNC_9 (VAR_26, "%i ", &VAR_22) != 1)
   FUNC_0 ("LoadPortals: reading hint state");

  VAR_28 = VAR_23->winding = FUNC_1 (VAR_27);
  VAR_28->numpoints = VAR_27;

  for (VAR_21=0 ; VAR_21<VAR_27 ; VAR_21++)
  {
   double VAR_31[3];
   int VAR_32;



   if (FUNC_9 (VAR_26, "(%lf %lf %lf ) "
   , &VAR_31[0], &VAR_31[1], &VAR_31[2]) != 3)
    FUNC_0 ("LoadPortals: reading portal %i", VAR_20);
   for (VAR_32=0 ; VAR_32<3 ; VAR_32++)
    VAR_28->points[VAR_21][VAR_32] = VAR_31[VAR_32];
  }
  FUNC_9 (VAR_26, "\n");


  FUNC_2 (VAR_28, &VAR_30);


  VAR_24 = &VAR_8[VAR_29[0]];
  if (VAR_24->numportals == VAR_1)
   FUNC_0 ("Leaf with too many portals");
  VAR_24->portals[VAR_24->numportals] = VAR_23;
  VAR_24->numportals++;

  VAR_23->num = VAR_20+1;
  VAR_23->hint = VAR_22;
  VAR_23->winding = VAR_28;
  FUNC_5 (VAR_17, VAR_30.normal, VAR_23->plane.normal);
  VAR_23->plane.dist = -VAR_30.dist;
  VAR_23->leaf = VAR_29[1];
  FUNC_3 (VAR_23);
  VAR_23++;


  VAR_24 = &VAR_8[VAR_29[1]];
  if (VAR_24->numportals == VAR_1)
   FUNC_0 ("Leaf with too many portals");
  VAR_24->portals[VAR_24->numportals] = VAR_23;
  VAR_24->numportals++;

  VAR_23->num = VAR_20+1;
  VAR_23->hint = VAR_22;
  VAR_23->winding = FUNC_1(VAR_28->numpoints);
  VAR_23->winding->numpoints = VAR_28->numpoints;
  for (VAR_21=0 ; VAR_21<VAR_28->numpoints ; VAR_21++)
  {
   FUNC_4 (VAR_28->points[VAR_28->numpoints-1-VAR_21], VAR_23->winding->points[VAR_21]);
  }

  VAR_23->plane = VAR_30;
  VAR_23->leaf = VAR_29[0];
  FUNC_3 (VAR_23);
  VAR_23++;

 }

 VAR_5 = FUNC_10(2*VAR_10*sizeof(vportal_t));
 FUNC_11 (VAR_5, 0, 2*VAR_10*sizeof(vportal_t));

 VAR_4 = FUNC_10(VAR_13*sizeof(leaf_t));
 FUNC_11(VAR_4, 0, VAR_13*sizeof(leaf_t));

 for (VAR_20 = 0, VAR_23 = VAR_5; VAR_20 < VAR_10; VAR_20++)
 {
  if (FUNC_9 (VAR_26, "%i %i ", &VAR_27, &VAR_29[0]) != 2)
   FUNC_0 ("LoadPortals: reading portal %i", VAR_20);

  VAR_28 = VAR_23->winding = FUNC_1 (VAR_27);
  VAR_28->numpoints = VAR_27;

  for (VAR_21=0 ; VAR_21<VAR_27 ; VAR_21++)
  {
   double VAR_33[3];
   int VAR_34;



   if (FUNC_9 (VAR_26, "(%lf %lf %lf ) "
   , &VAR_33[0], &VAR_33[1], &VAR_33[2]) != 3)
    FUNC_0 ("LoadPortals: reading portal %i", VAR_20);
   for (VAR_34=0 ; VAR_34<3 ; VAR_34++)
    VAR_28->points[VAR_21][VAR_34] = VAR_33[VAR_34];
  }
  FUNC_9 (VAR_26, "\n");


  FUNC_2 (VAR_28, &VAR_30);

  VAR_24 = &VAR_4[VAR_29[0]];
  VAR_24->merged = -1;
  if (VAR_24->numportals == VAR_1)
   FUNC_0 ("Leaf with too many faces");
  VAR_24->portals[VAR_24->numportals] = VAR_23;
  VAR_24->numportals++;

  VAR_23->num = VAR_20+1;
  VAR_23->winding = VAR_28;

  FUNC_5 (VAR_17, VAR_30.normal, VAR_23->plane.normal);
  VAR_23->plane.dist = -VAR_30.dist;
  VAR_23->leaf = -1;
  FUNC_3 (VAR_23);
  VAR_23++;
 }

 FUNC_7 (VAR_26);
}
