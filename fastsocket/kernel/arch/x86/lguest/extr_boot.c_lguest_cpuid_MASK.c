
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(unsigned int *VAR_0, unsigned int *VAR_1,
    unsigned int *VAR_2, unsigned int *VAR_3)
{
 int VAR_4 = *VAR_0;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 switch (VAR_4) {




 case 0:
  if (*VAR_0 > 5)
   *VAR_0 = 5;
  break;







 case 1:
  *VAR_2 &= 0x00002201;
  *VAR_3 &= 0x07808151;







  *VAR_3 |= 0x00002000;





  *VAR_0 &= 0xFFFFF0FF;
  *VAR_0 |= 0x00000500;
  break;




 case 0x80000000:
  if (*VAR_0 > 0x80000008)
   *VAR_0 = 0x80000008;
  break;







 case 0x80000001:
  *VAR_3 &= ~(1 << 20);
  break;
 }
}
