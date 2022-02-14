
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int*) ;

void FUNC_5(uint32 *VAR_0)
{
 if(FUNC_0()<0)
   return;

 int VAR_1,VAR_2;
 uint32 VAR_3;

 VAR_3=FUNC_4(&VAR_1,&VAR_2);




 VAR_0[2]=0;
 if(VAR_3&FUNC_3(1))
  VAR_0[2]|=1;
 if(VAR_3&FUNC_3(3))
  VAR_0[2]|=2;
 VAR_3=FUNC_2(VAR_1,VAR_2);
 VAR_0[0]=VAR_3&0xFFFF;
 VAR_0[1]=(VAR_3>>16)&0xFFFF;
}
