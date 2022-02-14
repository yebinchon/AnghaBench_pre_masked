
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ miscdev; int (* release ) (int ) ;} ;
struct tpm_chip {TYPE_2__ vendor; int dev_num; int dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct tpm_chip *VAR_1)
{
 if (VAR_1->vendor.release)
  VAR_1->vendor.release(VAR_1->dev);

 FUNC_0(VAR_1->dev_num, VAR_0);
 FUNC_1(VAR_1->vendor.miscdev.name);
}
