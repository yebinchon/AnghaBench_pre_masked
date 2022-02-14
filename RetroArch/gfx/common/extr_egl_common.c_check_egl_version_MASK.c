
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,char*,int*,int*) ;

bool FUNC_2(int VAR_2, int VAR_3)
{
   int VAR_4;
   int VAR_5, VAR_6;
   const char *VAR_7 = FUNC_0(VAR_0, VAR_1);

   if (!VAR_7)
      return 0;

   VAR_4 = FUNC_1(VAR_7, "%d.%d", &VAR_5, &VAR_6);
   if (VAR_4 != 2)
      return 0;

   if (VAR_5 < VAR_2)
      return 0;

   if (VAR_5 > VAR_2)
      return 1;

   if (VAR_6 >= VAR_3)
      return 1;

   return 0;
}
