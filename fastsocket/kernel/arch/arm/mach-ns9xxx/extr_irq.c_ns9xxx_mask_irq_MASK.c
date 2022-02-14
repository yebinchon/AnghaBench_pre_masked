
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_0)
{

 int VAR_1 = FUNC_3(VAR_0);
 u32 VAR_2 = FUNC_1(FUNC_0(VAR_1 / 4));
 VAR_2 &= ~(1 << (7 + 8 * (3 - (VAR_1 & 3))));
 FUNC_2(VAR_2, FUNC_0(VAR_1 / 4));
}
