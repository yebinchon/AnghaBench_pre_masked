
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,char*,char const*,unsigned int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(char* VAR_0, uint32_t VAR_1, const char* VAR_2)
{
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 8; ++VAR_5) {
  if (VAR_1 & (1 << VAR_5)) {
   VAR_3 = VAR_5;
   VAR_4 = 0;

   while (VAR_5 < 7 && (VAR_1 & (1 << (VAR_5 + 1)))) {
    VAR_5++;
    VAR_4++;
   }

   if (VAR_0[0] != 0)
    FUNC_1(VAR_0, "/");

   FUNC_0(VAR_0 + FUNC_2(VAR_0), "%s%d", VAR_2, VAR_3);
   if (VAR_4 > 0)
    FUNC_0(VAR_0 + FUNC_2(VAR_0), "-%s%d", VAR_2, VAR_3 + VAR_4);
  }
 }
}
