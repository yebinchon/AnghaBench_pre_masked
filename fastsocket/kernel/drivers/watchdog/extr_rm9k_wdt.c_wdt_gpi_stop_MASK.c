
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(void)
{
 u32 VAR_3;

 FUNC_1();
 VAR_3 = FUNC_2(VAR_0) & ~(0xf << (VAR_2 * 4));
 FUNC_3(VAR_3, VAR_0);
 VAR_3 = FUNC_2(VAR_1);
 FUNC_3(VAR_3 & ~(0x100 << VAR_2), VAR_1);
 FUNC_0();
 FUNC_4();
}
