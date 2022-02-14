
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_17__ {scalar_t__ vendorUnique; int lsRjtRsnCodeExp; int lsRjtRsnCode; scalar_t__ lsRjtRsvd0; } ;
struct TYPE_18__ {int lsRjtError; TYPE_5__ b; } ;
struct ls_rjt {TYPE_6__ un; } ;
struct lpfc_vport {int fc_portname; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_14__ {int ox_id; } ;
struct TYPE_15__ {TYPE_2__ rcvsli3; } ;
struct TYPE_16__ {int ulpContext; TYPE_3__ unsli3; } ;
struct lpfc_iocbq {TYPE_4__ iocb; scalar_t__ context2; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_20__ {int mbox_cmpl; struct lpfc_vport* vport; int context2; void* context1; } ;
struct TYPE_13__ {int portName; int portNum; } ;
struct TYPE_19__ {TYPE_1__ un; } ;
typedef TYPE_7__ RPS ;
typedef TYPE_8__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int VAR_7 ;
 int FUNC_3 (struct lpfc_nodelist*) ;
 int FUNC_4 (struct lpfc_nodelist*) ;
 int FUNC_5 (struct lpfc_hba*,TYPE_8__*) ;
 scalar_t__ FUNC_6 (struct lpfc_hba*,TYPE_8__*,int ) ;
 scalar_t__ FUNC_7 (int *,int *,int) ;
 TYPE_8__* FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_8__*,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11(struct lpfc_vport *VAR_8, struct lpfc_iocbq *VAR_9,
   struct lpfc_nodelist *VAR_10)
{
 struct lpfc_hba *VAR_11 = VAR_8->phba;
 uint32_t *VAR_12;
 uint8_t VAR_13;
 LPFC_MBOXQ_t *VAR_14;
 struct lpfc_dmabuf *VAR_15;
 RPS *VAR_16;
 struct ls_rjt VAR_17;

 if ((VAR_10->nlp_state != VAR_6) &&
     (VAR_10->nlp_state != VAR_5))

  goto reject_out;

 VAR_15 = (struct lpfc_dmabuf *) VAR_9->context2;
 VAR_12 = (uint32_t *) VAR_15->virt;
 VAR_13 = (FUNC_0(*VAR_12++) & 0xf);
 VAR_16 = (RPS *) VAR_12;

 if ((VAR_13 == 0) ||
     ((VAR_13 == 1) && (FUNC_0(VAR_16->un.portNum) == 0)) ||
     ((VAR_13 == 2) && (FUNC_7(&VAR_16->un.portName, &VAR_8->fc_portname,
        sizeof(struct lpfc_name)) == 0))) {

  FUNC_10("Fix me....\n");
  FUNC_1();
  VAR_14 = FUNC_8(VAR_11->mbox_mem_pool, VAR_0);
  if (VAR_14) {
   FUNC_5(VAR_11, VAR_14);
   VAR_14->context1 = (void *)((unsigned long)
    ((VAR_9->iocb.unsli3.rcvsli3.ox_id << 16) |
    VAR_9->iocb.ulpContext));
   VAR_14->context2 = FUNC_3(VAR_10);
   VAR_14->vport = VAR_8;
   VAR_14->mbox_cmpl = VAR_7;
   if (FUNC_6(VAR_11, VAR_14, VAR_4)
    != VAR_3)

    return 0;



   FUNC_4(VAR_10);
   FUNC_9(VAR_14, VAR_11->mbox_mem_pool);
  }
 }

reject_out:

 VAR_17.un.b.lsRjtRsvd0 = 0;
 VAR_17.un.b.lsRjtRsnCode = VAR_2;
 VAR_17.un.b.lsRjtRsnCodeExp = VAR_1;
 VAR_17.un.b.vendorUnique = 0;
 FUNC_2(VAR_8, VAR_17.un.lsRjtError, VAR_9, VAR_10, ((void*)0));
 return 0;
}
