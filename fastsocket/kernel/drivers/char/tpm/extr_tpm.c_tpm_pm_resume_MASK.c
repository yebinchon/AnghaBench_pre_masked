
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct tpm_chip* FUNC_0 (struct device*) ;

int FUNC_1(struct device *VAR_1)
{
 struct tpm_chip *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == ((void*)0))
  return -VAR_0;

 return 0;
}
