
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int const) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 unsigned char *VAR_3 = VAR_1;
 unsigned char VAR_4;







 *VAR_3++ = 129;






 while (VAR_2-- > 0) {
  switch (VAR_4 = *VAR_0++) {
  case 129:
   *VAR_3++ = 128;
   *VAR_3++ = FUNC_0(129);
   break;
  case 128:
   *VAR_3++ = 128;
   *VAR_3++ = FUNC_0(128);
   break;
  default:
   *VAR_3++ = VAR_4;
   break;
  }
 }
 *VAR_3++ = 129;
 return (VAR_3 - VAR_1);
}
