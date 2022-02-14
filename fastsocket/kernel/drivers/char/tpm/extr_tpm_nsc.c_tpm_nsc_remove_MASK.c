
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct tpm_chip {int dev; TYPE_1__ vendor; } ;
struct device {int dummy; } ;


 struct tpm_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct tpm_chip *VAR_1 = FUNC_0(VAR_0);
 if ( VAR_1 ) {
  FUNC_1(VAR_1->vendor.base, 2);
  FUNC_2(VAR_1->dev);
 }
}
