
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int lsRjtRsnCodeExp; int lsRjtRsnCode; } ;
struct TYPE_9__ {TYPE_3__ b; int lsRjtError; } ;
struct ls_rjt {TYPE_4__ un; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_nodename; int nlp_portname; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_6__ {int wwnn; int wwpn; int subcategory; int event_type; } ;
struct lpfc_lsrjt_event {int explanation; int reason_code; int command; TYPE_1__ header; } ;
struct TYPE_7__ {int * ulpWord; } ;
struct TYPE_10__ {scalar_t__ ulpStatus; TYPE_2__ un; } ;
struct lpfc_iocbq {TYPE_5__ iocb; scalar_t__ context2; struct lpfc_nodelist* context1; struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_fabric_event_header {int wwnn; int wwpn; int subcategory; int event_type; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int dummy; } ;
typedef int lsrjt_event ;
typedef int fabric_event ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct Scsi_Host*,int ,int,char*,int ) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (int ,int *,int) ;

void
FUNC_6(struct lpfc_hba *VAR_9,
   struct lpfc_iocbq *VAR_10,
   struct lpfc_iocbq *VAR_11)
{
 struct lpfc_vport *VAR_12 = VAR_10->vport;
 struct Scsi_Host *VAR_13 = FUNC_4(VAR_12);
 struct lpfc_lsrjt_event VAR_14;
 struct lpfc_fabric_event_header VAR_15;
 struct ls_rjt VAR_16;
 struct lpfc_nodelist *VAR_17;
 uint32_t *VAR_18;

 VAR_17 = VAR_10->context1;
 if (!VAR_17 || !FUNC_0(VAR_17))
  return;

 if (VAR_11->iocb.ulpStatus == VAR_3) {
  VAR_14.header.event_type = VAR_0;
  VAR_14.header.subcategory = VAR_6;
  FUNC_5(VAR_14.header.wwpn, &VAR_17->nlp_portname,
   sizeof(struct lpfc_name));
  FUNC_5(VAR_14.header.wwnn, &VAR_17->nlp_nodename,
   sizeof(struct lpfc_name));
  VAR_18 = (uint32_t *) (((struct lpfc_dmabuf *)
   VAR_10->context2)->virt);
  VAR_14.command = (VAR_18 != ((void*)0)) ? *VAR_18 : 0;
  VAR_16.un.lsRjtError = FUNC_1(VAR_11->iocb.un.ulpWord[4]);
  VAR_14.reason_code = VAR_16.un.b.lsRjtRsnCode;
  VAR_14.explanation = VAR_16.un.b.lsRjtRsnCodeExp;
  FUNC_3(VAR_13,
   FUNC_2(),
   sizeof(VAR_14),
   (char *)&VAR_14,
   VAR_8);
  return;
 }
 if ((VAR_11->iocb.ulpStatus == VAR_4) ||
  (VAR_11->iocb.ulpStatus == VAR_2)) {
  VAR_15.event_type = VAR_1;
  if (VAR_11->iocb.ulpStatus == VAR_4)
   VAR_15.subcategory = VAR_7;
  else
   VAR_15.subcategory = VAR_5;
  FUNC_5(VAR_15.wwpn, &VAR_17->nlp_portname,
   sizeof(struct lpfc_name));
  FUNC_5(VAR_15.wwnn, &VAR_17->nlp_nodename,
   sizeof(struct lpfc_name));
  FUNC_3(VAR_13,
   FUNC_2(),
   sizeof(VAR_15),
   (char *)&VAR_15,
   VAR_8);
  return;
 }

}
