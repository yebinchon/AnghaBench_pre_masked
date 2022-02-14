
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_14__ {int iocb_cmd_delay; } ;
struct lpfc_sli_ring {int flag; scalar_t__ ringno; TYPE_7__ stats; } ;
struct TYPE_8__ {int Type; int Rctl; } ;
struct TYPE_9__ {TYPE_1__ hcsw; } ;
struct TYPE_10__ {TYPE_2__ w5; } ;
struct TYPE_11__ {TYPE_3__ genreq64; } ;
struct TYPE_12__ {int ulpCommand; TYPE_4__ un; } ;
struct lpfc_iocbq {int * iocb_cmpl; TYPE_5__ iocb; int vport; } ;
struct TYPE_13__ {int sli_flag; scalar_t__ fcp_ring; struct lpfc_sli_ring* ring; } ;
struct lpfc_hba {int hba_flag; scalar_t__ link_state; TYPE_6__ sli; int pcidev; } ;
typedef int IOCB_t ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct lpfc_hba*,int ,int,char*,int) ;
 struct lpfc_iocbq* FUNC_3 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq**) ;
 int * FUNC_4 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_sli_ring*,int *,struct lpfc_iocbq*) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct lpfc_hba *VAR_15, uint32_t VAR_16,
      struct lpfc_iocbq *VAR_17, uint32_t VAR_18)
{
 struct lpfc_iocbq *VAR_19;
 IOCB_t *VAR_20;
 struct lpfc_sli_ring *VAR_21 = &VAR_15->sli.ring[VAR_16];

 if (VAR_17->iocb_cmpl && (!VAR_17->vport) &&
    (VAR_17->iocb.ulpCommand != VAR_0) &&
    (VAR_17->iocb.ulpCommand != 134)) {
  FUNC_2(VAR_15, VAR_6,
    VAR_7 | VAR_8,
    "1807 IOCB x%x failed. No vport\n",
    VAR_17->iocb.ulpCommand);
  FUNC_1();
  return VAR_4;
 }



 if (FUNC_9(FUNC_8(VAR_15->pcidev)))
  return VAR_4;


 if (FUNC_9(VAR_15->hba_flag & VAR_1))
  return VAR_4;




 if (FUNC_9(VAR_15->link_state < VAR_9))
  return VAR_4;





 if (FUNC_9(VAR_21->flag & VAR_12))
  goto iocb_busy;

 if (FUNC_9(VAR_15->link_state == VAR_9)) {




  switch (VAR_17->iocb.ulpCommand) {
  case 131:
  case 130:
   if (!(VAR_15->sli.sli_flag & VAR_10) ||
    (VAR_17->iocb.un.genreq64.w5.hcsw.Rctl !=
     VAR_2) ||
    (VAR_17->iocb.un.genreq64.w5.hcsw.Type !=
     VAR_13))

    goto iocb_busy;
   break;
  case 128:
  case 129:




   if (VAR_17->iocb_cmpl)
    VAR_17->iocb_cmpl = ((void*)0);

  case 132:
  case 134:
  case 133:
   break;
  default:
   goto iocb_busy;
  }





 } else if (FUNC_9(VAR_21->ringno == VAR_15->sli.fcp_ring &&
       !(VAR_15->sli.sli_flag & VAR_11))) {
  goto iocb_busy;
 }

 while ((VAR_20 = FUNC_4(VAR_15, VAR_21)) &&
        (VAR_19 = FUNC_3(VAR_15, VAR_21, &VAR_17)))
  FUNC_5(VAR_15, VAR_21, VAR_20, VAR_19);

 if (VAR_20)
  FUNC_7(VAR_15, VAR_21);
 else
  FUNC_6(VAR_15, VAR_21);

 if (!VAR_17)
  return VAR_5;

 goto out_busy;

 iocb_busy:
 VAR_21->stats.iocb_cmd_delay++;

 out_busy:

 if (!(VAR_18 & VAR_14)) {
  FUNC_0(VAR_15, VAR_21, VAR_17);
  return VAR_5;
 }

 return VAR_3;
}
