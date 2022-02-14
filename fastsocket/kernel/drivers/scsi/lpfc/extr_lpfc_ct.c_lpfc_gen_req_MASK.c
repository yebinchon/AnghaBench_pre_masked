
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ulp_bde64 {int dummy; } ;
struct lpfc_vport {int port_state; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {size_t nlp_rpi; int nlp_DID; } ;
struct TYPE_10__ {int ndlp; } ;
struct TYPE_11__ {int Fctl; int Type; int Rctl; scalar_t__ Dfctl; } ;
struct TYPE_12__ {TYPE_3__ hcsw; } ;
struct TYPE_9__ {int bdeSize; int bdeFlags; int addrLow; int addrHigh; scalar_t__ ulpIoTag32; } ;
struct TYPE_13__ {TYPE_4__ w5; TYPE_1__ bdl; } ;
struct TYPE_14__ {TYPE_5__ genreq64; } ;
struct TYPE_16__ {int ulpTimeout; int ulpBdeCount; int ulpLe; size_t ulpContext; int ulpIoTag; scalar_t__ ulpCt_l; scalar_t__ ulpCt_h; int ulpClass; TYPE_6__ un; int ulpCommand; } ;
struct lpfc_iocbq {void (* iocb_cmpl ) (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;int drvrTimeout; int retry; struct lpfc_vport* vport; TYPE_2__ context_un; int * context2; int * context1; int * context3; TYPE_8__ iocb; } ;
struct TYPE_15__ {size_t* rpi_ids; } ;
struct lpfc_hba {int fc_ratov; scalar_t__ sli_rev; int sli3_options; TYPE_7__ sli4_hba; } ;
struct lpfc_dmabuf {int phys; } ;
typedef TYPE_8__ IOCB_t ;


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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ) ;
 struct lpfc_iocbq* FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct lpfc_vport *VAR_14, struct lpfc_dmabuf *VAR_15,
      struct lpfc_dmabuf *VAR_16, struct lpfc_dmabuf *VAR_17,
      void (*VAR_18) (struct lpfc_hba *, struct lpfc_iocbq *,
       struct lpfc_iocbq *),
      struct lpfc_nodelist *VAR_19, uint32_t VAR_20, uint32_t VAR_21,
      uint32_t VAR_22, uint8_t VAR_23)
{
 struct lpfc_hba *VAR_24 = VAR_14->phba;
 IOCB_t *VAR_25;
 struct lpfc_iocbq *VAR_26;
 int VAR_27;


 VAR_26 = FUNC_2(VAR_24);

 if (VAR_26 == ((void*)0))
  return 1;

 VAR_25 = &VAR_26->iocb;
 VAR_25->un.genreq64.bdl.ulpIoTag32 = 0;
 VAR_25->un.genreq64.bdl.addrHigh = FUNC_5(VAR_15->phys);
 VAR_25->un.genreq64.bdl.addrLow = FUNC_6(VAR_15->phys);
 VAR_25->un.genreq64.bdl.bdeFlags = VAR_0;
 VAR_25->un.genreq64.bdl.bdeSize = (VAR_21 * sizeof (struct ulp_bde64));

 if (VAR_20)
  VAR_26->context3 = ((void*)0);
 else
  VAR_26->context3 = (uint8_t *) VAR_15;


 VAR_26->context1 = (uint8_t *) VAR_16;
 VAR_26->context2 = (uint8_t *) VAR_17;
 VAR_26->context_un.ndlp = FUNC_0(VAR_19);


 VAR_25->ulpCommand = VAR_2;


 VAR_25->un.genreq64.w5.hcsw.Fctl = (VAR_13 | VAR_7);
 VAR_25->un.genreq64.w5.hcsw.Dfctl = 0;
 VAR_25->un.genreq64.w5.hcsw.Rctl = VAR_3;
 VAR_25->un.genreq64.w5.hcsw.Type = VAR_4;

 if (!VAR_22) {

  VAR_22 = (3 * VAR_24->fc_ratov);
 }
 VAR_25->ulpTimeout = VAR_22;
 VAR_25->ulpBdeCount = 1;
 VAR_25->ulpLe = 1;
 VAR_25->ulpClass = VAR_1;
 VAR_25->ulpContext = VAR_19->nlp_rpi;
 if (VAR_24->sli_rev == VAR_12)
  VAR_25->ulpContext = VAR_24->sli4_hba.rpi_ids[VAR_19->nlp_rpi];

 if (VAR_24->sli3_options & VAR_11) {

  VAR_25->ulpCt_h = 0;
  VAR_25->ulpCt_l = 0;
 }


 FUNC_1(VAR_14, VAR_6, VAR_8,
    "0119 Issue GEN REQ IOCB to NPORT x%x "
    "Data: x%x x%x\n",
    VAR_19->nlp_DID, VAR_25->ulpIoTag,
    VAR_14->port_state);
 VAR_26->iocb_cmpl = VAR_18;
 VAR_26->drvrTimeout = VAR_25->ulpTimeout + VAR_9;
 VAR_26->vport = VAR_14;
 VAR_26->retry = VAR_23;
 VAR_27 = FUNC_3(VAR_24, VAR_10, VAR_26, 0);

 if (VAR_27 == VAR_5) {
  FUNC_4(VAR_24, VAR_26);
  return 1;
 }

 return 0;
}
