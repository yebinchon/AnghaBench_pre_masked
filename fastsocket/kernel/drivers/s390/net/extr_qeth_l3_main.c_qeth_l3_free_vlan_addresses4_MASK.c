
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int addr; } ;
struct TYPE_4__ {TYPE_1__ a4; } ;
struct qeth_ipaddr {int type; TYPE_2__ u; } ;
struct qeth_card {int vlangrp; } ;
struct in_ifaddr {int ifa_mask; int ifa_address; struct in_ifaddr* ifa_next; } ;
struct in_device {struct in_ifaddr* ifa_list; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct in_device* FUNC_1 (int ) ;
 int FUNC_2 (struct in_device*) ;
 int FUNC_3 (struct qeth_ipaddr*) ;
 int FUNC_4 (struct qeth_card*,struct qeth_ipaddr*) ;
 struct qeth_ipaddr* FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned short) ;

__attribute__((used)) static void FUNC_7(struct qeth_card *VAR_3,
   unsigned short VAR_4)
{
 struct in_device *VAR_5;
 struct in_ifaddr *VAR_6;
 struct qeth_ipaddr *VAR_7;

 FUNC_0(VAR_2, 4, "frvaddr4");

 VAR_5 = FUNC_1(FUNC_6(VAR_3->vlangrp, VAR_4));
 if (!VAR_5)
  return;
 for (VAR_6 = VAR_5->ifa_list; VAR_6; VAR_6 = VAR_6->ifa_next) {
  VAR_7 = FUNC_5(VAR_1);
  if (VAR_7) {
   VAR_7->u.a4.addr = VAR_6->ifa_address;
   VAR_7->u.a4.mask = VAR_6->ifa_mask;
   VAR_7->type = VAR_0;
   if (!FUNC_4(VAR_3, VAR_7))
    FUNC_3(VAR_7);
  }
 }
 FUNC_2(VAR_5);
}
