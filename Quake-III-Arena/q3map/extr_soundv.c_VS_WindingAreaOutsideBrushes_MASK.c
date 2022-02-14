
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int numpoints; int points; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;
struct TYPE_11__ {size_t shaderNum; } ;
typedef TYPE_2__ dbrush_t ;
struct TYPE_12__ {int contentFlags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_2__* VAR_15 ;
 TYPE_3__* VAR_16 ;
 int FUNC_2 (int ,int ,int) ;

float FUNC_3(winding_t *VAR_17, int *VAR_18, int VAR_19)
{
 int VAR_20, VAR_21, VAR_22[2], VAR_23;
 winding_t VAR_24[2][64];
 dbrush_t *VAR_25;
 float VAR_26;

 FUNC_2(VAR_24[0][0].points, VAR_17->points, VAR_17->numpoints * sizeof(vec3_t));
 VAR_24[0][0].numpoints = VAR_17->numpoints;
 VAR_22[0] = 1;
 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++)
 {
  VAR_25 = &VAR_15[VAR_18[VAR_20]];
  if (!(VAR_16[VAR_25->shaderNum].contentFlags & (
     VAR_6
     | VAR_10
     | VAR_14
     | VAR_5
     | VAR_0
     | VAR_9
     | VAR_7
     | VAR_2
     | VAR_4
     | VAR_1
     | VAR_3
     | VAR_12
     | VAR_13
     | VAR_8) ) &&
   (VAR_16[VAR_25->shaderNum].contentFlags & VAR_11) )
  {
   VAR_22[!(VAR_20 & 1)] = 0;
   for (VAR_21 = 0; VAR_21 < VAR_22[VAR_20&1]; VAR_21++)
   {
    VAR_23 = FUNC_0(&VAR_24[VAR_20&1][VAR_21], VAR_25,
           &VAR_24[!(VAR_20&1)][VAR_22[!(VAR_20&1)]],
           64 - VAR_22[!(VAR_20&1)]);
    VAR_22[!(VAR_20&1)] += VAR_23;
   }
   if (!VAR_22[!(VAR_20&1)])
    return 0;
  }
  else
  {
   for (VAR_21 = 0; VAR_21 < VAR_22[VAR_20&1]; VAR_21++)
   {
    VAR_24[!(VAR_20&1)][VAR_21] = VAR_24[VAR_20&1][VAR_21];
   }
   VAR_22[!(VAR_20&1)] = VAR_22[VAR_20&1];
  }
 }
 VAR_26 = 0;
 for (VAR_21 = 0; VAR_21 < VAR_22[VAR_20&1]; VAR_21++)
 {
  VAR_26 += FUNC_1(&VAR_24[VAR_20&1][VAR_21]);
 }
 return VAR_26;
}
