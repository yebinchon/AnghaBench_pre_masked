
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u8 FUNC_2(u32 VAR_0)
{
 u8 VAR_1,VAR_2;

 if((VAR_0-0x01230000)==0x4567) return 255;
 else if((VAR_0-0x01230000)==0x4568) return 254;

 VAR_1 = FUNC_0(VAR_0,24,8);
 VAR_2 = FUNC_1((VAR_0&0x00ffffff));
 if(VAR_1>0x06) VAR_1 = 0x06;

 return VAR_2+(VAR_1*30);
}
