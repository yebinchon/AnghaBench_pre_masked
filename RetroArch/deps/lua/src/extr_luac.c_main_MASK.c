
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char**) ;
 char* FUNC_8 (int *,int) ;
 int VAR_2 ;
 int FUNC_9 (char*) ;

int FUNC_10(int VAR_3, char* VAR_4[])
{
 lua_State* VAR_5;
 int VAR_6=FUNC_0(VAR_3,VAR_4);
 VAR_3-=VAR_6; VAR_4+=VAR_6;
 if (VAR_3<=0) FUNC_9("no input files given");
 VAR_5=FUNC_2();
 if (VAR_5==((void*)0)) FUNC_1("cannot create state: not enough memory");
 FUNC_5(VAR_5,&VAR_2);
 FUNC_6(VAR_5,VAR_3);
 FUNC_7(VAR_5,VAR_4);
 if (FUNC_4(VAR_5,2,0,0)!=VAR_1) FUNC_1(FUNC_8(VAR_5,-1));
 FUNC_3(VAR_5);
 return VAR_0;
}
