
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;

void FUNC_3(void)
{
   if(VAR_2)
   {
      char VAR_3[100];



      FUNC_1(VAR_3, 100, "/var/log/vcos_log%u.txt", FUNC_2());

      VAR_0 = FUNC_0(VAR_3, "w");
   }
   else
      VAR_0 = VAR_1;
}
