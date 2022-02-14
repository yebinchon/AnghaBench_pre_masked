
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgiseeq_regs {int dummy; } ;
struct sgiseeq_private {scalar_t__ tx_old; scalar_t__ tx_new; int tx_lock; struct sgiseeq_regs* sregs; struct hpc3_ethregs* hregs; } ;
struct net_device {int dummy; } ;
struct hpc3_ethregs {int reset; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sgiseeq_private*) ;
 struct sgiseeq_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct sgiseeq_private*,struct hpc3_ethregs*,struct sgiseeq_regs*) ;
 int FUNC_5 (struct net_device*,struct sgiseeq_private*,struct hpc3_ethregs*,struct sgiseeq_regs*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = (struct net_device *) VAR_3;
 struct sgiseeq_private *VAR_5 = FUNC_1(VAR_4);
 struct hpc3_ethregs *VAR_6 = VAR_5->hregs;
 struct sgiseeq_regs *VAR_7 = VAR_5->sregs;

 FUNC_6(&VAR_5->tx_lock);


 VAR_6->reset = VAR_0;


 FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);


 if (VAR_5->tx_old != VAR_5->tx_new)
  FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);

 if ((FUNC_0(VAR_5) > 0) && FUNC_2(VAR_4)) {
  FUNC_3(VAR_4);
 }
 FUNC_7(&VAR_5->tx_lock);

 return VAR_1;
}
