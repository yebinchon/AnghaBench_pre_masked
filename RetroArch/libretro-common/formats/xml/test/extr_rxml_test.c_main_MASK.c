
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

int FUNC_2(int VAR_1, char *VAR_2[])
{
   if (VAR_1 != 2)
   {
      FUNC_0(VAR_0, "Usage: %s <path>\n", VAR_2[0]);
      return 1;
   }

   FUNC_1(VAR_2[1]);
}
