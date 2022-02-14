
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * skb; int state; } ;
struct TYPE_3__ {int skb; int state; } ;
struct net_local {int port_owner; scalar_t__ is_deferred; int connection; TYPE_2__ snd_data; TYPE_1__ rcv_data; int timer; int kill_timer; scalar_t__ should_relinquish; int pardev; } ;
struct net_device {int irq; scalar_t__ dev_addr; struct in_device* ip_ptr; } ;
struct in_ifaddr {int ifa_local; } ;
struct in_device {struct in_ifaddr* ifa_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 struct net_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct net_device*,int) ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_3)
{
 struct net_local *VAR_4 = FUNC_3(VAR_3);
 struct in_device *VAR_5;


 if (!VAR_4->port_owner) {
  if (FUNC_5(VAR_4->pardev)) return -VAR_0;
  VAR_4->port_owner = 1;
 }

 VAR_4->should_relinquish = 0;


 FUNC_7 (VAR_3, 0x00);


 FUNC_1 (VAR_3);
 if (VAR_3->irq == -1)
 {
  FUNC_0 (&VAR_4->kill_timer, 0);
  FUNC_6(&VAR_4->timer, 1);
 }


 VAR_4->rcv_data.state = VAR_4->snd_data.state = VAR_2;
 VAR_4->rcv_data.skb = *(VAR_4->snd_data.skb = ((void*)0));
 VAR_4->connection = VAR_1;
 VAR_4->is_deferred = 0;
 if ((VAR_5=VAR_3->ip_ptr) != ((void*)0)) {



  struct in_ifaddr *VAR_6=VAR_5->ifa_list;
  if (VAR_6 != ((void*)0)) {
   FUNC_2(VAR_3->dev_addr+2, &VAR_6->ifa_local, 4);
  }
 }

 FUNC_4 (VAR_3);

 return 0;
}
