
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int dummy; } ;
typedef int data ;


 int FUNC_0 (struct tpm_chip*,int*,int) ;

void FUNC_1(struct tpm_chip *VAR_0)
{
 u8 VAR_1[] = {
  0, 193,
  0, 0, 0, 10,
  0, 0, 0, 83,
 };

 FUNC_0(VAR_0, VAR_1, sizeof(VAR_1));
}
