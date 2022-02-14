
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_desc {int dev; } ;
struct kobject {int dummy; } ;


 int FUNC_0 (int ) ;
 struct msi_desc* FUNC_1 (struct kobject*) ;

void FUNC_2(struct kobject *VAR_0)
{
 struct msi_desc *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->dev);
}
