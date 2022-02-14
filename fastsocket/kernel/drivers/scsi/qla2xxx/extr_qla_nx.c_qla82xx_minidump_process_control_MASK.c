
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {scalar_t__ md_tmplt_hdr; } ;
struct qla82xx_md_template_hdr {int* saved_state_array; } ;
struct TYPE_6__ {int poll_timeout; int state_index_a; scalar_t__ addr_stride; } ;
struct TYPE_5__ {int opcode; int state_index_v; int shl; int shr; } ;
struct qla82xx_md_entry_crb {int addr; int op_count; int value_1; int value_2; int value_3; TYPE_2__ crb_strd; TYPE_1__ crb_ctrl; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
typedef int qla82xx_md_entry_hdr_t ;


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
 int FUNC_0 (struct qla_hw_data*,int,int,int) ;
 scalar_t__ FUNC_1 (int,unsigned long) ;

__attribute__((used)) static int
FUNC_2(scsi_qla_host_t *VAR_11,
 qla82xx_md_entry_hdr_t *VAR_12, uint32_t **VAR_13)
{
 struct qla_hw_data *VAR_14 = VAR_11->hw;
 struct qla82xx_md_entry_crb *VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18;
 uint32_t VAR_19, VAR_20, VAR_21;
 unsigned long VAR_22;
 struct qla82xx_md_template_hdr *VAR_23;
 uint32_t VAR_24 = VAR_9;
 int VAR_25;

 VAR_23 = (struct qla82xx_md_template_hdr *)VAR_14->md_tmplt_hdr;
 VAR_15 = (struct qla82xx_md_entry_crb *)VAR_12;
 VAR_21 = VAR_15->addr;

 for (VAR_25 = 0; VAR_25 < VAR_15->op_count; VAR_25++) {
  VAR_17 = VAR_15->crb_ctrl.opcode;
  if (VAR_17 & VAR_6) {
   FUNC_0(VAR_14, VAR_21,
       VAR_15->value_1, 1);
   VAR_17 &= ~VAR_6;
  }

  if (VAR_17 & VAR_5) {
   VAR_16 = FUNC_0(VAR_14, VAR_21, 0, 0);
   FUNC_0(VAR_14, VAR_21, VAR_16, 1);
   VAR_17 &= ~VAR_5;
  }

  if (VAR_17 & VAR_0) {
   VAR_16 = FUNC_0(VAR_14, VAR_21, 0, 0);
   VAR_16 &= VAR_15->value_2;
   VAR_17 &= ~VAR_0;
   if (VAR_17 & VAR_2) {
    VAR_16 |= VAR_15->value_3;
    VAR_17 &= ~VAR_2;
   }
   FUNC_0(VAR_14, VAR_21, VAR_16, 1);
  }

  if (VAR_17 & VAR_2) {
   VAR_16 = FUNC_0(VAR_14, VAR_21, 0, 0);
   VAR_16 |= VAR_15->value_3;
   FUNC_0(VAR_14, VAR_21, VAR_16, 1);
   VAR_17 &= ~VAR_2;
  }

  if (VAR_17 & VAR_3) {
   VAR_18 = VAR_15->crb_strd.poll_timeout;
   VAR_22 = VAR_10 + VAR_18;
   VAR_16 = FUNC_0(VAR_14, VAR_21, 0, 0);

   do {
    if ((VAR_16 & VAR_15->value_2)
        == VAR_15->value_1)
     break;
    else if (FUNC_1(VAR_10, VAR_22)) {

     VAR_24 = VAR_8;
     break;
    } else
     VAR_16 = FUNC_0(VAR_14,
         VAR_21, 0, 0);
   } while (1);
   VAR_17 &= ~VAR_3;
  }

  if (VAR_17 & VAR_4) {
   if (VAR_15->crb_strd.state_index_a) {
    VAR_20 = VAR_15->crb_strd.state_index_a;
    VAR_19 = VAR_23->saved_state_array[VAR_20];
   } else
    VAR_19 = VAR_21;

   VAR_16 = FUNC_0(VAR_14, VAR_19, 0, 0);
   VAR_20 = VAR_15->crb_ctrl.state_index_v;
   VAR_23->saved_state_array[VAR_20] = VAR_16;
   VAR_17 &= ~VAR_4;
  }

  if (VAR_17 & VAR_7) {
   if (VAR_15->crb_strd.state_index_a) {
    VAR_20 = VAR_15->crb_strd.state_index_a;
    VAR_19 = VAR_23->saved_state_array[VAR_20];
   } else
    VAR_19 = VAR_21;

   if (VAR_15->crb_ctrl.state_index_v) {
    VAR_20 = VAR_15->crb_ctrl.state_index_v;
    VAR_16 =
        VAR_23->saved_state_array[VAR_20];
   } else
    VAR_16 = VAR_15->value_1;

   FUNC_0(VAR_14, VAR_19, VAR_16, 1);
   VAR_17 &= ~VAR_7;
  }

  if (VAR_17 & VAR_1) {
   VAR_20 = VAR_15->crb_ctrl.state_index_v;
   VAR_16 = VAR_23->saved_state_array[VAR_20];
   VAR_16 <<= VAR_15->crb_ctrl.shl;
   VAR_16 >>= VAR_15->crb_ctrl.shr;
   if (VAR_15->value_2)
    VAR_16 &= VAR_15->value_2;
   VAR_16 |= VAR_15->value_3;
   VAR_16 += VAR_15->value_1;
   VAR_23->saved_state_array[VAR_20] = VAR_16;
   VAR_17 &= ~VAR_1;
  }
  VAR_21 += VAR_15->crb_strd.addr_stride;
 }
 return VAR_24;
}
