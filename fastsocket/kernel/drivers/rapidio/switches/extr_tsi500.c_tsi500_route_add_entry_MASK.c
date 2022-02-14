
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rio_mport {int dummy; } ;


 int FUNC_0 (struct rio_mport*,int,int,int,int*) ;
 int FUNC_1 (struct rio_mport*,int,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct rio_mport *VAR_0, u16 VAR_1, u8 VAR_2, u16 VAR_3, u16 VAR_4, u8 VAR_5)
{
 int VAR_6;
 u32 VAR_7 = 0x10000 + 0xa00 + ((VAR_4 / 2)&~0x3);
 u32 VAR_8;

 if (VAR_3 == 0xff) {
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_7, &VAR_8);
  VAR_8 &= ~(0xf << (4*(VAR_4 & 0x7)));
  for (VAR_6=0;VAR_6<4;VAR_6++)
   FUNC_1(VAR_0, VAR_1, VAR_2, VAR_7 + (0x20000*VAR_6), VAR_8 | (VAR_5 << (4*(VAR_4 & 0x7))));
 }
 else {
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_7 + (0x20000*VAR_3), &VAR_8);
  VAR_8 &= ~(0xf << (4*(VAR_4 & 0x7)));
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_7 + (0x20000*VAR_3), VAR_8 | (VAR_5 << (4*(VAR_4 & 0x7))));
 }

 return 0;
}
