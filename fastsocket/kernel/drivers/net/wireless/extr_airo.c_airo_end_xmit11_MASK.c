
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int data; } ;
struct TYPE_4__ {int tx_window_errors; } ;
struct net_device {TYPE_2__ stats; int trans_start; struct airo_info* ml_priv; } ;
struct TYPE_3__ {int fid; struct sk_buff* skb; } ;
struct airo_info {int* fids; int sem; int flags; int jobs; TYPE_1__ xmit11; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct airo_info*,int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5) {
 u16 VAR_6;
 int VAR_7;
 struct airo_info *VAR_8 = VAR_5->ml_priv;
 struct sk_buff *VAR_9 = VAR_8->xmit11.skb;
 int VAR_10 = VAR_8->xmit11.fid;
 u32 *VAR_11 = VAR_8->fids;

 FUNC_0(VAR_1, &VAR_8->jobs);
 FUNC_0(VAR_0, &VAR_8->flags);
 VAR_6 = FUNC_3 (VAR_8, VAR_11[VAR_10], VAR_9->data);
 FUNC_4(&VAR_8->sem);

 VAR_7 = VAR_2 / 2;
 if ( VAR_6 == VAR_3 ) {
  VAR_5->trans_start = VAR_4;
  for (; VAR_7 < VAR_2 && (VAR_8->fids[VAR_7] & 0xffff0000); VAR_7++);
 } else {
  VAR_8->fids[VAR_10] &= 0xffff;
  VAR_5->stats.tx_window_errors++;
 }
 if (VAR_7 < VAR_2)
  FUNC_2(VAR_5);
 FUNC_1(VAR_9);
}
