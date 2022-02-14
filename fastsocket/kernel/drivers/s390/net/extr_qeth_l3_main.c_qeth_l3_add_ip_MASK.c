
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char addr; } ;
struct TYPE_4__ {char addr; } ;
struct TYPE_6__ {TYPE_2__ a6; TYPE_1__ a4; } ;
struct qeth_ipaddr {scalar_t__ proto; TYPE_3__ u; } ;
struct qeth_card {int ip_lock; } ;


 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (int ,int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qeth_card*,struct qeth_ipaddr*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct qeth_card *VAR_2, struct qeth_ipaddr *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_1(VAR_1, 4, "addip");
 if (VAR_3->proto == VAR_0)
  FUNC_0(VAR_1, 4, &VAR_3->u.a4.addr, 4);
 else {
  FUNC_0(VAR_1, 4, &VAR_3->u.a6.addr, 8);
  FUNC_0(VAR_1, 4, ((char *)&VAR_3->u.a6.addr) + 8, 8);
 }
 FUNC_3(&VAR_2->ip_lock, VAR_4);
 VAR_5 = FUNC_2(VAR_2, VAR_3, 1);
 FUNC_4(&VAR_2->ip_lock, VAR_4);
 return VAR_5;
}
