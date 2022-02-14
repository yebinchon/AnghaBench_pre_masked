
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct serv_parm {int dummy; } ;
struct lpfc_sli {int dummy; } ;
struct lpfc_hba {scalar_t__ sli_rev; int * vpi_ids; struct lpfc_sli sli; } ;
struct lpfc_dmabuf {int phys; int list; int virt; } ;
struct TYPE_13__ {int bdeSize; } ;
struct TYPE_14__ {TYPE_2__ f; } ;
struct TYPE_15__ {int addrLow; int addrHigh; TYPE_3__ tus; } ;
struct TYPE_16__ {TYPE_4__ sp64; } ;
struct TYPE_17__ {int vpi; TYPE_5__ un; } ;
struct TYPE_18__ {TYPE_6__ varRdSparm; } ;
struct TYPE_19__ {TYPE_7__ un; void* mbxCommand; int mbxOwner; } ;
struct TYPE_12__ {TYPE_8__ mb; } ;
struct TYPE_20__ {struct lpfc_dmabuf* context1; TYPE_1__ u; } ;
typedef TYPE_8__ MAILBOX_t ;
typedef TYPE_9__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_2 (int,int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int *) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_5 (TYPE_9__*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct lpfc_hba *VAR_6, LPFC_MBOXQ_t *VAR_7, int VAR_8)
{
 struct lpfc_dmabuf *VAR_9;
 MAILBOX_t *VAR_10;
 struct lpfc_sli *VAR_11;

 VAR_11 = &VAR_6->sli;
 VAR_10 = &VAR_7->u.mb;
 FUNC_5(VAR_7, 0, sizeof (LPFC_MBOXQ_t));

 VAR_10->mbxOwner = VAR_5;



 VAR_9 = FUNC_2(sizeof (struct lpfc_dmabuf), VAR_0);
 if (VAR_9)
  VAR_9->virt = FUNC_3(VAR_6, 0, &VAR_9->phys);
 if (!VAR_9 || !VAR_9->virt) {
  FUNC_1(VAR_9);
  VAR_10->mbxCommand = VAR_4;

  FUNC_4(VAR_6, VAR_1, VAR_2,
           "0301 READ_SPARAM: no buffers\n");
  return (1);
 }
 FUNC_0(&VAR_9->list);
 VAR_10->mbxCommand = VAR_4;
 VAR_10->un.varRdSparm.un.sp64.tus.f.bdeSize = sizeof (struct serv_parm);
 VAR_10->un.varRdSparm.un.sp64.addrHigh = FUNC_6(VAR_9->phys);
 VAR_10->un.varRdSparm.un.sp64.addrLow = FUNC_7(VAR_9->phys);
 if (VAR_6->sli_rev >= VAR_3)
  VAR_10->un.varRdSparm.vpi = VAR_6->vpi_ids[VAR_8];


 VAR_7->context1 = VAR_9;

 return (0);
}
