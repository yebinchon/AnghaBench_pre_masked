
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {void* sa_family; struct sockaddr* ifa_dstaddr; struct sockaddr* ifa_netmask; struct sockaddr* ifa_addr; int ifa_name; } ;
struct ifaddrs {void* sa_family; struct ifaddrs* ifa_dstaddr; struct ifaddrs* ifa_netmask; struct ifaddrs* ifa_addr; int ifa_name; } ;


 void* VAR_0 ;
 int FUNC_0 (struct sockaddr*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sockaddr*,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static struct ifaddrs *FUNC_4(void)
{
   struct ifaddrs *VAR_2 = (struct ifaddrs *)FUNC_1(sizeof(struct ifaddrs));
   if (VAR_2)
   {
      FUNC_2(VAR_2, 0, sizeof(struct ifaddrs));
      VAR_2->ifa_name = FUNC_3(VAR_1);
      VAR_2->ifa_addr = (struct sockaddr *)FUNC_1(sizeof(struct sockaddr_in));
      VAR_2->ifa_netmask = (struct sockaddr *)FUNC_1(sizeof(struct sockaddr_in));
      VAR_2->ifa_dstaddr = (struct sockaddr *)FUNC_1(sizeof(struct sockaddr_in));

      if (!VAR_2->ifa_name || !VAR_2->ifa_addr || !VAR_2->ifa_netmask || !VAR_2->ifa_dstaddr)
         goto error;

      FUNC_2(VAR_2->ifa_addr, 0, sizeof(struct sockaddr_in));
      VAR_2->ifa_addr->sa_family = VAR_0;
      FUNC_2(VAR_2->ifa_netmask, 0, sizeof(struct sockaddr_in));
      VAR_2->ifa_netmask->sa_family = VAR_0;
      FUNC_2(VAR_2->ifa_dstaddr, 0, sizeof(struct sockaddr_in));
      VAR_2->ifa_dstaddr->sa_family = VAR_0;
   }

   return VAR_2;
error:
   FUNC_0(VAR_2);
   return ((void*)0);
}
