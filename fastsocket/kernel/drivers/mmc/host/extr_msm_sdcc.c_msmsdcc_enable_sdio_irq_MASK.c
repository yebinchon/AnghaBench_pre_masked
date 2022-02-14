
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msmsdcc_host {int lock; scalar_t__ base; int saved_irq0mask; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct msmsdcc_host* FUNC_0 (struct mmc_host*) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_3, int VAR_4)
{
 struct msmsdcc_host *VAR_5 = FUNC_0(VAR_3);
 unsigned long VAR_6;
 u32 VAR_7;

 FUNC_2(&VAR_5->lock, VAR_6);
 if (VAR_2 == 1) {
  VAR_7 = FUNC_1(VAR_5->base + VAR_1);
  if (VAR_4)
   VAR_7 |= VAR_0;
  else
   VAR_7 &= ~VAR_0;
  VAR_5->saved_irq0mask = VAR_7;
  FUNC_4(VAR_7, VAR_5->base + VAR_1);
 }
 FUNC_3(&VAR_5->lock, VAR_6);
}
