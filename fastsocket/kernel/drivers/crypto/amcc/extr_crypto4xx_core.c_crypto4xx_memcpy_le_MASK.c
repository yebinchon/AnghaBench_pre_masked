
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (unsigned int) ;

void FUNC_1(unsigned int *VAR_0,
    const unsigned char *VAR_1,
    int VAR_2)
{
 u8 *VAR_3;
 for (; VAR_2 >= 4; VAR_1 += 4, VAR_2 -= 4)
  *VAR_0++ = FUNC_0(*(unsigned int *) VAR_1);

 VAR_3 = (u8 *)VAR_0;
 switch (VAR_2) {
 case 3:
  *VAR_3++ = 0;
  *VAR_3++ = *(VAR_1+2);
  *VAR_3++ = *(VAR_1+1);
  *VAR_3++ = *VAR_1;
  break;
 case 2:
  *VAR_3++ = 0;
  *VAR_3++ = 0;
  *VAR_3++ = *(VAR_1+1);
  *VAR_3++ = *VAR_1;
  break;
 case 1:
  *VAR_3++ = 0;
  *VAR_3++ = 0;
  *VAR_3++ = 0;
  *VAR_3++ = *VAR_1;
  break;
 default:
  break;
 }
}
