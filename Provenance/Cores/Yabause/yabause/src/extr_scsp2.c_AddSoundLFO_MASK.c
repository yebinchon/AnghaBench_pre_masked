
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 int FUNC_0 (char*,char*,char const*) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, const char *VAR_1, u16 VAR_2, u16 VAR_3)
{
   if (VAR_2 > 0)
   {
      switch (VAR_3)
      {
         case 0:
            FUNC_0(VAR_0, "%s Sawtooth\r\n", VAR_1);
            break;
         case 1:
            FUNC_0(VAR_0, "%s Square\r\n", VAR_1);
            break;
         case 2:
            FUNC_0(VAR_0, "%s Triangle\r\n", VAR_1);
            break;
         case 3:
            FUNC_0(VAR_0, "%s Noise\r\n", VAR_1);
            break;
      }
   }

   return VAR_0;
}
