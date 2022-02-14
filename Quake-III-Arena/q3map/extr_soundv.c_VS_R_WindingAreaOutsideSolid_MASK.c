
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int winding_t ;
typedef int vec3_t ;
struct TYPE_9__ {int dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_10__ {int normal; int dist; } ;
typedef TYPE_2__ dplane_t ;
struct TYPE_11__ {size_t planeNum; int* children; } ;
typedef TYPE_3__ dnode_t ;
struct TYPE_12__ {int cluster; size_t firstLeafBrush; int numLeafBrushes; } ;
typedef TYPE_4__ dleaf_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,TYPE_1__*,double) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int * VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_2__* VAR_6 ;

float FUNC_4(winding_t *VAR_7, vec3_t VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 float VAR_12;
 dnode_t *VAR_13;
 dleaf_t *VAR_14;
 dplane_t *VAR_15;
 winding_t VAR_16;
 plane_t VAR_17;

 VAR_12 = 0;
 while(VAR_9 >= 0)
 {
  VAR_13 = &VAR_5[VAR_9];
  VAR_15 = &VAR_6[VAR_13->planeNum];

  FUNC_3(VAR_15->normal, VAR_17.normal);
  VAR_17.dist = VAR_15->dist;
  VAR_11 = FUNC_1 (VAR_7, &VAR_16, &VAR_17, 0.1);

  if (VAR_11 == VAR_1)
  {
   VAR_9 = VAR_13->children[0];
  }
  else if (VAR_11 == VAR_0)
  {
   VAR_9 = VAR_13->children[1];
  }
  else if (VAR_11 == VAR_2)
  {
   if (FUNC_0(VAR_8, VAR_15->normal) > 0)
    VAR_9 = VAR_13->children[0];
   else
    VAR_9 = VAR_13->children[1];
  }
  else
  {
   VAR_12 += FUNC_4(&VAR_16, VAR_8, VAR_13->children[1]);
   VAR_9 = VAR_13->children[0];
  }
 }
 VAR_10 = -VAR_9 - 1;
 VAR_14 = &VAR_4[VAR_10];
 if (VAR_14->cluster != -1)
 {
  VAR_12 += FUNC_2(VAR_7, &VAR_3[VAR_14->firstLeafBrush], VAR_14->numLeafBrushes);
 }
 return VAR_12;
}
