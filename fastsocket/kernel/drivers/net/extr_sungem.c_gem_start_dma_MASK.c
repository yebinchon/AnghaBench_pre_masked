
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
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct gem*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct gem *VAR_10)
{
 u32 VAR_11;


 VAR_11 = FUNC_1(VAR_10->regs + VAR_8);
 FUNC_3(VAR_11 | VAR_9, VAR_10->regs + VAR_8);
 VAR_11 = FUNC_1(VAR_10->regs + VAR_4);
 FUNC_3(VAR_11 | VAR_5, VAR_10->regs + VAR_4);
 VAR_11 = FUNC_1(VAR_10->regs + VAR_2);
 FUNC_3(VAR_11 | VAR_3, VAR_10->regs + VAR_2);
 VAR_11 = FUNC_1(VAR_10->regs + VAR_0);
 FUNC_3(VAR_11 | VAR_1, VAR_10->regs + VAR_0);

 (void) FUNC_1(VAR_10->regs + VAR_0);
 FUNC_2(100);

 FUNC_0(VAR_10);

 FUNC_3(VAR_7 - 4, VAR_10->regs + VAR_6);
}
