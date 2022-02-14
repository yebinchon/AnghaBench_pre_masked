
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
struct qeth_ipaddr {int type; TYPE_3__ u; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qeth_ipaddr*) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (struct qeth_card*,struct qeth_ipaddr*) ;
 struct qeth_ipaddr* FUNC_4 (int) ;
 int FUNC_5 (struct qeth_card*) ;

void FUNC_6(struct qeth_card *VAR_4, enum qeth_prot_versions VAR_5,
   const u8 *VAR_6)
{
 struct qeth_ipaddr *VAR_7;

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7) {
  if (VAR_5 == VAR_1) {
   FUNC_0(VAR_3, 2, "addrxip4");
   FUNC_2(&VAR_7->u.a4.addr, VAR_6, 4);
   VAR_7->u.a4.mask = 0;
  } else if (VAR_5 == VAR_2) {
   FUNC_0(VAR_3, 2, "addrxip6");
   FUNC_2(&VAR_7->u.a6.addr, VAR_6, 16);
   VAR_7->u.a6.pfxlen = 0;
  }
  VAR_7->type = VAR_0;
 } else
  return;
 if (!FUNC_3(VAR_4, VAR_7))
  FUNC_1(VAR_7);
 FUNC_5(VAR_4);
}
