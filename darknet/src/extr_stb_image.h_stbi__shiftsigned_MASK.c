
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
   static unsigned int VAR_3[9] = {
      0,
      0xff , 0x55 , 0x49 , 0x11 ,
      0x21 , 0x41 , 0x81 , 0x01 ,
   };
   static unsigned int VAR_4[9] = {
      0, 0,0,1,0,2,4,6,0,
   };
   if (VAR_1 < 0)
      VAR_0 <<= -VAR_1;
   else
      VAR_0 >>= VAR_1;
   FUNC_0(VAR_0 >= 0 && VAR_0 < 256);
   VAR_0 >>= (8-VAR_2);
   FUNC_0(VAR_2 >= 0 && VAR_2 <= 8);
   return (int) ((unsigned) VAR_0 * VAR_3[VAR_2]) >> VAR_4[VAR_2];
}
