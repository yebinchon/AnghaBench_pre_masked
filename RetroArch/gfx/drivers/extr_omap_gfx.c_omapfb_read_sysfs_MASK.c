
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,int,size_t,int *) ;
 scalar_t__ FUNC_3 (char) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, char *VAR_1, size_t VAR_2)
{
   int VAR_3;
   FILE *VAR_4 = FUNC_1(VAR_0, "r");

   if (!VAR_4)
      return -1;

   VAR_3 = FUNC_2(VAR_1, 1, VAR_2 - 1, VAR_4);
   FUNC_0(VAR_4);

   if (VAR_3 <= 0)
      return -1;

   VAR_1[VAR_3] = 0;
   for (VAR_3--; VAR_3 >= 0 && FUNC_3(VAR_1[VAR_3]); VAR_3--)
      VAR_1[VAR_3] = 0;

   return 0;
}
