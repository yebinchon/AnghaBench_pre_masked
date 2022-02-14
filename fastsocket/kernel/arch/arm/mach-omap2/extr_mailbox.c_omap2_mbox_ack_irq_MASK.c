
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_mbox2_priv {int irqstatus; int newmsg_bit; int notfull_bit; } ;
struct omap_mbox {scalar_t__ priv; } ;
typedef scalar_t__ omap_mbox_type_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct omap_mbox *VAR_1,
  omap_mbox_type_t VAR_2)
{
 struct omap_mbox2_priv *VAR_3 = (struct omap_mbox2_priv *)VAR_1->priv;
 u32 VAR_4 = (VAR_2 == VAR_0) ? VAR_3->notfull_bit : VAR_3->newmsg_bit;

 FUNC_1(VAR_4, VAR_3->irqstatus);


 FUNC_0(VAR_3->irqstatus);
}
