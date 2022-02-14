
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,int,int) ;

u8 FUNC_3(u8 VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4;
 FUNC_1(0x80000000 | (VAR_0<<16) | (VAR_1<<11) | (VAR_2<<8) | VAR_3, 0xcf8);
 VAR_4 = FUNC_0(0xcfc + (VAR_3&3));
 FUNC_2("%x reading 1 from %x: %x\n", VAR_1, VAR_3, VAR_4);
 return VAR_4;
}
