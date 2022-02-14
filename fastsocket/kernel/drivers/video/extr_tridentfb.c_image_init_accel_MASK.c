
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {int dummy; } ;


 int FUNC_0 (struct tridentfb_par*,int,int) ;

__attribute__((used)) static void FUNC_1(struct tridentfb_par *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2 == 24 ? 2: (VAR_2 >> 4);

 FUNC_0(VAR_0, 0x2120, 0xF0000000);
 FUNC_0(VAR_0, 0x2120, 0x40000000 | VAR_3);
 FUNC_0(VAR_0, 0x2120, 0x80000000);
 FUNC_0(VAR_0, 0x2144, 0x00000000);
 FUNC_0(VAR_0, 0x2148, 0x00000000);
 FUNC_0(VAR_0, 0x2150, 0x00000000);
 FUNC_0(VAR_0, 0x2154, 0x00000000);
 FUNC_0(VAR_0, 0x2120, 0x60000000 | (VAR_1 << 16) | VAR_1);
 FUNC_0(VAR_0, 0x216C, 0x00000000);
 FUNC_0(VAR_0, 0x2170, 0x00000000);
 FUNC_0(VAR_0, 0x217C, 0x00000000);
 FUNC_0(VAR_0, 0x2120, 0x10000000);
 FUNC_0(VAR_0, 0x2130, (2047 << 16) | 2047);
}
