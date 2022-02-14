
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct i2400m {int rx_lock; int msg_completion; struct sk_buff* ack_skb; struct wimax_dev wimax_dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 struct device* FUNC_4 (struct i2400m*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct sk_buff* FUNC_8 (struct wimax_dev*,int *,void const*,size_t,int ) ;

__attribute__((used)) static
void FUNC_9(struct i2400m *VAR_3,
         const void *VAR_4, size_t VAR_5)
{
 struct device *VAR_6 = FUNC_4(VAR_3);
 struct wimax_dev *VAR_7 = &VAR_3->wimax_dev;
 unsigned long VAR_8;
 struct sk_buff *VAR_9;


 FUNC_6(&VAR_3->rx_lock, VAR_8);
 if (VAR_3->ack_skb != FUNC_0(-VAR_0)) {
  FUNC_3(VAR_6, "Huh? reply to command with no waiters\n");
  goto error_no_waiter;
 }
 FUNC_7(&VAR_3->rx_lock, VAR_8);

 VAR_9 = FUNC_8(VAR_7, ((void*)0), VAR_4, VAR_5, VAR_2);


 FUNC_6(&VAR_3->rx_lock, VAR_8);
 if (VAR_3->ack_skb != FUNC_0(-VAR_0)) {
  FUNC_2(1, VAR_6, "Huh? waiter for command reply cancelled\n");
  goto error_waiter_cancelled;
 }
 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_6, "CMD/GET/SET ack: cannot allocate SKB\n");
  VAR_3->ack_skb = FUNC_0(-VAR_1);
 } else
  VAR_3->ack_skb = VAR_9;
 FUNC_7(&VAR_3->rx_lock, VAR_8);
 FUNC_1(&VAR_3->msg_completion);
 return;

error_waiter_cancelled:
 FUNC_5(VAR_9);
error_no_waiter:
 FUNC_7(&VAR_3->rx_lock, VAR_8);
 return;
}
