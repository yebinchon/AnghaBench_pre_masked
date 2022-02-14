
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,size_t,char*) ;
 int FUNC_2 (int) ;

char *FUNC_3(char *VAR_0, size_t VAR_1, uint32_t VAR_2)
{
   char *VAR_3 = (char*)&VAR_2;
   FUNC_2(VAR_1 >= 5);
   if (VAR_1 < 5)
   {
      VAR_0[0] = '\0';
   }
   else if (VAR_2)
   {
      FUNC_0(VAR_0, VAR_3, 4);
      VAR_0[4] = '\0';
   }
   else
   {
      FUNC_1(VAR_0, VAR_1, "<0>");
   }
   return VAR_0;
}
