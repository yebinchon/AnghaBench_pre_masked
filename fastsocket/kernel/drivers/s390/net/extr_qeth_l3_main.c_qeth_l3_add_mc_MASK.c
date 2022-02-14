
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; } ;
struct TYPE_4__ {TYPE_1__ a4; } ;
struct qeth_ipaddr {int is_multicast; int mac; TYPE_2__ u; } ;
struct qeth_card {int dummy; } ;
struct ip_mc_list {int multiaddr; struct ip_mc_list* next; } ;
struct in_device {int dev; struct ip_mc_list* mc_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qeth_ipaddr*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct qeth_card*,struct qeth_ipaddr*) ;
 struct qeth_ipaddr* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_6(struct qeth_card *VAR_4, struct in_device *VAR_5)
{
 struct qeth_ipaddr *VAR_6;
 struct ip_mc_list *VAR_7;
 char VAR_8[VAR_0];

 FUNC_0(VAR_3, 4, "addmc");
 for (VAR_7 = VAR_5->mc_list; VAR_7; VAR_7 = VAR_7->next) {
  FUNC_5(VAR_7->multiaddr, VAR_8, VAR_5->dev);
  VAR_6 = FUNC_4(VAR_2);
  if (!VAR_6)
   continue;
  VAR_6->u.a4.addr = VAR_7->multiaddr;
  FUNC_2(VAR_6->mac, VAR_8, VAR_1);
  VAR_6->is_multicast = 1;
  if (!FUNC_3(VAR_4, VAR_6))
   FUNC_1(VAR_6);
 }
}
