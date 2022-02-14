
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int winding_t ;
typedef int vsound_t ;
struct TYPE_8__ {int dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_9__ {int dist; int normal; } ;
typedef TYPE_2__ dplane_t ;
struct TYPE_10__ {size_t planeNum; int* children; } ;
typedef TYPE_3__ dnode_t ;
struct TYPE_11__ {int cluster; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,TYPE_1__*,double) ;
 int FUNC_2 (int ,int ) ;
 TYPE_6__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (int *,int *,int) ;

void FUNC_4(vsound_t *VAR_6, int VAR_7, winding_t *VAR_8)
{
 int VAR_9, VAR_10;
 dnode_t *VAR_11;
 dplane_t *VAR_12;
 winding_t VAR_13;
 plane_t VAR_14;

 while(VAR_7 >= 0)
 {
  VAR_11 = &VAR_4[VAR_7];
  VAR_12 = &VAR_5[VAR_11->planeNum];

  FUNC_2(VAR_12->normal, VAR_14.normal);
  VAR_14.dist = VAR_12->dist;
  VAR_10 = FUNC_1 (VAR_8, &VAR_13, &VAR_14, 0.1);

  if (VAR_10 == VAR_1)
  {
   VAR_7 = VAR_11->children[0];
  }
  else if (VAR_10 == VAR_0)
  {
   VAR_7 = VAR_11->children[1];
  }
  else if (VAR_10 == VAR_2)
  {
   FUNC_3(&VAR_13, VAR_8, sizeof(winding_t));
   FUNC_4(VAR_6, VAR_11->children[1], &VAR_13);
   VAR_7 = VAR_11->children[0];
  }
  else
  {
   FUNC_4(VAR_6, VAR_11->children[1], &VAR_13);
   VAR_7 = VAR_11->children[0];
  }
 }
 VAR_9 = -VAR_7 - 1;
 if (VAR_3[VAR_9].cluster != -1)
 {
  FUNC_0(VAR_6, VAR_8, VAR_9);
 }
}
