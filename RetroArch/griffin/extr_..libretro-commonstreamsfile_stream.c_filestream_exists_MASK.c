
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int ,int ) ;

bool FUNC_2(const char *VAR_2)
{
   RFILE *VAR_3 = ((void*)0);

   if (!VAR_2 || !*VAR_2)
      return 0;

   VAR_3 = FUNC_1(VAR_2,
         VAR_1,
         VAR_0);

   if (!VAR_3)
      return 0;

   FUNC_0(VAR_3);
   return 1;
}
