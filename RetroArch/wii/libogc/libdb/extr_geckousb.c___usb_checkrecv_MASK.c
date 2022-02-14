
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s32 ;


 int FUNC_0 (int,int*) ;

__attribute__((used)) static int FUNC_1(s32 VAR_0)
{
 s32 VAR_1;
 u16 VAR_2;

 VAR_2 = 0xD000;
 VAR_1 = FUNC_0(VAR_0,&VAR_2);
 if(VAR_1==1 && !(VAR_2&0x0400)) VAR_1 = 0;

 return VAR_1;
}
