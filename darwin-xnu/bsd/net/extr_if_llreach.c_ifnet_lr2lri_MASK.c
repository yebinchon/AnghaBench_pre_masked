
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct if_llreach_info {int lri_npm; int lri_lqm; int lri_rssi; int lri_addr; int lri_proto; int lri_expire; int lri_probes; int lri_ifindex; int lri_refcnt; } ;
struct TYPE_4__ {int addr; int proto; } ;
struct if_llreach {int lr_npm; int lr_lqm; int lr_rssi; TYPE_2__ lr_key; int lr_lastrcvd; int lr_probes; TYPE_1__* lr_ifp; int lr_reqcnt; } ;
struct TYPE_3__ {int if_index; } ;


 int FUNC_0 (struct if_llreach*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct if_llreach_info*,int) ;
 int FUNC_3 (struct if_llreach*,int ) ;

void
FUNC_4(struct if_llreach *VAR_1, struct if_llreach_info *VAR_2)
{
 FUNC_0(VAR_1);

 FUNC_2(VAR_2, sizeof (*VAR_2));



 VAR_2->lri_refcnt = VAR_1->lr_reqcnt;
 VAR_2->lri_ifindex = VAR_1->lr_ifp->if_index;
 VAR_2->lri_probes = VAR_1->lr_probes;
 VAR_2->lri_expire = FUNC_3(VAR_1, VAR_1->lr_lastrcvd);
 VAR_2->lri_proto = VAR_1->lr_key.proto;
 FUNC_1(&VAR_1->lr_key.addr, &VAR_2->lri_addr, VAR_0);
 VAR_2->lri_rssi = VAR_1->lr_rssi;
 VAR_2->lri_lqm = VAR_1->lr_lqm;
 VAR_2->lri_npm = VAR_1->lr_npm;
}
