
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,char const*,int,int,int,int) ;
 int FUNC_3 (int,int*,int*,int*) ;

int FUNC_4(u32 VAR_0, const char *VAR_1)
{
   u32 VAR_2;
   u32 VAR_3;
   u32 VAR_4;
   u32 VAR_5;
   u32 VAR_6;

   VAR_2 = FUNC_3(VAR_0, &VAR_3, &VAR_4, &VAR_5);


   if (VAR_2 == 1 || FUNC_0(VAR_0) != 0)
      return -1;


   if ((VAR_6 = FUNC_2(VAR_0, VAR_1, 2, VAR_3, VAR_4, VAR_5)) != 0)
   {

      FUNC_1(VAR_4, VAR_6, VAR_5);
      return 0;
   }

   return -2;
}
