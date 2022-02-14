
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_14__ {int lsRjtRsnCodeExp; int lsRjtRsnCode; } ;
struct TYPE_15__ {int lsRjtError; TYPE_4__ b; } ;
struct ls_rjt {TYPE_5__ un; } ;
struct lpfc_vport {int cfg_devloss_tmo; int load_flag; int fc_flag; int fc_disctmo; } ;
struct lpfc_nodelist {scalar_t__ nlp_DID; int nlp_retry; int nlp_state; int nlp_prev_state; scalar_t__ nlp_last_elscmd; int nlp_flag; int nlp_delayfunc; } ;
struct TYPE_11__ {scalar_t__ remoteID; } ;
struct TYPE_18__ {int* ulpWord; TYPE_1__ elsreq64; } ;
struct TYPE_19__ {int ulpStatus; TYPE_8__ un; } ;
struct lpfc_iocbq {int retry; int sli4_lxritag; scalar_t__ context2; scalar_t__ context1; TYPE_9__ iocb; struct lpfc_vport* vport; } ;
struct TYPE_17__ {int elsDelayRetry; int elsXmitRetry; int elsRetryExceeded; } ;
struct TYPE_16__ {int fcf_flag; } ;
struct lpfc_hba {scalar_t__ fc_topology; int sli3_options; TYPE_7__ fc_stat; TYPE_6__ fcf; int * alpa_map; TYPE_3__* pport; TYPE_2__* pcidev; int sli_rev; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_13__ {int fc_myDID; } ;
struct TYPE_12__ {int device; } ;
typedef TYPE_9__ IOCB_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;




 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_29 ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,scalar_t__,int,scalar_t__) ;
 int FUNC_3 (TYPE_9__*) ;
 struct lpfc_nodelist* FUNC_4 (struct lpfc_vport*,scalar_t__) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_7 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_8 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_9 (struct lpfc_vport*,scalar_t__,int) ;
 int FUNC_10 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int VAR_30 ;
 int FUNC_11 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_12 (struct lpfc_vport*,int ,int ,char*,scalar_t__,...) ;
 int FUNC_13 (struct lpfc_vport*) ;
 int FUNC_14 (struct lpfc_hba*,struct lpfc_nodelist*,int ,int ,int ) ;
 struct Scsi_Host* FUNC_15 (struct lpfc_vport*) ;
 int FUNC_16 (struct lpfc_vport*,int ) ;
 int FUNC_17 (int *,scalar_t__) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int *) ;

__attribute__((used)) static int
FUNC_22(struct lpfc_hba *VAR_31, struct lpfc_iocbq *VAR_32,
        struct lpfc_iocbq *VAR_33)
{
 struct lpfc_vport *VAR_34 = VAR_32->vport;
 struct Scsi_Host *VAR_35 = FUNC_15(VAR_34);
 IOCB_t *VAR_36 = &VAR_33->iocb;
 struct lpfc_nodelist *VAR_37 = (struct lpfc_nodelist *) VAR_32->context1;
 struct lpfc_dmabuf *VAR_38 = (struct lpfc_dmabuf *) VAR_32->context2;
 uint32_t *VAR_39;
 struct ls_rjt VAR_40;
 int VAR_41 = 0, VAR_42 = VAR_30, VAR_43 = 0;
 int VAR_44 = 0;
 uint32_t VAR_45 = 0;
 uint32_t VAR_46;






 if (VAR_38 && VAR_38->virt) {
  VAR_39 = (uint32_t *) (VAR_38->virt);
  VAR_45 = *VAR_39++;
 }

 if (VAR_37 && FUNC_0(VAR_37))
  VAR_46 = VAR_37->nlp_DID;
 else {

  VAR_46 = VAR_36->un.elsreq64.remoteID;
  VAR_37 = FUNC_4(VAR_34, VAR_46);
  if ((!VAR_37 || !FUNC_0(VAR_37))
      && (VAR_45 != 149))
   return 1;
 }

 FUNC_2(VAR_34, VAR_10,
  "Retry ELS:       wd7:x%x wd4:x%x did:x%x",
  *(((uint32_t *) VAR_36) + 7), VAR_36->un.ulpWord[4], VAR_37->nlp_DID);

 switch (VAR_36->ulpStatus) {
 case 138:
  break;
 case 132:
  if (VAR_31->sli_rev == VAR_12) {




   FUNC_14(VAR_31, VAR_37,
      VAR_32->sli4_lxritag, 0, 0);
  }
  break;
 case 136:
  switch ((VAR_36->un.ulpWord[4] & VAR_6)) {
  case 144:
   if (VAR_45 == 151) {
    if (VAR_27 ==
     VAR_31->pcidev->device) {
     VAR_31->fc_topology = VAR_13;
     VAR_31->pport->fc_myDID = 0;
     VAR_31->alpa_map[0] = 0;
     VAR_31->alpa_map[1] = 0;
    }
   }
   if (VAR_45 == 149 && VAR_32->retry == 0)
    VAR_43 = 1000;
   VAR_41 = 1;
   break;

  case 147:
   FUNC_12(VAR_34, VAR_7, VAR_9,
      "0124 Retry illegal cmd x%x "
      "retry:x%x delay:x%x\n",
      VAR_45, VAR_32->retry, VAR_43);
   VAR_41 = 1;

   VAR_42 = 8;
   if (VAR_32->retry > 2)
    VAR_43 = 1000;
   break;

  case 143:
   VAR_44 = 1;
   VAR_41 = 1;
   if (VAR_32->retry > 100)
    VAR_43 = 100;
   VAR_42 = 250;
   break;

  case 146:
   VAR_43 = 100;
   VAR_41 = 1;
   break;

  case 142:
  case 145:
   if (VAR_45 == 149 &&
       VAR_46 == VAR_26) {


    VAR_42 = 0;
    VAR_43 = 100;
   }
   VAR_41 = 1;
   break;
  }
  break;

 case 133:
 case 139:
  if (VAR_36->un.ulpWord[4] & VAR_28) {
   VAR_41 = 1;
   break;
  }
  break;

 case 134:
 case 140:
  VAR_44 = 1;
  VAR_41 = 1;
  break;

 case 135:
  VAR_40.un.lsRjtError = FUNC_1(VAR_36->un.ulpWord[4]);



  switch (VAR_40.un.b.lsRjtRsnCode) {
  case 128:
   if (VAR_40.un.b.lsRjtRsnCodeExp ==
       VAR_15) {
    if (VAR_45 == 149) {
     VAR_43 = 1000;
     VAR_42 = 48;
    }
    VAR_41 = 1;
    break;
   }
   if (VAR_40.un.b.lsRjtRsnCodeExp ==
       VAR_14) {
    if (VAR_45 == 149) {
     VAR_43 = 1000;
     VAR_42 = 48;
    }
    VAR_41 = 1;
    break;
   }
   if ((VAR_45 == 149) ||
       (VAR_45 == 148)) {
    VAR_43 = 1000;
    VAR_42 = VAR_30 + 1;
    VAR_41 = 1;
    break;
   }
   if ((VAR_31->sli3_options & VAR_11) &&
     (VAR_45 == 152) &&
     (VAR_40.un.b.lsRjtRsnCodeExp == VAR_18)){
    FUNC_12(VAR_34, VAR_7, VAR_9,
       "0125 FDISC Failed (x%x). "
       "Fabric out of resources\n",
       VAR_40.un.lsRjtError);
    FUNC_16(VAR_34,
           VAR_4);
   }
   break;

  case 131:
   if ((VAR_45 == 149) ||
       (VAR_45 == 148)) {
    VAR_43 = 1000;
    VAR_42 = 48;
   } else if (VAR_45 == 152) {

    VAR_42 = 48;
    if (VAR_32->retry >= 32)
     VAR_43 = 1000;
   }
   VAR_41 = 1;
   break;

  case 130:




   if (VAR_45 == 152 &&
       VAR_40.un.b.lsRjtRsnCodeExp == VAR_19) {
    VAR_42 = 3;
    VAR_43 = 1000;
    VAR_41 = 1;
    break;
   }
  case 129:
   if ((VAR_31->sli3_options & VAR_11) &&
     (VAR_45 == 152) &&
     ((VAR_40.un.b.lsRjtRsnCodeExp == VAR_17) ||
     (VAR_40.un.b.lsRjtRsnCodeExp == VAR_16))
     ) {
    FUNC_12(VAR_34, VAR_7, VAR_9,
       "0122 FDISC Failed (x%x). "
       "Fabric Detected Bad WWN\n",
       VAR_40.un.lsRjtError);
    FUNC_16(VAR_34,
           VAR_3);
   }
   break;
  }
  break;

 case 137:
 case 141:
  break;

 default:
  break;
 }

 if (VAR_46 == VAR_5)
  VAR_41 = 1;

 if ((VAR_45 == 151) &&
     (VAR_31->fc_topology != VAR_13) &&
     !FUNC_3(VAR_36)) {

  VAR_41 = 1;

  VAR_42 = 0;
  if (VAR_32->retry >= 100)
   VAR_43 = 5000;
  else if (VAR_32->retry >= 32)
   VAR_43 = 1000;
 } else if ((VAR_45 == 152) && !FUNC_3(VAR_36)) {

  VAR_41 = 1;
  VAR_42 = VAR_34->cfg_devloss_tmo;
  VAR_43 = 1000;
 }

 VAR_32->retry++;
 if (VAR_42 && (VAR_32->retry >= VAR_42)) {
  VAR_31->fc_stat.elsRetryExceeded++;
  VAR_41 = 0;
 }

 if ((VAR_34->load_flag & VAR_2) != 0)
  VAR_41 = 0;

 if (VAR_41) {
  if ((VAR_45 == 149) || (VAR_45 == 152)) {

   if (VAR_31->fcf.fcf_flag & VAR_0) {
    FUNC_12(VAR_34, VAR_8, VAR_9,
       "2849 Stop retry ELS command "
       "x%x to remote NPORT x%x, "
       "Data: x%x x%x\n", VAR_45, VAR_46,
       VAR_32->retry, VAR_43);
    return 0;
   }
  }


  FUNC_12(VAR_34, VAR_8, VAR_9,
     "0107 Retry ELS command x%x to remote "
     "NPORT x%x Data: x%x x%x\n",
     VAR_45, VAR_46, VAR_32->retry, VAR_43);

  if (((VAR_45 == 149) || (VAR_45 == 153)) &&
   ((VAR_36->ulpStatus != 136) ||
   ((VAR_36->un.ulpWord[4] & VAR_6) !=
   143))) {



   if (FUNC_21(&VAR_34->fc_disctmo) ||
       (VAR_34->fc_flag & VAR_1))
    FUNC_13(VAR_34);
  }

  VAR_31->fc_stat.elsXmitRetry++;
  if (VAR_37 && FUNC_0(VAR_37) && VAR_43) {
   VAR_31->fc_stat.elsDelayRetry++;
   VAR_37->nlp_retry = VAR_32->retry;


   FUNC_17(&VAR_37->nlp_delayfunc,
    VAR_29 + FUNC_18(VAR_43));
   FUNC_19(VAR_35->host_lock);
   VAR_37->nlp_flag |= VAR_20;
   FUNC_20(VAR_35->host_lock);

   VAR_37->nlp_prev_state = VAR_37->nlp_state;
   if (VAR_45 == 148)
    FUNC_11(VAR_34, VAR_37,
     VAR_25);
   else
    FUNC_11(VAR_34, VAR_37,
     VAR_23);
   VAR_37->nlp_last_elscmd = VAR_45;

   return 1;
  }
  switch (VAR_45) {
  case 151:
   FUNC_7(VAR_34, VAR_37, VAR_32->retry);
   return 1;
  case 152:
   FUNC_6(VAR_34, VAR_37, VAR_32->retry);
   return 1;
  case 149:
   if (VAR_37 && FUNC_0(VAR_37)) {
    VAR_37->nlp_prev_state = VAR_37->nlp_state;
    FUNC_11(VAR_34, VAR_37,
         VAR_24);
   }
   FUNC_9(VAR_34, VAR_46, VAR_32->retry);
   return 1;
  case 153:
   VAR_37->nlp_prev_state = VAR_37->nlp_state;
   FUNC_11(VAR_34, VAR_37, VAR_21);
   FUNC_5(VAR_34, VAR_37, VAR_32->retry);
   return 1;
  case 148:
   VAR_37->nlp_prev_state = VAR_37->nlp_state;
   FUNC_11(VAR_34, VAR_37, VAR_25);
   FUNC_10(VAR_34, VAR_37, VAR_32->retry);
   return 1;
  case 150:
   VAR_37->nlp_prev_state = VAR_37->nlp_state;
   FUNC_11(VAR_34, VAR_37, VAR_22);
   FUNC_8(VAR_34, VAR_37, VAR_32->retry);
   return 1;
  }
 }

 if (VAR_44) {
  FUNC_12(VAR_34, VAR_7, VAR_9,
    "0137 No retry ELS command x%x to remote "
    "NPORT x%x: Out of Resources: Error:x%x/%x\n",
    VAR_45, VAR_46, VAR_36->ulpStatus,
    VAR_36->un.ulpWord[4]);
 }
 else {
  FUNC_12(VAR_34, VAR_8, VAR_9,
    "0108 No retry ELS command x%x to remote "
    "NPORT x%x Retried:%d Error:x%x/%x\n",
    VAR_45, VAR_46, VAR_32->retry, VAR_36->ulpStatus,
    VAR_36->un.ulpWord[4]);
 }
 return 0;
}
