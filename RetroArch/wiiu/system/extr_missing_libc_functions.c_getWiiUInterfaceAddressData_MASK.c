
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct ifaddrs {scalar_t__ ifa_netmask; scalar_t__ ifa_addr; scalar_t__ ifa_dstaddr; } ;


 struct ifaddrs* FUNC_0 () ;
 int FUNC_1 (struct ifaddrs*) ;
 scalar_t__ FUNC_2 (struct sockaddr_in*) ;
 scalar_t__ FUNC_3 (struct sockaddr_in*) ;
 scalar_t__ FUNC_4 (struct sockaddr_in*,struct sockaddr_in*,struct sockaddr_in*) ;

__attribute__((used)) static struct ifaddrs *FUNC_5(void)
{
   struct ifaddrs *VAR_0 = FUNC_0();

   if (VAR_0)
   {
      if (FUNC_2((struct sockaddr_in *)VAR_0->ifa_addr) < 0 ||
            FUNC_3((struct sockaddr_in *)VAR_0->ifa_netmask) < 0 ||
            FUNC_4((struct sockaddr_in *)VAR_0->ifa_dstaddr,
               (struct sockaddr_in *)VAR_0->ifa_addr,
               (struct sockaddr_in *)VAR_0->ifa_netmask) < 0) {
         goto error;
      }
   }

   return VAR_0;

error:
   FUNC_1(VAR_0);
   return ((void*)0);
}
