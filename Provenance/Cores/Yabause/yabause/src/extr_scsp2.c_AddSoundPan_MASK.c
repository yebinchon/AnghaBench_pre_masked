
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, u16 VAR_1)
{
   if (VAR_1 == 0x0F)
   {
      FUNC_0(VAR_0, "Left = -MAX dB, Right = -0 dB\r\n");
   }
   else if (VAR_1 == 0x1F)
   {
      FUNC_0(VAR_0, "Left = -0 dB, Right = -MAX dB\r\n");
   }
   else
   {
      FUNC_0(VAR_0, "Left = -%d dB, Right = -%d dB\r\n", (VAR_1 & 0xF) * 3, (VAR_1 >> 4) * 3);
   }

   return VAR_0;
}
