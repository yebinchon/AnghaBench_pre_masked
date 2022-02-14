
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, u16 VAR_1)
{
   if (VAR_1 == 0)
   {
      FUNC_0(VAR_0, "-MAX dB\r\n");
   }
   else
   {
      FUNC_0(VAR_0, "-%d dB\r\n", (7-VAR_1) * 6);
   }

   return VAR_0;
}
