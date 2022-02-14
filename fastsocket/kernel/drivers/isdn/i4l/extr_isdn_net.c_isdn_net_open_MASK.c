
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int* dev_addr; struct in_device* ip_ptr; } ;
struct in_ifaddr {int ifa_local; } ;
struct in_device {struct in_ifaddr* ifa_list; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int*,int *,int) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_1)
{
 int VAR_2;
 struct net_device *VAR_3;
 struct in_device *VAR_4;




 FUNC_4(VAR_1);

 FUNC_2(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0 - sizeof(u32); VAR_2++)
  VAR_1->dev_addr[VAR_2] = 0xfc;
 if ((VAR_4 = VAR_1->ip_ptr) != ((void*)0)) {



  struct in_ifaddr *VAR_5 = VAR_4->ifa_list;
  if (VAR_5 != ((void*)0))
   FUNC_3(VAR_1->dev_addr+2, &VAR_5->ifa_local, 4);
 }


 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3) {
  while (VAR_3) {
   FUNC_2(VAR_3);
   VAR_3 = FUNC_0(VAR_3);
  }
 }
 FUNC_1();
 return 0;
}
