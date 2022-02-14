
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bba_priv {int revid; int devid; } ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static u32 FUNC_1(struct bba_priv *VAR_0,u32 VAR_1)
{
 u8 VAR_2,VAR_3,VAR_4,VAR_5;
 u8 VAR_6,VAR_7,VAR_8,VAR_9;
 u8 VAR_10,VAR_11,VAR_12;

 VAR_10 = VAR_0->revid;
 VAR_11 = FUNC_0(VAR_0->devid,8,8);
 VAR_12 = FUNC_0(VAR_0->devid,0,8);

 VAR_2 = FUNC_0(VAR_1,24,8);
 VAR_3 = FUNC_0(VAR_1,16,8);
 VAR_4 = FUNC_0(VAR_1, 8,8);
 VAR_5 = FUNC_0(VAR_1, 0,8);

 VAR_6 = ((VAR_2+VAR_3*0xc1+0x18+VAR_10)^(VAR_5*VAR_4+0x90))&0xff;
 VAR_7 = ((VAR_3+VAR_4+0x90)^(VAR_6+VAR_2-0xc1))&0xff;
 VAR_8 = ((VAR_4+0xc8)^(VAR_6+((VAR_11+VAR_10*0x23)^0x19)))&0xff;
 VAR_9 = ((VAR_2+0xc1)^(VAR_5+((VAR_12+0xc8)^0x90)))&0xff;

 return ((VAR_6<<24)|(VAR_7<<16)|(VAR_8<<8)|VAR_9);
}
