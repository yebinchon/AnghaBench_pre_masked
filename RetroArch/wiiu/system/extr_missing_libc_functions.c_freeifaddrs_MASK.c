
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrs {struct ifaddrs* ifa_dstaddr; struct ifaddrs* ifa_netmask; struct ifaddrs* ifa_addr; struct ifaddrs* ifa_name; } ;


 int FUNC_0 (struct ifaddrs*) ;

void FUNC_1(struct ifaddrs *VAR_0)
{
   if (VAR_0)
   {
      if (VAR_0->ifa_name)
      {
         FUNC_0(VAR_0->ifa_name);
         VAR_0->ifa_name = ((void*)0);
      }

      if (VAR_0->ifa_addr)
      {
         FUNC_0(VAR_0->ifa_addr);
         VAR_0->ifa_addr = ((void*)0);
      }

      if (VAR_0->ifa_netmask)
      {
         FUNC_0(VAR_0->ifa_netmask);
         VAR_0->ifa_netmask = ((void*)0);
      }

      if (VAR_0->ifa_dstaddr)
      {
         FUNC_0(VAR_0->ifa_dstaddr);
         VAR_0->ifa_dstaddr = ((void*)0);
      }
      FUNC_0(VAR_0);
   }
}
