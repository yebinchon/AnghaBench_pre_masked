
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*,char const*,unsigned long) ;
 int VAR_0 ;
 unsigned long FUNC_1 (char const*,char**,int ) ;
 int FUNC_2 (char const*) ;

unsigned long
FUNC_3(const char *VAR_1, const char *VAR_2, int VAR_3)
{
   char *VAR_4;
   unsigned long VAR_5 = FUNC_1(VAR_2, &VAR_4, 0);

   if (VAR_4 <= VAR_2 || *VAR_4 || VAR_5 > 65535 || (VAR_3 && VAR_5 > 255))
   {
      FUNC_0(VAR_0, "%s: %s: invalid component value (%lu)\n", VAR_1, VAR_2, VAR_5);
      FUNC_2(VAR_1);
   }

   return VAR_5;
}
