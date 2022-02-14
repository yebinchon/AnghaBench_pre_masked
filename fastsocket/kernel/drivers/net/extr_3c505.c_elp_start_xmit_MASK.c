
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct net_device {int trans_start; int name; } ;
typedef int netdev_tx_t ;
struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ elp_device ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,struct sk_buff*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 unsigned long VAR_6;
 elp_device *VAR_7 = FUNC_1(VAR_5);

 FUNC_7(&VAR_7->lock, VAR_6);
 FUNC_0(VAR_5);

 if (VAR_2 >= 3)
  FUNC_4("%s: request to send packet of length %d\n", VAR_5->name, (int) VAR_4->len);

 FUNC_3(VAR_5);




 if (!FUNC_6(VAR_5, VAR_4)) {
  if (VAR_2 >= 2) {
   FUNC_4("%s: failed to transmit packet\n", VAR_5->name);
  }
  FUNC_8(&VAR_7->lock, VAR_6);
  return VAR_0;
 }
 if (VAR_2 >= 3)
  FUNC_4("%s: packet of length %d sent\n", VAR_5->name, (int) VAR_4->len);




 VAR_5->trans_start = VAR_3;

 FUNC_5(VAR_5);
 FUNC_8(&VAR_7->lock, VAR_6);
 FUNC_2(VAR_5);
 return VAR_1;
}
