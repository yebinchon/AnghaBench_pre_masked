
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int link_event; } ;
struct TYPE_14__ {TYPE_4__ slistat; TYPE_3__* ring; } ;
struct TYPE_10__ {int topology; int status; int type; int number; int fault; int logical_speed; int speed; int duplex; } ;
struct TYPE_11__ {TYPE_1__ link_state; } ;
struct lpfc_hba {int mbox_mem_pool; int pport; TYPE_5__ sli; TYPE_2__ sli4_hba; } ;
struct lpfc_dmabuf {int virt; int phys; } ;
struct lpfc_acqe_fc_la {int dummy; } ;
struct TYPE_15__ {int vport; int mbox_cmpl; } ;
struct TYPE_12__ {int flag; } ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,struct lpfc_acqe_fc_la*) ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_2 (int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*,int ,int *) ;
 int VAR_18 ;
 int FUNC_5 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_6 (struct lpfc_hba*,TYPE_6__*,struct lpfc_dmabuf*) ;
 int FUNC_7 (struct lpfc_hba*,int ,int) ;
 int FUNC_8 (struct lpfc_hba*,TYPE_6__*,int ) ;
 int VAR_19 ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_6__*,int ) ;

__attribute__((used)) static void
FUNC_11(struct lpfc_hba *VAR_20, struct lpfc_acqe_fc_la *VAR_21)
{
 struct lpfc_dmabuf *VAR_22;
 LPFC_MBOXQ_t *VAR_23;
 int VAR_24;

 if (FUNC_0(VAR_19, VAR_21) !=
     VAR_6) {
  FUNC_5(VAR_20, VAR_1, VAR_3,
    "2895 Non FC link Event detected.(%d)\n",
    FUNC_0(VAR_19, VAR_21));
  return;
 }

 VAR_20->sli4_hba.link_state.speed =
   FUNC_7(VAR_20, VAR_8,
    FUNC_0(VAR_15, VAR_21));
 VAR_20->sli4_hba.link_state.duplex = VAR_4;
 VAR_20->sli4_hba.link_state.topology =
    FUNC_0(VAR_16, VAR_21);
 VAR_20->sli4_hba.link_state.status =
    FUNC_0(VAR_11, VAR_21);
 VAR_20->sli4_hba.link_state.type =
    FUNC_0(VAR_14, VAR_21);
 VAR_20->sli4_hba.link_state.number =
    FUNC_0(VAR_13, VAR_21);
 VAR_20->sli4_hba.link_state.fault =
    FUNC_0(VAR_17, VAR_21);
 VAR_20->sli4_hba.link_state.logical_speed =
    FUNC_0(VAR_12, VAR_21) * 10;
 FUNC_5(VAR_20, VAR_2, VAR_3,
   "2896 Async FC event - Speed:%dGBaud Topology:x%x "
   "LA Type:x%x Port Type:%d Port Number:%d Logical speed:"
   "%dMbps Fault:%d\n",
   VAR_20->sli4_hba.link_state.speed,
   VAR_20->sli4_hba.link_state.topology,
   VAR_20->sli4_hba.link_state.status,
   VAR_20->sli4_hba.link_state.type,
   VAR_20->sli4_hba.link_state.number,
   VAR_20->sli4_hba.link_state.logical_speed,
   VAR_20->sli4_hba.link_state.fault);
 VAR_23 = (LPFC_MBOXQ_t *)FUNC_9(VAR_20->mbox_mem_pool, VAR_0);
 if (!VAR_23) {
  FUNC_5(VAR_20, VAR_1, VAR_3,
    "2897 The mboxq allocation failed\n");
  return;
 }
 VAR_22 = FUNC_2(sizeof(struct lpfc_dmabuf), VAR_0);
 if (!VAR_22) {
  FUNC_5(VAR_20, VAR_1, VAR_3,
    "2898 The lpfc_dmabuf allocation failed\n");
  goto out_free_pmb;
 }
 VAR_22->virt = FUNC_4(VAR_20, 0, &VAR_22->phys);
 if (!VAR_22->virt) {
  FUNC_5(VAR_20, VAR_1, VAR_3,
    "2899 The mbuf allocation failed\n");
  goto out_free_dmabuf;
 }


 FUNC_3(VAR_20);


 VAR_20->sli.ring[VAR_5].flag |= VAR_7;


 VAR_20->sli.slistat.link_event++;


 FUNC_6(VAR_20, VAR_23, VAR_22);
 VAR_23->mbox_cmpl = VAR_18;
 VAR_23->vport = VAR_20->pport;

 VAR_24 = FUNC_8(VAR_20, VAR_23, VAR_10);
 if (VAR_24 == VAR_9)
  goto out_free_dmabuf;
 return;

out_free_dmabuf:
 FUNC_1(VAR_22);
out_free_pmb:
 FUNC_10(VAR_23, VAR_20->mbox_mem_pool);
}
