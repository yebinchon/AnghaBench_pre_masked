
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct in_ifaddr {int ifa_mask; int ifa_local; } ;
struct in_device {struct in_ifaddr* ifa_list; } ;
struct TYPE_9__ {TYPE_2__* netdev; } ;
typedef TYPE_3__ isdn_net_local ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_8__ {TYPE_1__* dev; } ;
struct TYPE_7__ {struct in_device* ip_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,struct sk_buff*) ;
 unsigned char* FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_5(isdn_net_local *VAR_4)
{
 struct sk_buff *VAR_5;
 unsigned char *VAR_6;
 struct in_device *VAR_7 = ((void*)0);
 __be32 VAR_8 = 0;
 __be32 VAR_9 = 0;

 if ((VAR_7 = VAR_4->netdev->dev->ip_ptr) != ((void*)0)) {

  struct in_ifaddr *VAR_10 = VAR_7->ifa_list;
  if (VAR_10 != ((void*)0)) {
   VAR_8 = VAR_10->ifa_local;
   VAR_9 = VAR_10->ifa_mask;
  }
 }

 VAR_5 = FUNC_2(VAR_4, 4 + 14);
 if (!VAR_5)
  return;

 VAR_6 = FUNC_4(VAR_5, 4 + 14);


 *(u8 *)(VAR_6 + 0) = VAR_0;
 *(u8 *)(VAR_6 + 1) = VAR_1;
 *(__be16 *)(VAR_6 + 2) = FUNC_0(VAR_3);



 *(__be32 *)(VAR_6 + 4) = FUNC_1(VAR_2);
 *(__be32 *)(VAR_6 + 8) = VAR_8;
 *(__be32 *)(VAR_6 + 12) = VAR_9;
 *(__be16 *)(VAR_6 + 16) = FUNC_0(0);
 VAR_6 += 18;

 FUNC_3(VAR_4, VAR_5);
}
