
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static char* FUNC_4(uint VAR_0)
{
 static char VAR_1[15];
 if(VAR_0 == 0)
  FUNC_3(VAR_1, "#$%x", FUNC_2() & 0xff);
 else if(VAR_0 == 1)
  FUNC_3(VAR_1, "#$%x", FUNC_0() & 0xffff);
 else
  FUNC_3(VAR_1, "#$%x", FUNC_1() & 0xffffffff);
 return VAR_1;
}
