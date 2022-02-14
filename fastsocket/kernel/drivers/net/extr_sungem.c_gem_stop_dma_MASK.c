
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gem {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gem *VAR_8)
{
 u32 VAR_9;


 VAR_9 = FUNC_0(VAR_8->regs + VAR_6);
 FUNC_1(VAR_9 & ~VAR_7, VAR_8->regs + VAR_6);
 VAR_9 = FUNC_0(VAR_8->regs + VAR_4);
 FUNC_1(VAR_9 & ~VAR_5, VAR_8->regs + VAR_4);
 VAR_9 = FUNC_0(VAR_8->regs + VAR_2);
 FUNC_1(VAR_9 & ~VAR_3, VAR_8->regs + VAR_2);
 VAR_9 = FUNC_0(VAR_8->regs + VAR_0);
 FUNC_1(VAR_9 & ~VAR_1, VAR_8->regs + VAR_0);

 (void) FUNC_0(VAR_8->regs + VAR_0);


}
