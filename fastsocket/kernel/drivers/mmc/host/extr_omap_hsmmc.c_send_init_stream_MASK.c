
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int irq; int base; scalar_t__ protect_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned long VAR_8 ;
 unsigned long FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct omap_hsmmc_host *VAR_9)
{
 int VAR_10 = 0;
 unsigned long VAR_11;

 if (VAR_9->protect_card)
  return;

 FUNC_2(VAR_9->irq);
 FUNC_1(VAR_9->base, VAR_2,
  FUNC_0(VAR_9->base, VAR_2) | VAR_3);
 FUNC_1(VAR_9->base, VAR_1, VAR_4);

 VAR_11 = VAR_8 + FUNC_4(VAR_5);
 while ((VAR_10 != VAR_0) && FUNC_5(VAR_8, VAR_11))
  VAR_10 = FUNC_0(VAR_9->base, VAR_6) & VAR_0;

 FUNC_1(VAR_9->base, VAR_2,
  FUNC_0(VAR_9->base, VAR_2) & ~VAR_3);

 FUNC_1(VAR_9->base, VAR_6, VAR_7);
 FUNC_0(VAR_9->base, VAR_6);

 FUNC_3(VAR_9->irq);
}
