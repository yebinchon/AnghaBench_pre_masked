
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int,int,char**) ;
 int FUNC_4 (int,int,char**) ;
 int FUNC_5 (int,char**) ;
 int FUNC_6 (int,int,char**) ;
 int VAR_2 ;

int FUNC_7(int VAR_3, char **VAR_4)
{
   int VAR_5 = VAR_0;

   while (VAR_3 > 1)
   {
      if (VAR_3 > 2 && FUNC_2(VAR_4[1], "-c") == 0)
      {
         VAR_5 = FUNC_0(VAR_4[2]);
         VAR_3 -= 2;
         VAR_4 += 2;
      }

      else if (FUNC_2(VAR_4[1], "-v") == 0)
      {
         ++VAR_2;
         --VAR_3;
         ++VAR_4;
      }

      else
         break;
   }

   if (VAR_5 > 0 && VAR_3 > 1)
   {
      if (FUNC_2(VAR_4[1], "ascii") == 0)
         return FUNC_3(VAR_5, VAR_3-1, VAR_4+1);
      else if (FUNC_2(VAR_4[1], "checkfp") == 0)
         return FUNC_4(VAR_5, VAR_3-1, VAR_4+1);
      else if (FUNC_2(VAR_4[1], "muldiv") == 0)
         return FUNC_6(VAR_5, VAR_3-1, VAR_4+1);
      else if (FUNC_2(VAR_4[1], "gamma") == 0)
         return FUNC_5(VAR_3-1, VAR_4+1);
   }


   FUNC_1(VAR_1,
      "usage: tarith [-v] [-c count] {ascii,muldiv,gamma} [args]\n");
   FUNC_1(VAR_1, " arguments: ascii [-a (all results)] [-e error%%]\n");
   FUNC_1(VAR_1, "            checkfp [-l max-number-chars]\n");
   FUNC_1(VAR_1, "            muldiv\n");
   FUNC_1(VAR_1, "            gamma -s (silent) -g (only gamma; no log)\n");
   return 1;
}
