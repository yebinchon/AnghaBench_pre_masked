
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct velocity_info {int ip_addr; TYPE_1__* dev; } ;
struct in_ifaddr {int ifa_address; } ;
struct in_device {scalar_t__ ifa_list; } ;
struct TYPE_2__ {scalar_t__ ip_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static inline int FUNC_1(struct velocity_info *VAR_1)
{
 struct in_device *VAR_2 = (struct in_device *) VAR_1->dev->ip_ptr;
 struct in_ifaddr *VAR_3;

 if (VAR_2 != ((void*)0)) {
  VAR_3 = (struct in_ifaddr *) VAR_2->ifa_list;
  if (VAR_3 != ((void*)0)) {
   FUNC_0(VAR_1->ip_addr, &VAR_3->ifa_address, 4);
   return 0;
  }
 }
 return -VAR_0;
}
