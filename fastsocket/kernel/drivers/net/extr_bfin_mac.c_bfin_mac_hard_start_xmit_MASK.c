
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_6__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_2__ stats; int trans_start; } ;
struct TYPE_8__ {int start_addr; int config; } ;
struct TYPE_5__ {scalar_t__ status_word; } ;
struct TYPE_7__ {int packet; struct TYPE_7__* next; TYPE_4__ desc_a; TYPE_1__ status; struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_6,
    struct net_device *VAR_7)
{
 u16 *VAR_8;
 u32 VAR_9 = (unsigned long)(VAR_6->data) & 0x3;
 VAR_4->skb = VAR_6;

 if (VAR_9 == 0x2) {

  VAR_8 = (u16 *)(VAR_6->data) - 1;
    *VAR_8 = (u16)(VAR_6->len);
  VAR_4->desc_a.start_addr = (u32)VAR_8;

  FUNC_7((u32)VAR_8,
    (u32)((u8 *)VAR_8 + VAR_6->len + 4));
 } else {
  *((u16 *)(VAR_4->packet)) = (u16)(VAR_6->len);
  FUNC_8((u8 *)(VAR_4->packet + 2), VAR_6->data,
   VAR_6->len);
  VAR_4->desc_a.start_addr =
   (u32)VAR_4->packet;
  if (VAR_4->status.status_word != 0)
   VAR_4->status.status_word = 0;
  FUNC_7(
   (u32)VAR_4->packet,
   (u32)(VAR_4->packet + VAR_6->len + 2));
 }





 FUNC_0();


 VAR_4->desc_a.config |= VAR_0;


 if (FUNC_2() & VAR_1)
  goto out;


 FUNC_5(&(VAR_4->desc_a));

 FUNC_4(VAR_4->desc_a.config);

 FUNC_6(FUNC_3() | VAR_3);

out:
 FUNC_1();
 VAR_4 = VAR_4->next;
 VAR_7->trans_start = VAR_5;
 VAR_7->stats.tx_packets++;
 VAR_7->stats.tx_bytes += (VAR_6->len);
 return VAR_2;
}
