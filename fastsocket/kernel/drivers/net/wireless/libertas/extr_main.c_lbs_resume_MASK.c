
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int fw_ready; scalar_t__ mesh_dev; scalar_t__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lbs_private*,int ,int ,int ,int ,int *) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct lbs_private *VAR_2)
{
 FUNC_0(VAR_1);

 VAR_2->fw_ready = 1;



 FUNC_2(VAR_2, VAR_0, 0,
         0, 0, ((void*)0));

 FUNC_3(VAR_2->dev);
 if (VAR_2->mesh_dev)
  FUNC_3(VAR_2->mesh_dev);

 FUNC_1(VAR_1);
}
