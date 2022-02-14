
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct savagefb_par {int paletteEnabled; } ;


 int FUNC_0 (int,struct savagefb_par*) ;
 int FUNC_1 (int,int,struct savagefb_par*) ;

__attribute__((used)) static inline void FUNC_2(struct savagefb_par *VAR_0)
{
 u8 VAR_1;

 VAR_1 = FUNC_0(0x3da, VAR_0);
 FUNC_1(0x3c0, 0x00, VAR_0);
 VAR_0->paletteEnabled = 1;
}
