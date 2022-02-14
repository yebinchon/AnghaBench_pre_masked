
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct sk_buff {int cb; scalar_t__ data; } ;
struct TYPE_4__ {int rx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct i2400m_roq_data {unsigned int sn; int cs; } ;
struct i2400m_roq {int ws; } ;
struct i2400m_pl_edata_hdr {int cs; int reorder; } ;
struct TYPE_3__ {struct net_device* net_dev; } ;
struct i2400m {struct i2400m_roq* rx_roq; TYPE_1__ wimax_dev; } ;
struct device {int dummy; } ;
typedef enum i2400m_cs { ____Placeholder_i2400m_cs } i2400m_cs ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;



 unsigned int VAR_8 ;

 int FUNC_1 (struct i2400m_roq*,unsigned int) ;
 int FUNC_2 (int,struct device*,void const*,size_t) ;
 int FUNC_3 (int,struct device*,char*,struct i2400m*,struct sk_buff*,unsigned int,void const*,size_t) ;
 int FUNC_4 (int,struct device*,char*,struct i2400m*,struct sk_buff*,unsigned int,void const*,size_t) ;
 int FUNC_5 (int,struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*,...) ;
 struct device* FUNC_7 (struct i2400m*) ;
 int FUNC_8 (struct i2400m*,struct sk_buff*,int) ;
 int FUNC_9 (struct i2400m*,struct i2400m_roq*,struct sk_buff*,unsigned int) ;
 int FUNC_10 (struct i2400m*,struct i2400m_roq*,struct sk_buff*,unsigned int) ;
 int FUNC_11 (struct i2400m*,struct i2400m_roq*) ;
 int FUNC_12 (struct i2400m*,struct i2400m_roq*,unsigned int) ;
 int FUNC_13 (struct sk_buff*) ;
 unsigned int FUNC_14 (int ) ;
 struct sk_buff* FUNC_15 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 struct sk_buff* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,int) ;
 int FUNC_19 (struct sk_buff*,int) ;

__attribute__((used)) static
void FUNC_20(struct i2400m *VAR_9, struct sk_buff *VAR_10,
       unsigned VAR_11, const void *VAR_12, size_t VAR_13)
{
 struct device *VAR_14 = FUNC_7(VAR_9);
 const struct i2400m_pl_edata_hdr *VAR_15 = VAR_12;
 struct net_device *VAR_16 = VAR_9->wimax_dev.net_dev;
 struct sk_buff *VAR_17;
 enum i2400m_cs VAR_18;
 u32 VAR_19;
 unsigned VAR_20, VAR_21, VAR_22, VAR_23;
 struct i2400m_roq *VAR_24;
 struct i2400m_roq_data *VAR_25;

 FUNC_0(VAR_0 > sizeof(*VAR_15));

 FUNC_4(2, VAR_14, "(i2400m %p skb_rx %p single %u payload %p "
    "size %zu)\n", VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 if (VAR_13 < sizeof(*VAR_15)) {
  FUNC_6(VAR_14, "ERX: HW BUG? message with short header (%zu "
   "vs %zu bytes expected)\n", VAR_13, sizeof(*VAR_15));
  goto error;
 }

 if (VAR_11) {
  VAR_17 = FUNC_17(VAR_10);
  FUNC_5(3, VAR_14, "ERX: skb %p reusing\n", VAR_17);
 } else {
  VAR_17 = FUNC_15(VAR_10, VAR_1);
  if (VAR_17 == ((void*)0)) {
   FUNC_6(VAR_14, "ERX: no memory to clone skb\n");
   VAR_16->stats.rx_dropped++;
   goto error_skb_clone;
  }
  FUNC_5(3, VAR_14, "ERX: skb %p cloned from %p\n", VAR_17, VAR_10);
 }




 FUNC_18(VAR_17, VAR_12 + sizeof(*VAR_15) - (void *) VAR_17->data);
 FUNC_19(VAR_17, (void *) FUNC_16(VAR_17) - VAR_12 - sizeof(*VAR_15));

 VAR_19 = FUNC_14(VAR_15->reorder);
 VAR_20 = VAR_19 & VAR_4;
 VAR_18 = VAR_15->cs;
 if (VAR_20) {
  VAR_21 = (VAR_19 >> VAR_8) & VAR_7;
  VAR_22 = (VAR_19 >> VAR_3) & VAR_2;
  VAR_23 = (VAR_19 >> VAR_6) & VAR_5;

  VAR_24 = &VAR_9->rx_roq[VAR_22];
  VAR_25 = (struct i2400m_roq_data *) &VAR_17->cb;
  VAR_25->sn = VAR_23;
  VAR_25->cs = VAR_18;
  FUNC_5(2, VAR_14, "ERX: reorder needed: "
    "type %u cin %u [ws %u] sn %u/%u len %zuB\n",
    VAR_21, VAR_22, VAR_24->ws, VAR_23,
    FUNC_1(VAR_24, VAR_23), VAR_13);
  FUNC_2(2, VAR_14, VAR_12, VAR_13);
  switch(VAR_21) {
  case 129:
   FUNC_11(VAR_9, VAR_24);
   FUNC_13(VAR_17);
   break;
  case 131:
   FUNC_9(VAR_9, VAR_24, VAR_17, VAR_23);
   break;
  case 128:
   FUNC_12(VAR_9, VAR_24, VAR_23);
   FUNC_13(VAR_17);
   break;
  case 130:
   FUNC_10(VAR_9, VAR_24, VAR_17, VAR_23);
   break;
  default:
   FUNC_6(VAR_14, "HW BUG? unknown reorder type %u\n", VAR_21);
  }
 }
 else
  FUNC_8(VAR_9, VAR_17, VAR_18);
error_skb_clone:
error:
 FUNC_3(2, VAR_14, "(i2400m %p skb_rx %p single %u payload %p "
  "size %zu) = void\n", VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 return;
}
