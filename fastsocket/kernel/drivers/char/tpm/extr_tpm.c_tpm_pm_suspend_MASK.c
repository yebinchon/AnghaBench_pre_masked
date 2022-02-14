
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int dummy; } ;
struct device {int dummy; } ;
typedef int savestate ;
typedef int pm_message_t ;


 int VAR_0 ;
 struct tpm_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (struct tpm_chip*,int*,int) ;

int FUNC_2(struct device *VAR_1, pm_message_t VAR_2)
{
 struct tpm_chip *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4[] = {
  0, 193,
  0, 0, 0, 10,
  0, 0, 0, 152
 };

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_3, VAR_4, sizeof(VAR_4));
 return 0;
}
