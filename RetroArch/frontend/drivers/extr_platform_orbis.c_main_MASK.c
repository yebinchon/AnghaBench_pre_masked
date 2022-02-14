
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int confLink; } ;
typedef TYPE_1__ OrbisGlobalConf ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char**,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,uintptr_t*) ;

int FUNC_5(int VAR_1, char *VAR_2[])
{
   int VAR_3;

   FUNC_3();

 uintptr_t VAR_4=0;
 FUNC_4(VAR_2[1],"%p",&VAR_4);
 VAR_0=(OrbisGlobalConf *)VAR_4;
 VAR_3=FUNC_1(VAR_0->confLink);
 if(!VAR_3)
 {
  FUNC_0();
  return -1;
 }

   return FUNC_2(VAR_1, VAR_2, ((void*)0));
}
