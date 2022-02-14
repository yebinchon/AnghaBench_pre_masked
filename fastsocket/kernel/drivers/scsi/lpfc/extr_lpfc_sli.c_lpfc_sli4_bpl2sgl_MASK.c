
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int bdeSize; scalar_t__ bdeFlags; } ;
struct TYPE_8__ {int w; TYPE_1__ f; } ;
struct ulp_bde64 {TYPE_2__ tus; void* addrLow; void* addrHigh; } ;
struct sli4_sge {int word2; void* sge_len; void* addr_lo; void* addr_hi; } ;
struct lpfc_sglq {int sli4_xritag; scalar_t__ sgl; } ;
struct TYPE_9__ {scalar_t__ bdeFlags; int bdeSize; int addrHigh; int addrLow; } ;
struct TYPE_10__ {TYPE_3__ bdl; } ;
struct TYPE_11__ {TYPE_4__ genreq64; } ;
struct TYPE_12__ {scalar_t__ ulpCommand; TYPE_5__ un; } ;
struct lpfc_iocbq {TYPE_6__ iocb; scalar_t__ context3; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
typedef TYPE_6__ IOCB_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct sli4_sge*,int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static uint16_t
FUNC_3(struct lpfc_hba *VAR_10, struct lpfc_iocbq *VAR_11,
  struct lpfc_sglq *VAR_12)
{
 uint16_t VAR_13 = VAR_6;
 struct ulp_bde64 *VAR_14 = ((void*)0);
 struct ulp_bde64 VAR_15;
 struct sli4_sge *VAR_16 = ((void*)0);
 struct lpfc_dmabuf *VAR_17;
 IOCB_t *VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;
 uint32_t VAR_21 = 0;
 int VAR_22 = 0;

 if (!VAR_11 || !VAR_12)
  return VAR_13;

 VAR_16 = (struct sli4_sge *)VAR_12->sgl;
 VAR_18 = &VAR_11->iocb;
 if (VAR_18->ulpCommand == VAR_4)
  return VAR_12->sli4_xritag;
 if (VAR_18->un.genreq64.bdl.bdeFlags == VAR_2) {
  VAR_19 = VAR_18->un.genreq64.bdl.bdeSize /
    sizeof(struct ulp_bde64);




  if (VAR_11->context3)
   VAR_17 = (struct lpfc_dmabuf *)VAR_11->context3;
  else
   return VAR_13;

  VAR_14 = (struct ulp_bde64 *)VAR_17->virt;
  if (!VAR_14)
   return VAR_13;

  for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {

   VAR_16->addr_hi = VAR_14->addrHigh;
   VAR_16->addr_lo = VAR_14->addrLow;

   VAR_16->word2 = FUNC_2(VAR_16->word2);
   if ((VAR_20+1) == VAR_19)
    FUNC_0(VAR_7, VAR_16, 1);
   else
    FUNC_0(VAR_7, VAR_16, 0);



   VAR_15.tus.w = FUNC_2(VAR_14->tus.w);
   VAR_16->sge_len = FUNC_1(VAR_15.tus.f.bdeSize);




   if (VAR_11->iocb.ulpCommand == VAR_3) {

    if (VAR_14->tus.f.bdeFlags == VAR_1)
     VAR_22++;

    if (VAR_22 == 1)
     VAR_21 = 0;
    FUNC_0(VAR_8, VAR_16, VAR_21);
    FUNC_0(VAR_9, VAR_16,
     VAR_5);
    VAR_21 += VAR_15.tus.f.bdeSize;
   }
   VAR_16->word2 = FUNC_1(VAR_16->word2);
   VAR_14++;
   VAR_16++;
  }
 } else if (VAR_18->un.genreq64.bdl.bdeFlags == VAR_0) {




   VAR_16->addr_hi =
    FUNC_1(VAR_18->un.genreq64.bdl.addrHigh);
   VAR_16->addr_lo =
    FUNC_1(VAR_18->un.genreq64.bdl.addrLow);
   VAR_16->word2 = FUNC_2(VAR_16->word2);
   FUNC_0(VAR_7, VAR_16, 1);
   VAR_16->word2 = FUNC_1(VAR_16->word2);
   VAR_16->sge_len =
    FUNC_1(VAR_18->un.genreq64.bdl.bdeSize);
 }
 return VAR_12->sli4_xritag;
}
