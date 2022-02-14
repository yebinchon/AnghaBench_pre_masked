
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ frame_gap; int control; } ;
struct TYPE_4__ {TYPE_1__ wregs; } ;
struct sgiseeq_regs {int tstat; TYPE_2__ rw; } ;
struct sgiseeq_private {int tx_desc; int rx_desc; int control; scalar_t__ is_edlc; struct hpc3_ethregs* hregs; } ;
struct net_device {int dummy; } ;
struct hpc3_ethregs {void* tx_ndptr; void* rx_ndptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct sgiseeq_private*,int ) ;
 int FUNC_1 (struct hpc3_ethregs*,struct sgiseeq_regs*) ;
 int FUNC_2 (struct sgiseeq_private*,struct hpc3_ethregs*,struct sgiseeq_regs*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct sgiseeq_private *VAR_3,
       struct sgiseeq_regs *VAR_4)
{
 struct hpc3_ethregs *VAR_5 = VAR_3->hregs;
 int VAR_6;

 FUNC_1(VAR_5, VAR_4);
 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6)
  return VAR_6;


 if (VAR_3->is_edlc) {
  VAR_4->tstat = VAR_0;
  VAR_4->rw.wregs.control = VAR_3->control;
  VAR_4->rw.wregs.frame_gap = 0;
 } else {
  VAR_4->tstat = VAR_1;
 }

 VAR_5->rx_ndptr = FUNC_0(VAR_3, VAR_3->rx_desc);
 VAR_5->tx_ndptr = FUNC_0(VAR_3, VAR_3->tx_desc);

 FUNC_2(VAR_3, VAR_5, VAR_4);
 return 0;
}
