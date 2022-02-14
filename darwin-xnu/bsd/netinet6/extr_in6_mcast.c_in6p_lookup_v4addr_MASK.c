
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct ipv6_mreq {unsigned int ipv6mr_interface; } ;
struct TYPE_3__ {int s_addr; } ;
struct ip_mreq {TYPE_1__ imr_interface; } ;
struct ifnet {int dummy; } ;
struct ifaddr {scalar_t__ ifa_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifaddr*) ;
 scalar_t__ VAR_2 ;
 struct ifaddr* FUNC_1 (struct ifnet*,int ) ;
 struct ifnet** VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct ipv6_mreq *VAR_4, struct ip_mreq *VAR_5)
{
 struct ifnet *VAR_6;
 struct ifaddr *VAR_7;
 struct sockaddr_in *VAR_8;

 FUNC_3();
 if (VAR_4->ipv6mr_interface > (unsigned int)VAR_2) {
  FUNC_2();
  return (VAR_1);
 } else
  VAR_6 = VAR_3[VAR_4->ipv6mr_interface];
 FUNC_2();
 if (VAR_6 == ((void*)0))
  return (VAR_1);
 VAR_7 = FUNC_1(VAR_6, VAR_0);
 if (VAR_7 == ((void*)0))
  return (VAR_1);
 VAR_8 = (struct sockaddr_in *)(uintptr_t)(size_t)VAR_7->ifa_addr;
 VAR_5->imr_interface.s_addr = VAR_8->sin_addr.s_addr;
 FUNC_0(VAR_7);

 return (0);
}
