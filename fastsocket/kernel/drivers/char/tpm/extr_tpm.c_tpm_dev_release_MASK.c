
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int (* release ) (struct device*) ;} ;
struct device {int dummy; } ;


 struct tpm_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct tpm_chip*) ;

void FUNC_4(struct device *VAR_0)
{
 struct tpm_chip *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(VAR_1);

 VAR_1->release(VAR_0);
 FUNC_1(VAR_1);
}
