
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ pfxlen; int addr; } ;
struct TYPE_4__ {scalar_t__ mask; int addr; } ;
struct TYPE_6__ {TYPE_2__ a6; TYPE_1__ a4; } ;
struct qeth_ipaddr {scalar_t__ del_flags; int set_flags; int type; TYPE_3__ u; } ;
struct qeth_card {int ip_lock; int * ip_tbd_list; int ip_list; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct qeth_ipaddr*) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (struct qeth_card*,struct qeth_ipaddr*) ;
 scalar_t__ FUNC_4 (int *,struct qeth_ipaddr*,int ) ;
 struct qeth_ipaddr* FUNC_5 (int) ;
 int FUNC_6 (struct qeth_card*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

int FUNC_9(struct qeth_card *VAR_7, enum qeth_prot_versions VAR_8,
       const u8 *VAR_9)
{
 struct qeth_ipaddr *VAR_10;
 unsigned long VAR_11;
 int VAR_12 = 0;

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10) {
  if (VAR_8 == VAR_4) {
   FUNC_0(VAR_6, 2, "addrxip4");
   FUNC_2(&VAR_10->u.a4.addr, VAR_9, 4);
   VAR_10->u.a4.mask = 0;
  } else if (VAR_8 == VAR_5) {
   FUNC_0(VAR_6, 2, "addrxip6");
   FUNC_2(&VAR_10->u.a6.addr, VAR_9, 16);
   VAR_10->u.a6.pfxlen = 0;
  }
  VAR_10->type = VAR_3;
  VAR_10->set_flags = VAR_2;
  VAR_10->del_flags = 0;
 } else
  return -VAR_1;
 FUNC_7(&VAR_7->ip_lock, VAR_11);
 if (FUNC_4(&VAR_7->ip_list, VAR_10, 0) ||
     FUNC_4(VAR_7->ip_tbd_list, VAR_10, 0))
  VAR_12 = -VAR_0;
 FUNC_8(&VAR_7->ip_lock, VAR_11);
 if (VAR_12) {
  return VAR_12;
 }
 if (!FUNC_3(VAR_7, VAR_10))
  FUNC_1(VAR_10);
 FUNC_6(VAR_7);
 return 0;
}
