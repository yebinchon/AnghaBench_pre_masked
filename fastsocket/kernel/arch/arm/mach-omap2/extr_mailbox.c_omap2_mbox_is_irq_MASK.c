
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_mbox2_priv {int notfull_bit; int newmsg_bit; int irqstatus; int irqenable; } ;
struct omap_mbox {scalar_t__ priv; } ;
typedef scalar_t__ omap_mbox_type_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct omap_mbox *VAR_1,
  omap_mbox_type_t VAR_2)
{
 struct omap_mbox2_priv *VAR_3 = (struct omap_mbox2_priv *)VAR_1->priv;
 u32 VAR_4 = (VAR_2 == VAR_0) ? VAR_3->notfull_bit : VAR_3->newmsg_bit;
 u32 VAR_5 = FUNC_0(VAR_3->irqenable);
 u32 VAR_6 = FUNC_0(VAR_3->irqstatus);

 return (VAR_5 & VAR_6 & VAR_4);
}
