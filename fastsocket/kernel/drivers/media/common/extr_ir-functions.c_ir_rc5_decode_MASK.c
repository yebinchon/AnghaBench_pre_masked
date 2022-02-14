
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int,char*,unsigned int,...) ;

__attribute__((used)) static u32 FUNC_5(unsigned int VAR_0)
{
 unsigned int VAR_1 = VAR_0;
 unsigned int VAR_2;
 unsigned int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 14; ++VAR_4) {
  VAR_2 = VAR_0 & 0x3;
  VAR_0 >>= 2;

  VAR_3 <<= 1;
  switch (VAR_2) {
  case 0:
  case 2:
   break;
  case 1:
   VAR_3 |= 1;
   break;
  case 3:
   FUNC_4(1, "ir-common: ir_rc5_decode(%x) bad code\n", VAR_1);
   return 0;
  }
 }
 FUNC_4(1, "ir-common: code=%x, rc5=%x, start=%x, toggle=%x, address=%x, "
  "instr=%x\n", VAR_3, VAR_1, FUNC_2(VAR_3),
  FUNC_3(VAR_3), FUNC_0(VAR_3), FUNC_1(VAR_3));
 return VAR_3;
}
