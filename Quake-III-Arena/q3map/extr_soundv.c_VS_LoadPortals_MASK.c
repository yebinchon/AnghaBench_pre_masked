
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int numpoints; double** points; } ;
typedef TYPE_1__ winding_t ;
struct TYPE_13__ {int dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_14__ {size_t numportals; int leaf; TYPE_2__ plane; TYPE_1__* winding; struct TYPE_14__** portals; } ;
typedef TYPE_3__ lportal_t ;
typedef TYPE_3__ lleaf_t ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 char* VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (double*,double*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,char*,...) ;
 TYPE_3__* VAR_4 ;
 TYPE_3__* FUNC_10 (int) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int * VAR_9 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int VAR_10 ;

void FUNC_13 (char *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 lportal_t *VAR_15;
 lleaf_t *VAR_16;
 char VAR_17[80];
 FILE *VAR_18;
 int VAR_19;
 winding_t *VAR_20;
 int VAR_21[2];
 plane_t VAR_22;


 if (!FUNC_12(VAR_11,"-"))
  VAR_18 = VAR_9;
 else
 {
  VAR_18 = FUNC_8(VAR_11, "r");
  if (!VAR_18)
   FUNC_0 ("LoadPortals: couldn't read %s\n",VAR_11);
 }

 if (FUNC_9 (VAR_18,"%79s\n%i\n%i\n%i\n",VAR_17, &VAR_7, &VAR_6, &VAR_5) != 4)
  FUNC_0 ("LoadPortals: failed to read header");
 if (FUNC_12(VAR_17, VAR_3))
  FUNC_0 ("LoadPortals: not a portal file");

 FUNC_6 ("%6i portalclusters\n", VAR_7);
 FUNC_6 ("%6i numportals\n", VAR_6);
 FUNC_6 ("%6i numfaces\n", VAR_5);

 if (VAR_7 >= VAR_0)
  FUNC_0 ("more than %d clusters in portal file\n", VAR_0);


 VAR_8 = FUNC_10(2*VAR_6*sizeof(lportal_t));
 FUNC_11 (VAR_8, 0, 2*VAR_6*sizeof(lportal_t));

 VAR_4 = FUNC_10(VAR_7*sizeof(lleaf_t));
 FUNC_11 (VAR_4, 0, VAR_7*sizeof(lleaf_t));

 for (VAR_12=0, VAR_15=VAR_8 ; VAR_12<VAR_6 ; VAR_12++)
 {
  if (FUNC_9 (VAR_18, "%i %i %i ", &VAR_19, &VAR_21[0], &VAR_21[1]) != 3)
   FUNC_0 ("LoadPortals: reading portal %i", VAR_12);
  if (VAR_19 > VAR_1)
   FUNC_0 ("LoadPortals: portal %i has too many points", VAR_12);
  if ( (unsigned)VAR_21[0] > VAR_7
  || (unsigned)VAR_21[1] > VAR_7)
   FUNC_0 ("LoadPortals: reading portal %i", VAR_12);
  if (FUNC_9 (VAR_18, "%i ", &VAR_14) != 1)
   FUNC_0 ("LoadPortals: reading hint state");

  VAR_20 = VAR_15->winding = FUNC_1 (VAR_19);
  VAR_20->numpoints = VAR_19;

  for (VAR_13=0 ; VAR_13<VAR_19 ; VAR_13++)
  {
   double VAR_23[3];
   int VAR_24;



   if (FUNC_9 (VAR_18, "(%lf %lf %lf ) "
   , &VAR_23[0], &VAR_23[1], &VAR_23[2]) != 3)
    FUNC_0 ("LoadPortals: reading portal %i", VAR_12);
   for (VAR_24=0 ; VAR_24<3 ; VAR_24++)
    VAR_20->points[VAR_13][VAR_24] = VAR_23[VAR_24];
  }
  FUNC_9 (VAR_18, "\n");


  FUNC_2 (VAR_20, &VAR_22);


  VAR_16 = &VAR_4[VAR_21[0]];
  if (VAR_16->numportals == VAR_2)
   FUNC_0 ("Leaf with too many portals");
  VAR_16->portals[VAR_16->numportals] = VAR_15;
  VAR_16->numportals++;

  VAR_15->winding = VAR_20;
  FUNC_5 (VAR_10, VAR_22.normal, VAR_15->plane.normal);
  VAR_15->plane.dist = -VAR_22.dist;
  VAR_15->leaf = VAR_21[1];
  FUNC_3 (VAR_15);
  VAR_15++;


  VAR_16 = &VAR_4[VAR_21[1]];
  if (VAR_16->numportals == VAR_2)
   FUNC_0 ("Leaf with too many portals");
  VAR_16->portals[VAR_16->numportals] = VAR_15;
  VAR_16->numportals++;

  VAR_15->winding = FUNC_1(VAR_20->numpoints);
  VAR_15->winding->numpoints = VAR_20->numpoints;
  for (VAR_13=0 ; VAR_13<VAR_20->numpoints ; VAR_13++)
  {
   FUNC_4 (VAR_20->points[VAR_20->numpoints-1-VAR_13], VAR_15->winding->points[VAR_13]);
  }

  VAR_15->plane = VAR_22;
  VAR_15->leaf = VAR_21[0];
  FUNC_3 (VAR_15);
  VAR_15++;

 }

 FUNC_7 (VAR_18);
}
