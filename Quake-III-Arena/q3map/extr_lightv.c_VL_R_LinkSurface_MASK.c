
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int winding_t ;
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
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *,TYPE_1__*,double) ;
 int FUNC_2 (int ,int ) ;
 TYPE_6__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (int *,int *,int) ;

void FUNC_4(int VAR_6, int VAR_7, winding_t *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 dnode_t *VAR_12;
 dplane_t *VAR_13;
 winding_t VAR_14;
 plane_t VAR_15;

 while(VAR_6 >= 0)
 {
  VAR_12 = &VAR_4[VAR_6];
  VAR_13 = &VAR_5[VAR_12->planeNum];

  FUNC_2(VAR_13->normal, VAR_15.normal);
  VAR_15.dist = VAR_13->dist;
  VAR_11 = FUNC_1 (VAR_8, &VAR_14, &VAR_15, 0.1);

  if (VAR_11 == VAR_1)
  {
   VAR_6 = VAR_12->children[0];
  }
  else if (VAR_11 == VAR_0)
  {
   VAR_6 = VAR_12->children[1];
  }
  else if (VAR_11 == VAR_2)
  {
   FUNC_3(&VAR_14, VAR_8, sizeof(winding_t));
   FUNC_4(VAR_12->children[1], VAR_7, &VAR_14);
   VAR_6 = VAR_12->children[0];
  }
  else
  {
   FUNC_4(VAR_12->children[1], VAR_7, &VAR_14);
   VAR_6 = VAR_12->children[0];
  }
 }
 VAR_9 = -VAR_6 - 1;
 VAR_10 = VAR_3[VAR_9].cluster;
 if (VAR_10 != -1)
 {
  FUNC_0(VAR_10, VAR_7);
 }
}
