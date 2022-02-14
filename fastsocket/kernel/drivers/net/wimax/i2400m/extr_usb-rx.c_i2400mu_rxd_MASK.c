
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct net_device* net_dev; } ;
struct i2400m {TYPE_1__ wimax_dev; } ;
struct i2400mu {int rx_size; TYPE_2__* usb_iface; int urb_edc; int rx_size_acc; int rx_size_cnt; int rx_pending_count; int rx_wq; struct i2400m i2400m; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct net_device*,int,int ) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int,struct device*,char*,struct i2400mu*,int) ;
 int FUNC_6 (int,struct device*,char*,struct i2400mu*) ;
 int FUNC_7 (int,struct device*,char*,...) ;
 int FUNC_8 (struct device*,char*,...) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (struct i2400m*,struct sk_buff*) ;
 struct sk_buff* FUNC_11 (struct i2400mu*,struct sk_buff*) ;
 int FUNC_12 (struct i2400mu*) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (int ,int) ;

__attribute__((used)) static
int FUNC_18(void *VAR_4)
{
 int VAR_5 = 0;
 struct i2400mu *VAR_6 = VAR_4;
 struct i2400m *VAR_7 = &VAR_6->i2400m;
 struct device *VAR_8 = &VAR_6->usb_iface->dev;
 struct net_device *VAR_9 = VAR_7->wimax_dev.net_dev;
 size_t VAR_10;
 int VAR_11;
 struct sk_buff *VAR_12;

 FUNC_6(4, VAR_8, "(i2400mu %p)\n", VAR_6);
 while (1) {
  FUNC_7(2, VAR_8, "TX: waiting for messages\n");
  VAR_10 = 0;
  FUNC_17(
   VAR_6->rx_wq,
   (FUNC_14()
    || (VAR_10 = FUNC_4(&VAR_6->rx_pending_count)))
   );
  if (FUNC_14())
   break;
  if (VAR_10 == 0)
   continue;
  VAR_11 = VAR_6->rx_size;
  FUNC_7(2, VAR_8, "RX: reading up to %d bytes\n", VAR_11);
  VAR_12 = FUNC_2(VAR_9, VAR_11, VAR_3);
  if (VAR_12 == ((void*)0)) {
   FUNC_8(VAR_8, "RX: can't allocate skb [%d bytes]\n",
    VAR_11);
   FUNC_15(50);
   continue;
  }


  VAR_12 = FUNC_11(VAR_6, VAR_12);
  VAR_5 = FUNC_1(VAR_12);
  if (FUNC_0(VAR_12))
   goto out;
  FUNC_3(&VAR_6->rx_pending_count);
  if (VAR_12 == ((void*)0) || VAR_12->len == 0) {

   FUNC_13(VAR_12);
   continue;
  }


  VAR_6->rx_size_cnt++;
  VAR_6->rx_size_acc += VAR_12->len;
  VAR_5 = FUNC_10(VAR_7, VAR_12);
  if (VAR_5 == -VAR_2
      && FUNC_9(&VAR_6->urb_edc,
          VAR_1, VAR_0)) {
   goto error_reset;
  }


  FUNC_12(VAR_6);
 }
 VAR_5 = 0;
out:
 FUNC_5(4, VAR_8, "(i2400mu %p) = %d\n", VAR_6, VAR_5);
 return VAR_5;

error_reset:
 FUNC_8(VAR_8, "RX: maximum errors in received buffer exceeded; "
  "resetting device\n");
 FUNC_16(VAR_6->usb_iface);
 goto out;
}
