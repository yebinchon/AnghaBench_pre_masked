
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pxa3xx_freq_info {int core_xn; int core_xl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct pxa3xx_freq_info *VAR_6)
{
 uint32_t VAR_7 = VAR_2 | VAR_1;
 uint32_t VAR_8 = VAR_0;
 uint32_t VAR_9;

 VAR_8 &= ~(VAR_2 | VAR_1 | VAR_3);
 VAR_8 |= FUNC_1(VAR_6->core_xn) | FUNC_0(VAR_6->core_xl);


 VAR_8 |= FUNC_2(VAR_5);

 VAR_9 = (VAR_6->core_xn == 2) ? 0x3 : 0x2;

 VAR_0 = VAR_8;
 __asm__("mcr p14, 0, %0, c6, c0, 0\n" : : "r"(VAR_9));

 while ((VAR_4 & VAR_7) != (VAR_8 & VAR_7))
  FUNC_3();
}
