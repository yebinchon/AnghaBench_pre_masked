
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (char*,char*) ;

int FUNC_4 (int VAR_0, char **VAR_1)
{

   int VAR_2 = 0;

   int VAR_3 = 48000;

   int VAR_4 = 2;

   int VAR_5 = 16;
   FUNC_1();

   if (VAR_0 > 1)
      VAR_2 = FUNC_0(VAR_1[1]);
   if (VAR_0 > 2)
      VAR_4 = FUNC_0(VAR_1[2]);
   if (VAR_0 > 3)
      VAR_3 = FUNC_0(VAR_1[3]);

   FUNC_3("Outputting audio to %s\n", VAR_2==0 ? "analogue":"hdmi");

   FUNC_2(VAR_3, VAR_5, VAR_4, VAR_2);
   return 0;
}
