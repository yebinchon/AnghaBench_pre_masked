
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_2(int VAR_2)
{
 switch(VAR_2)
 {
 case -1: VAR_1-=10; if(VAR_1<0) VAR_1=0; break;
 case 0: VAR_1=100; break;
 case 1: VAR_1+=10; if(VAR_1>150) VAR_1=150; break;
 }
 VAR_0=0;
 FUNC_0(VAR_1);
 FUNC_1("Sound volume %d.", VAR_1);
}
