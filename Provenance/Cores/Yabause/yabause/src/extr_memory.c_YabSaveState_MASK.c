
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;

int FUNC_4(const char *VAR_0)
{
   FILE *VAR_1;
   int VAR_2;


   VAR_0 = FUNC_0(VAR_0);
   if (!VAR_0)
      return -1;

   if ((VAR_1 = FUNC_3(VAR_0, "wb")) == ((void*)0))
      return -1;

   VAR_2 = FUNC_1(VAR_1);
   FUNC_2(VAR_1);

   return VAR_2;
}
