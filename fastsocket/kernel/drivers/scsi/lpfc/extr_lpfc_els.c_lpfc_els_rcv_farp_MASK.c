
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int fc_nodename; int fc_portname; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; scalar_t__ nlp_prev_state; int nlp_DID; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_5__ {int remoteID; } ;
struct TYPE_6__ {TYPE_1__ elsreq64; } ;
struct TYPE_7__ {TYPE_2__ un; } ;
struct lpfc_iocbq {scalar_t__ context2; TYPE_3__ iocb; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_8__ {int Mflags; int Rflags; int RnodeName; int RportName; } ;
typedef TYPE_3__ IOCB_t ;
typedef TYPE_4__ FARP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct lpfc_vport*,int,int ) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_5(struct lpfc_vport *VAR_9, struct lpfc_iocbq *VAR_10,
    struct lpfc_nodelist *VAR_11)
{
 struct lpfc_dmabuf *VAR_12;
 uint32_t *VAR_13;
 IOCB_t *VAR_14;
 FARP *VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18;

 VAR_14 = &VAR_10->iocb;
 VAR_18 = VAR_14->un.elsreq64.remoteID;
 VAR_12 = (struct lpfc_dmabuf *) VAR_10->context2;
 VAR_13 = (uint32_t *) VAR_12->virt;

 VAR_16 = *VAR_13++;
 VAR_15 = (FARP *) VAR_13;

 FUNC_3(VAR_9, VAR_4, VAR_5,
    "0601 FARP-REQ received from DID x%x\n", VAR_18);

 if (VAR_15->Mflags & ~(VAR_0 | VAR_1)) {
  return 0;
 }

 VAR_17 = 0;

 if (VAR_15->Mflags & VAR_1) {
  if (FUNC_4(&VAR_15->RportName, &VAR_9->fc_portname,
      sizeof(struct lpfc_name)) == 0)
   VAR_17 = 1;
 }


 if (VAR_15->Mflags & VAR_0) {
  if (FUNC_4(&VAR_15->RnodeName, &VAR_9->fc_nodename,
      sizeof(struct lpfc_name)) == 0)
   VAR_17 = 1;
 }

 if (VAR_17) {
  if ((VAR_11->nlp_state == VAR_8) ||
     (VAR_11->nlp_state == VAR_6)) {

   if (VAR_15->Rflags & VAR_3) {
    VAR_11->nlp_prev_state = VAR_11->nlp_state;
    FUNC_2(VAR_9, VAR_11,
         VAR_7);
    FUNC_1(VAR_9, VAR_11->nlp_DID, 0);
   }


   if (VAR_15->Rflags & VAR_2)
    FUNC_0(VAR_9, VAR_18, 0);
  }
 }
 return 0;
}
