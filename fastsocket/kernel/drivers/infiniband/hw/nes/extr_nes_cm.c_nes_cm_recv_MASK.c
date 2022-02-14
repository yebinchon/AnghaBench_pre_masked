
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* api; } ;
struct TYPE_4__ {int (* recv_pkt ) (TYPE_2__*,int ,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*,int ,struct sk_buff*) ;

int FUNC_3(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 int VAR_5 = 0;

 VAR_1++;
 if ((VAR_2) && (VAR_2->api))
  VAR_5 = VAR_2->api->recv_pkt(VAR_2, FUNC_1(VAR_4), VAR_3);
 else
  FUNC_0(VAR_0, "Unable to process packet for CM,"
     " cm is not setup properly.\n");

 return VAR_5;
}
