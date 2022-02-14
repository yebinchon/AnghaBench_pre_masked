
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;




 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (int ,struct pt_regs*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct pt_regs*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_6(struct pt_regs *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5;
 unsigned int VAR_6, VAR_7;

 FUNC_4(FUNC_1(VAR_1), FUNC_2(VAR_1), FUNC_0(VAR_1), 0);
 VAR_3 = FUNC_3(FUNC_1(VAR_1), VAR_0);
 VAR_4 = FUNC_3(FUNC_2(VAR_1), VAR_0);

 VAR_6 = (VAR_4 > 5 ? 5 : VAR_4);
 VAR_7 = (1UL << VAR_6) - 1UL;

 VAR_5 = ((((VAR_3 >> 11) & 0x3) << 0) |
    (((VAR_3 >> 33) & 0x3) << 2) |
    (((VAR_3 >> 55) & 0x1) << 4) |
    (((VAR_3 >> 13) & 0xf) << 5) |
    (((VAR_3 >> 35) & 0xf) << 9) |
    (((VAR_3 >> 56) & 0xf) << 13) |
    (((VAR_3 >> 17) & VAR_7) << 17) |
    (((VAR_3 >> 39) & VAR_7) << (17 + VAR_6)) |
    (((VAR_3 >> 60) & 0xf) << (17 + (2*VAR_6))));

 switch (VAR_2) {
 case 129:
  VAR_5 <<= 1;
  break;

 case 128:
  VAR_5 <<= 2;
 };

 FUNC_5(VAR_0, VAR_5, FUNC_0(VAR_1));
}
