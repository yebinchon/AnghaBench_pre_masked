
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(void)
{
 static int VAR_5[8]={0x87,0x83,0x81,0x82,0,0x8b,0x89,0x8a};
 uint32 VAR_6;

 if(VAR_3)
 {
  FUNC_0(0xd4,(VAR_2&0x3)|0x4);
  FUNC_0(0xd8,0x0);
  FUNC_0(0xd6,(VAR_2&0x3)|0x58);
  VAR_6=((VAR_2&3)<<2)+0xC2;
 }
 else
 {
  FUNC_0(0xA,VAR_1|0x4);
  FUNC_0(0xC,0x0);
  FUNC_0(0xB,VAR_1|0x58);
  VAR_6=(VAR_1<<1)+1;
 }


 FUNC_0(VAR_6,(VAR_4*2-1));
 FUNC_0(VAR_6,(VAR_4*2-1)>>8);


 FUNC_0(VAR_5[VAR_3?VAR_2:VAR_1],VAR_0>>16);


 if(VAR_3)
  VAR_6=((VAR_2&3)<<2)+0xc0;
 else
  VAR_6=VAR_1<<1;

 FUNC_0(VAR_6,(VAR_0>>VAR_3));
 FUNC_0(VAR_6,(VAR_0>>(8+VAR_3)));
}
