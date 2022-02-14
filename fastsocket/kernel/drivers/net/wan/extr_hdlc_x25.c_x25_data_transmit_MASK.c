
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* xmit ) (struct sk_buff*,struct net_device*) ;} ;
typedef TYPE_1__ hdlc_device ;


 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, struct sk_buff *VAR_1)
{
 hdlc_device *VAR_2 = FUNC_0(VAR_0);
 VAR_2->xmit(VAR_1, VAR_0);
}
