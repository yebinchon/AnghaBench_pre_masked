
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_2__ {void* short_addr; void* pan_id; int addr_type; } ;
struct sockaddr_ieee802154 {TYPE_1__ addr; int family; } ;
struct net_device {int dummy; } ;
struct ifreq {int ifr_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;

 void* FUNC_0 (struct net_device*) ;
 void* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6, struct ifreq *VAR_7,
  int VAR_8)
{
 struct sockaddr_ieee802154 *VAR_9 =
  (struct sockaddr_ieee802154 *)&VAR_7->ifr_addr;
 u16 VAR_10, VAR_11;

 switch (VAR_8) {
 case 128:

  VAR_10 = FUNC_0(VAR_6);
  VAR_11 = FUNC_1(VAR_6);
  if (VAR_10 == VAR_5 ||
      VAR_11 == VAR_3)
   return -VAR_1;

  VAR_9->family = VAR_0;
  VAR_9->addr.addr_type = VAR_4;
  VAR_9->addr.pan_id = VAR_10;
  VAR_9->addr.short_addr = VAR_11;
  return 0;
 }
 return -VAR_2;
}
