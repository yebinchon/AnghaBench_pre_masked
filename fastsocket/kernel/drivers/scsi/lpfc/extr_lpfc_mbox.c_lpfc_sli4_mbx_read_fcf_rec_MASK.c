
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union lpfc_sli4_cfg_shdr {int dummy; } lpfc_sli4_cfg_shdr ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_mbx_sge {int pa_lo; int pa_hi; } ;
struct TYPE_4__ {int request; } ;
struct lpfc_mbx_read_fcf_tbl {TYPE_2__ u; } ;
struct lpfc_hba {int dummy; } ;
struct lpfcMboxq {TYPE_1__* sge_array; } ;
struct fcf_record {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {void** addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int,int) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfcMboxq*,int ,int ,int,int ) ;
 int FUNC_4 (struct lpfcMboxq*,int ,struct lpfc_mbx_sge*) ;
 int FUNC_5 (int *,int *,int) ;

int
FUNC_6(struct lpfc_hba *VAR_7,
      struct lpfcMboxq *VAR_8,
      uint16_t VAR_9)
{
 void *VAR_10;
 dma_addr_t VAR_11;
 uint8_t *VAR_12;
 struct lpfc_mbx_sge VAR_13;
 uint32_t VAR_14, VAR_15;
 struct lpfc_mbx_read_fcf_tbl *VAR_16;

 if (!VAR_8)
  return -VAR_0;

 VAR_15 = sizeof(struct fcf_record) +
    sizeof(union lpfc_sli4_cfg_shdr) + 2 * sizeof(uint32_t);


 VAR_14 = FUNC_3(VAR_7, VAR_8, VAR_4,
   VAR_3, VAR_15,
   VAR_5);

 if (VAR_14 < VAR_15) {
  FUNC_2(VAR_7, VAR_1, VAR_2,
    "0291 Allocated DMA memory size (x%x) is "
    "less than the requested DMA memory "
    "size (x%x)\n", VAR_14, VAR_15);
  return -VAR_0;
 }




 FUNC_4(VAR_8, 0, &VAR_13);
 VAR_11 = FUNC_1(VAR_13.pa_hi, VAR_13.pa_lo);
 VAR_10 = VAR_8->sge_array->addr[0];
 VAR_16 = (struct lpfc_mbx_read_fcf_tbl *)VAR_10;


 FUNC_0(VAR_6, &VAR_16->u.request, VAR_9);

 VAR_12 = VAR_10 + sizeof(union lpfc_sli4_cfg_shdr);
 FUNC_5(VAR_12, VAR_12, sizeof(uint32_t));

 return 0;
}
