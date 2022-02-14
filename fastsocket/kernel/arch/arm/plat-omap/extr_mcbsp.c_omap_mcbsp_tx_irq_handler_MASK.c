
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_mcbsp {int tx_irq_completion; int io_base; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct omap_mcbsp *VAR_5 = VAR_4;
 u16 VAR_6;

 VAR_6 = FUNC_0(VAR_5->io_base, VAR_1);
 FUNC_3(VAR_5->dev, "TX IRQ callback : 0x%x\n", VAR_6);

 if (VAR_6 & VAR_2) {
  FUNC_4(VAR_5->dev, "TX Frame Sync Error! : 0x%x\n",
   VAR_6);

  FUNC_1(VAR_5->io_base, VAR_1,
   VAR_6 & ~(VAR_2));
 } else {
  FUNC_2(&VAR_5->tx_irq_completion);
 }

 return VAR_0;
}
