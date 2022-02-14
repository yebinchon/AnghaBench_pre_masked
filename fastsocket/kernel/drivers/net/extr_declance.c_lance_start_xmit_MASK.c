
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int len; int data; } ;
struct TYPE_3__ {int tx_bytes; } ;
struct net_device {int trans_start; TYPE_1__ stats; scalar_t__ mem_start; } ;
struct lance_regs {int rdp; } ;
struct lance_private {int tx_new; int* tx_buf_ptr_lnc; int lock; int type; scalar_t__* tx_buf_ptr_cpu; struct lance_regs* ll; } ;
struct TYPE_4__ {int tmd1; int misc; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_9 ;
 int* FUNC_2 (int volatile*,int ,int ) ;
 struct lance_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 struct lance_private *VAR_12 = FUNC_3(VAR_11);
 volatile struct lance_regs *VAR_13 = VAR_12->ll;
 volatile u16 *VAR_14 = (volatile u16 *)VAR_11->mem_start;
 unsigned long VAR_15;
 int VAR_16, VAR_17;

 VAR_17 = VAR_10->len;

 if (VAR_17 < VAR_0) {
  if (FUNC_5(VAR_10, VAR_0))
   return VAR_5;
  VAR_17 = VAR_0;
 }

 VAR_11->stats.tx_bytes += VAR_17;

 FUNC_6(&VAR_12->lock, VAR_15);

 VAR_16 = VAR_12->tx_new;
 *FUNC_2(VAR_14, VAR_8[VAR_16].length, VAR_12->type) = (-VAR_17);
 *FUNC_2(VAR_14, VAR_8[VAR_16].misc, VAR_12->type) = 0;

 FUNC_0(VAR_12->type, (char *)VAR_12->tx_buf_ptr_cpu[VAR_16], VAR_10->data, VAR_17);


 *FUNC_2(VAR_14, VAR_8[VAR_16].tmd1, VAR_12->type) =
  ((VAR_12->tx_buf_ptr_lnc[VAR_16] >> 16) & 0xff) |
  (VAR_4 | VAR_3);
 VAR_12->tx_new = (VAR_16 + 1) & VAR_7;

 if (VAR_6 <= 0)
  FUNC_4(VAR_11);


 FUNC_8(&VAR_13->rdp, VAR_1 | VAR_2);

 FUNC_7(&VAR_12->lock, VAR_15);

 VAR_11->trans_start = VAR_9;
 FUNC_1(VAR_10);

  return VAR_5;
}
