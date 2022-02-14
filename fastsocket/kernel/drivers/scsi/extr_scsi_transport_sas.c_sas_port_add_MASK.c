
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_port {int dev; int phy_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct sas_port *VAR_0)
{
 int VAR_1;


 FUNC_0(!FUNC_2(&VAR_0->phy_list));

 VAR_1 = FUNC_1(&VAR_0->dev);

 if (VAR_1)
  return VAR_1;

 FUNC_3(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 return 0;
}
