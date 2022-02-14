
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_4)
{
 u32 VAR_5;
 const u32 VAR_6 = (VAR_4 * VAR_0) & ~0x0000000f;

 FUNC_2();
 VAR_5 = FUNC_3(VAR_1) & ~(0xf << (VAR_2 * 4));
 FUNC_4(VAR_5, VAR_1);
 FUNC_6();
 FUNC_0(VAR_6, VAR_3 + 0x0000);
 FUNC_6();
 FUNC_4(VAR_5 | (0x2 << (VAR_2 * 4)), VAR_1);
 FUNC_6();
 FUNC_4(VAR_5 | (0x5 << (VAR_2 * 4)), VAR_1);
 FUNC_1();
 FUNC_5();
}
