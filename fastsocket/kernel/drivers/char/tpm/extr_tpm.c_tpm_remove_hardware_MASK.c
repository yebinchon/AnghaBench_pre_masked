
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attr_group; int miscdev; } ;
struct tpm_chip {int dev; int bios_dir; TYPE_1__ vendor; int list; } ;
struct device {int kobj; } ;


 int FUNC_0 (struct device*,char*) ;
 struct tpm_chip* FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct device *VAR_1)
{
 struct tpm_chip *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_1, "No device data found\n");
  return;
 }

 FUNC_5(&VAR_0);
 FUNC_2(&VAR_2->list);
 FUNC_6(&VAR_0);
 FUNC_7();

 FUNC_3(&VAR_2->vendor.miscdev);
 FUNC_8(&VAR_1->kobj, VAR_2->vendor.attr_group);
 FUNC_10(&VAR_1->kobj);
 FUNC_9(VAR_2->bios_dir);


 FUNC_4(VAR_2->dev);
}
