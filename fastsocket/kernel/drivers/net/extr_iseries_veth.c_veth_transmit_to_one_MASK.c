
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct veth_port {int dev; } ;
struct TYPE_2__ {scalar_t__* len; int eofmask; int * addr; } ;
struct veth_msg {int in_use; TYPE_1__ data; int token; int dev; int skb; } ;
struct veth_lpar_connection {int state; scalar_t__ outstanding_tx; int lock; scalar_t__ last_contact; scalar_t__ reset_timeout; int reset_timer; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct net_device {int dummy; } ;
typedef size_t HvLpIndex ;
typedef scalar_t__ HvLpEvent_Rc ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,scalar_t__) ;
 struct veth_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct veth_lpar_connection** VAR_8 ;
 int FUNC_7 (struct veth_lpar_connection*,struct veth_msg*) ;
 scalar_t__ FUNC_8 (struct veth_lpar_connection*,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_9 (struct veth_lpar_connection*) ;
 struct veth_msg* FUNC_10 (struct veth_lpar_connection*) ;
 int FUNC_11 (struct veth_lpar_connection*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_9, HvLpIndex VAR_10,
    struct net_device *VAR_11)
{
 struct veth_lpar_connection *VAR_12 = VAR_8[VAR_10];
 struct veth_port *VAR_13 = FUNC_3(VAR_11);
 HvLpEvent_Rc VAR_14;
 struct veth_msg *VAR_15 = ((void*)0);
 unsigned long VAR_16;

 if (! VAR_12)
  return 0;

 FUNC_5(&VAR_12->lock, VAR_16);

 if (! (VAR_12->state & VAR_6))
  goto no_error;

 if ((VAR_9->len - VAR_1) > VAR_5)
  goto drop;

 VAR_15 = FUNC_10(VAR_12);
 if (! VAR_15)
  goto drop;

 VAR_15->in_use = 1;
 VAR_15->skb = FUNC_4(VAR_9);

 VAR_15->data.addr[0] = FUNC_0(VAR_13->dev, VAR_9->data,
    VAR_9->len, VAR_0);

 if (FUNC_1(VAR_13->dev, VAR_15->data.addr[0]))
  goto recycle_and_drop;

 VAR_15->dev = VAR_13->dev;
 VAR_15->data.len[0] = VAR_9->len;
 VAR_15->data.eofmask = 1 << VAR_3;

 VAR_14 = FUNC_8(VAR_12, VAR_4, VAR_15->token, &VAR_15->data);

 if (VAR_14 != VAR_2)
  goto recycle_and_drop;


 if (0 == VAR_12->outstanding_tx)
  FUNC_2(&VAR_12->reset_timer, VAR_7 + VAR_12->reset_timeout);

 VAR_12->last_contact = VAR_7;
 VAR_12->outstanding_tx++;

 if (FUNC_9(VAR_12))
  FUNC_11(VAR_12);

 no_error:
 FUNC_6(&VAR_12->lock, VAR_16);
 return 0;

 recycle_and_drop:
 FUNC_7(VAR_12, VAR_15);
 drop:
 FUNC_6(&VAR_12->lock, VAR_16);
 return 1;
}
