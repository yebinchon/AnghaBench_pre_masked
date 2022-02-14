
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int*) ;

__attribute__((used)) static int FUNC_3(s32 VAR_1)
{
 s32 VAR_2;
 u16 VAR_3;

 if(!FUNC_0(VAR_1,VAR_0,((void*)0))) return 0;

 VAR_3 = 0x9000;
 VAR_2 = FUNC_2(VAR_1,&VAR_3);
 if(VAR_2==1 && !(VAR_3&0x0470)) VAR_2 = 0;

 FUNC_1(VAR_1);
 return VAR_2;
}
