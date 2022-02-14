
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; struct lpfc_hba* phba; } ;
struct TYPE_9__ {int sli_flag; } ;
struct lpfc_hba {int fc_ratov; int mbox_mem_pool; int cfg_link_speed; int cfg_topology; TYPE_1__ sli; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_10__ {scalar_t__ mbxStatus; int mbxOwner; int mbxCommand; } ;
struct TYPE_11__ {TYPE_2__ mb; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_4__*,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,int ,int,char*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_4__*,int) ;
 TYPE_4__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (void*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct Scsi_Host *VAR_17)
{
 struct lpfc_vport *VAR_18 = (struct lpfc_vport *) VAR_17->hostdata;
 struct lpfc_hba *VAR_19 = VAR_18->phba;
 LPFC_MBOXQ_t *VAR_20;
 int VAR_21 = VAR_10;

 if ((VAR_18->fc_flag & VAR_3) ||
     (VAR_19->sli.sli_flag & VAR_8))
  return -VAR_2;

 VAR_20 = FUNC_4(VAR_19->mbox_mem_pool,VAR_4);

 if (!VAR_20)
  return -VAR_1;

 FUNC_6((void *)VAR_20, 0, sizeof (LPFC_MBOXQ_t));
 VAR_20->u.mb.mbxCommand = VAR_13;
 VAR_20->u.mb.mbxOwner = VAR_16;

 VAR_21 = FUNC_3(VAR_19, VAR_20, VAR_9 * 2);

 if ((VAR_21 == VAR_14) &&
     (VAR_20->u.mb.mbxStatus == 0 ||
      VAR_20->u.mb.mbxStatus == VAR_11)) {
  FUNC_6((void *)VAR_20, 0, sizeof (LPFC_MBOXQ_t));
  FUNC_0(VAR_19, VAR_20, VAR_19->cfg_topology,
          VAR_19->cfg_link_speed);
  VAR_21 = FUNC_3(VAR_19, VAR_20,
           VAR_19->fc_ratov * 2);
  if ((VAR_21 == VAR_14) &&
      (VAR_20->u.mb.mbxStatus == VAR_12))
   FUNC_1(VAR_19, VAR_5, VAR_6 | VAR_7,
     "2859 SLI authentication is required "
     "for INIT_LINK but has not done yet\n");
 }

 FUNC_2(VAR_19);
 if (VAR_21 != VAR_15)
  FUNC_5(VAR_20, VAR_19->mbox_mem_pool);

 if (VAR_21 == VAR_10)
  return -VAR_0;

 return 0;
}
