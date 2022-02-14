
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int remote; int sid; int dev; } ;
struct TYPE_3__ {TYPE_2__ pppoe; } ;
struct sockaddr_pppox {TYPE_1__ sa_addr; } ;
struct pppox_sock {int dummy; } ;
struct pppoe_net {int dummy; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;


 struct net_device* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net_device*) ;
 struct pppox_sock* FUNC_2 (struct pppoe_net*,int ,int ,int) ;
 struct pppoe_net* FUNC_3 (struct net*,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline struct pppox_sock *FUNC_4(struct net *VAR_1,
      struct sockaddr_pppox *VAR_2)
{
 struct net_device *VAR_3;
 struct pppoe_net *VAR_4;
 struct pppox_sock *VAR_5;

 int VAR_6;

 VAR_3 = FUNC_0(VAR_1, VAR_2->sa_addr.pppoe.dev);
 if (!VAR_3)
  return ((void*)0);

 VAR_6 = VAR_3->ifindex;
 VAR_4 = FUNC_3(VAR_1, VAR_0);
 VAR_5 = FUNC_2(VAR_4, VAR_2->sa_addr.pppoe.sid,
    VAR_2->sa_addr.pppoe.remote, VAR_6);
 FUNC_1(VAR_3);

 return VAR_5;
}
