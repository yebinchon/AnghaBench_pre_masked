
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int ,int ) ;
 scalar_t__ FUNC_2 (int *,void const*,scalar_t__) ;

bool FUNC_3(const char *VAR_2, const void *VAR_3, int64_t VAR_4)
{
   int64_t VAR_5 = 0;
   RFILE *VAR_6 = FUNC_1(VAR_2,
         VAR_1,
         VAR_0);
   if (!VAR_6)
      return 0;

   VAR_5 = FUNC_2(VAR_6, VAR_3, VAR_4);
   FUNC_0(VAR_6);

   if (VAR_5 != VAR_4)
      return 0;

   return 1;
}
