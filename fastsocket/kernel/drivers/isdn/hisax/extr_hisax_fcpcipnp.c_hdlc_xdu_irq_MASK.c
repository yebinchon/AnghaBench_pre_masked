
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cmd; scalar_t__ xml; } ;
struct TYPE_3__ {TYPE_2__ sr; } ;
struct fritz_bcs {scalar_t__ mode; scalar_t__ tx_cnt; int tx_skb; TYPE_1__ ctrl; struct fritz_adapter* adapter; } ;
struct fritz_adapter {int (* write_ctrl ) (struct fritz_bcs*,int) ;} ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct fritz_bcs*,int) ;
 int FUNC_3 (struct fritz_bcs*,int) ;

__attribute__((used)) static inline void FUNC_4(struct fritz_bcs *VAR_2)
{
 struct fritz_adapter *VAR_3 = VAR_2->adapter;





 VAR_2->ctrl.sr.xml = 0;
 VAR_2->ctrl.sr.cmd |= VAR_0;
 VAR_3->write_ctrl(VAR_2, 1);
 VAR_2->ctrl.sr.cmd &= ~VAR_0;

 if (!VAR_2->tx_skb) {
  FUNC_0(0x10, "XDU without skb");
  VAR_3->write_ctrl(VAR_2, 1);
  return;
 }

 if (VAR_2->mode == VAR_1) {
  FUNC_1(VAR_2->tx_skb, VAR_2->tx_cnt);
  VAR_2->tx_cnt = 0;
 }
}
