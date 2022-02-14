
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_net_private {scalar_t__ user; } ;
struct net_device {int dummy; } ;
struct mcast_init {int ttl; int port; int addr; } ;
struct mcast_data {int ttl; int port; int addr; struct net_device* dev; } ;


 struct uml_net_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, void *VAR_1)
{
 struct uml_net_private *VAR_2;
 struct mcast_data *VAR_3;
 struct mcast_init *VAR_4 = VAR_1;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = (struct mcast_data *) VAR_2->user;
 VAR_3->addr = VAR_4->addr;
 VAR_3->port = VAR_4->port;
 VAR_3->ttl = VAR_4->ttl;
 VAR_3->dev = VAR_0;

 FUNC_1("mcast backend multicast address: %s:%u, TTL:%u\n",
        VAR_3->addr, VAR_3->port, VAR_3->ttl);
}
