
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct packet_type {int dummy; } ;
struct net_device {int flags; } ;
struct lacpdu {int dummy; } ;
struct bonding {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lacpdu*,struct slave*,int ) ;
 struct slave* FUNC_1 (struct bonding*,struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int * FUNC_3 (struct net_device*) ;
 int VAR_4 ;
 struct bonding* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;

int FUNC_9(struct sk_buff *VAR_5, struct net_device *VAR_6, struct packet_type* VAR_7, struct net_device *VAR_8)
{
 struct bonding *VAR_9 = FUNC_4(VAR_6);
 struct slave *VAR_10 = ((void*)0);
 int VAR_11 = VAR_2;

 if (FUNC_3(VAR_6) != &VAR_4)
  goto out;

 if (!(VAR_6->flags & VAR_1))
  goto out;

 VAR_5 = FUNC_8(VAR_5, VAR_0);
 if (!VAR_5)
  goto out;

 if (!FUNC_5(VAR_5, sizeof(struct lacpdu)))
  goto out;

 FUNC_6(&VAR_9->lock);
 VAR_10 = FUNC_1((struct bonding *)FUNC_4(VAR_6),
     VAR_8);
 if (!VAR_10)
  goto out_unlock;

 FUNC_0((struct lacpdu *) VAR_5->data, VAR_10, VAR_5->len);

 VAR_11 = VAR_3;

out_unlock:
 FUNC_7(&VAR_9->lock);
out:
 FUNC_2(VAR_5);

 return VAR_11;
}
