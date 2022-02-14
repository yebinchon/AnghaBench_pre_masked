
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_9__ {scalar_t__ init_tag_value; scalar_t__ tag_value_stride; } ;
struct TYPE_8__ {scalar_t__ read_addr_cnt; scalar_t__ read_addr_stride; } ;
struct TYPE_7__ {scalar_t__ write_value; unsigned long poll_wait; unsigned long poll_mask; } ;
struct qla82xx_md_entry_cache {scalar_t__ op_count; scalar_t__ read_addr; scalar_t__ control_addr; scalar_t__ tag_reg_addr; TYPE_3__ addr_ctrl; TYPE_2__ read_ctrl; TYPE_1__ cache_ctrl; } ;
struct TYPE_10__ {struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
typedef int qla82xx_md_entry_hdr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 unsigned long VAR_2 ;
 int FUNC_1 (int ,TYPE_4__*,int,char*,scalar_t__,unsigned long,unsigned long) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct qla_hw_data*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_4(scsi_qla_host_t *VAR_4,
 qla82xx_md_entry_hdr_t *VAR_5, uint32_t **VAR_6)
{
 struct qla_hw_data *VAR_7 = VAR_4->hw;
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 unsigned long VAR_18, VAR_19, VAR_20;
 uint32_t VAR_21, VAR_22;
 struct qla82xx_md_entry_cache *VAR_23;
 int VAR_24 = VAR_0;
 uint32_t *VAR_25 = *VAR_6;

 VAR_23 = (struct qla82xx_md_entry_cache *)VAR_5;
 VAR_14 = VAR_23->op_count;
 VAR_9 = VAR_23->read_addr;
 VAR_10 = VAR_23->control_addr;
 VAR_21 = VAR_23->cache_ctrl.write_value;

 VAR_11 = VAR_23->tag_reg_addr;
 VAR_15 = VAR_23->addr_ctrl.init_tag_value;
 VAR_16 = VAR_23->read_ctrl.read_addr_cnt;
 VAR_18 = VAR_23->cache_ctrl.poll_wait;
 VAR_20 = VAR_23->cache_ctrl.poll_mask;

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  FUNC_2(VAR_7, VAR_11, VAR_15, 1);
  if (VAR_21)
   FUNC_2(VAR_7, VAR_10, VAR_21, 1);

  if (VAR_20) {
   VAR_19 = VAR_2 + VAR_18;
   do {
    VAR_22 = FUNC_2(VAR_7, VAR_10, 0, 0);
    if ((VAR_22 & VAR_20) == 0)
     break;
    else if (FUNC_3(VAR_2, VAR_19)) {

     FUNC_1(VAR_3, VAR_4, 0xb032,
         "c_value_r: 0x%x, poll_mask: 0x%lx,"
         " w_time: 0x%lx\n",
         VAR_22, VAR_20, VAR_19);
     return VAR_24;
    }
   } while (1);
  }

  VAR_8 = VAR_9;
  for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
   VAR_17 = FUNC_2(VAR_7, VAR_8, 0, 0);
   *VAR_25++ = FUNC_0(VAR_17);
   VAR_8 += VAR_23->read_ctrl.read_addr_stride;
  }
  VAR_15 += VAR_23->addr_ctrl.tag_value_stride;
 }
 *VAR_6 = VAR_25;
 return VAR_1;
}
