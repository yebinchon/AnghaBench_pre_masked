
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s32 ;


 int FUNC_0 (int,int*) ;

__attribute__((used)) static int FUNC_1(s32 VAR_0,char *VAR_1)
{
 s32 VAR_2;
 u16 VAR_3;

 *VAR_1 = 0;
 VAR_3 = 0xA000;
 VAR_2 = FUNC_0(VAR_0,&VAR_3);
 if(VAR_2==1 && !(VAR_3&0x0800)) VAR_2 = 0;
 else if(VAR_2==1) *VAR_1 = (VAR_3&0xff);

 return VAR_2;
}
