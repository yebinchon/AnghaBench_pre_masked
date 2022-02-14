
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * gzFile ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,int,char const*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char*,char*,int) ;

gzFile FUNC_5(int VAR_0, const char *VAR_1)
{
   char *VAR_2;
   gzFile VAR_3;

   if (VAR_0 == -1 || (VAR_2 = (char *)FUNC_2(7 + 3 * sizeof(int))) == ((void*)0))
      return ((void*)0);

   FUNC_3(VAR_2, 7 + 3 * sizeof(int), "<fd:%d>", VAR_0);



   VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_1);
   FUNC_0(VAR_2);
   return VAR_3;
}
