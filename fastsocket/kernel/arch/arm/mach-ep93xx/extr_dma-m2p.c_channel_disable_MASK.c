
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct m2p_channel {int clk; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct m2p_channel*) ;
 int FUNC_3 (struct m2p_channel*,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct m2p_channel *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_4(VAR_5->base + VAR_0);
 VAR_6 &= ~(VAR_2 | VAR_1);
 FUNC_3(VAR_5, VAR_6);

 while (FUNC_2(VAR_5) == VAR_3)
  FUNC_1();

 FUNC_3(VAR_5, 0x0);

 while (FUNC_2(VAR_5) == VAR_4)
  FUNC_1();

 FUNC_0(VAR_5->clk);
}
