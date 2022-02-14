
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_ib {int sib_addr; int sib_flowinfo; int sib_pkey; int sib_family; int sib_scope_id; int sib_sid_mask; int sib_sid; } ;
struct TYPE_3__ {int dst_addr; int src_addr; } ;
struct TYPE_4__ {TYPE_1__ addr; } ;
struct rdma_cm_id {TYPE_2__ route; } ;
struct ib_sa_path_rec {int dgid; int flow_label; int pkey; int sgid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct rdma_cm_id *VAR_0, struct rdma_cm_id *VAR_1,
        struct ib_sa_path_rec *VAR_2)
{
 struct sockaddr_ib *VAR_3, *VAR_4;

 VAR_3 = (struct sockaddr_ib *) &VAR_1->route.addr.src_addr;
 VAR_4 = (struct sockaddr_ib *) &VAR_0->route.addr.src_addr;
 VAR_4->sib_family = VAR_3->sib_family;
 VAR_4->sib_pkey = VAR_2->pkey;
 VAR_4->sib_flowinfo = VAR_2->flow_label;
 FUNC_1(&VAR_4->sib_addr, &VAR_2->sgid, 16);
 VAR_4->sib_sid = VAR_3->sib_sid;
 VAR_4->sib_sid_mask = FUNC_0(0xffffffffffffffffULL);
 VAR_4->sib_scope_id = VAR_3->sib_scope_id;

 VAR_4 = (struct sockaddr_ib *) &VAR_0->route.addr.dst_addr;
 VAR_4->sib_family = VAR_3->sib_family;
 VAR_4->sib_pkey = VAR_2->pkey;
 VAR_4->sib_flowinfo = VAR_2->flow_label;
 FUNC_1(&VAR_4->sib_addr, &VAR_2->dgid, 16);
}
