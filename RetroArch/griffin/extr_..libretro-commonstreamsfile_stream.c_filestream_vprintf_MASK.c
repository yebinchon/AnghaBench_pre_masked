
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef scalar_t__ int64_t ;
typedef int RFILE ;


 scalar_t__ FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char const*,int ) ;

int FUNC_2(RFILE *VAR_0, const char* VAR_1, va_list VAR_2)
{
   static char VAR_3[8 * 1024];
   int64_t VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);

   if (VAR_4 < 0)
      return -1;
   else if (VAR_4 == 0)
      return 0;

   return (int)FUNC_0(VAR_0, VAR_3, VAR_4);
}
