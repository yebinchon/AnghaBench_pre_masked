
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; int protocol; struct net_device* dev; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {struct net_device* net_dev; } ;
struct i2400m {TYPE_1__ wimax_dev; } ;
struct device {int dummy; } ;
typedef enum i2400m_cs { ____Placeholder_i2400m_cs } i2400m_cs ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,struct device*,scalar_t__,int ) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*,struct sk_buff*,int ,int) ;
 int FUNC_3 (int,struct device*,char*,struct i2400m*,struct sk_buff*,int ,int) ;
 int FUNC_4 (int,struct device*,char*,int ) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (int) ;
 struct device* FUNC_7 (struct i2400m*) ;
 int FUNC_8 (struct net_device*,scalar_t__,int ) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;

void FUNC_11(struct i2400m *VAR_2, struct sk_buff *VAR_3,
      enum i2400m_cs VAR_4)
{
 struct net_device *VAR_5 = VAR_2->wimax_dev.net_dev;
 struct device *VAR_6 = FUNC_7(VAR_2);
 int VAR_7;

 FUNC_3(2, VAR_6, "(i2400m %p skb %p [%u] cs %d)\n",
    VAR_2, VAR_3, VAR_3->len, VAR_4);
 switch(VAR_4) {
 case 128:
 case 129:
  VAR_7 = VAR_1;
  FUNC_8(VAR_2->wimax_dev.net_dev,
       VAR_3->data - VAR_0,
       FUNC_0(VAR_1));
  FUNC_10(VAR_3, -VAR_0);
  VAR_3->dev = VAR_2->wimax_dev.net_dev;
  VAR_3->protocol = FUNC_6(VAR_1);
  VAR_5->stats.rx_packets++;
  VAR_5->stats.rx_bytes += VAR_3->len;
  break;
 default:
  FUNC_5(VAR_6, "ERX: BUG? CS type %u unsupported\n", VAR_4);
  goto error;

 }
 FUNC_4(3, VAR_6, "ERX: receiving %d bytes to the network stack\n",
   VAR_3->len);
 FUNC_1(4, VAR_6, VAR_3->data, VAR_3->len);
 FUNC_9(VAR_3);
error:
 FUNC_2(2, VAR_6, "(i2400m %p skb %p [%u] cs %d) = void\n",
  VAR_2, VAR_3, VAR_3->len, VAR_4);
}
