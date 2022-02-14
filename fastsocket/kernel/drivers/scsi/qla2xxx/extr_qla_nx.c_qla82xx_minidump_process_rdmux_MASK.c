
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {int dummy; } ;
struct qla82xx_md_entry_mux {scalar_t__ read_addr; scalar_t__ select_addr; scalar_t__ select_value_stride; scalar_t__ select_value; scalar_t__ op_count; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
typedef int qla82xx_md_entry_hdr_t ;


 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(scsi_qla_host_t *VAR_0,
 qla82xx_md_entry_hdr_t *VAR_1, uint32_t **VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_0->hw;
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 struct qla82xx_md_entry_mux *VAR_11;
 uint32_t *VAR_12 = *VAR_2;

 VAR_11 = (struct qla82xx_md_entry_mux *)VAR_1;
 VAR_4 = VAR_11->read_addr;
 VAR_6 = VAR_11->select_addr;
 VAR_5 = VAR_11->select_value_stride;
 VAR_7 = VAR_11->select_value;
 VAR_8 = VAR_11->op_count;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  FUNC_1(VAR_3, VAR_6, VAR_7, 1);
  VAR_10 = FUNC_1(VAR_3, VAR_4, 0, 0);
  *VAR_12++ = FUNC_0(VAR_7);
  *VAR_12++ = FUNC_0(VAR_10);
  VAR_7 += VAR_5;
 }
 *VAR_2 = VAR_12;
}
