
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_char16_t ;



__attribute__((used)) static unsigned long
FUNC_0(efi_char16_t *VAR_0, size_t VAR_1)
{
 unsigned long VAR_2 = 0;

 while (*VAR_0++ != 0 && VAR_2 < VAR_1)
  VAR_2++;
 return VAR_2;
}
