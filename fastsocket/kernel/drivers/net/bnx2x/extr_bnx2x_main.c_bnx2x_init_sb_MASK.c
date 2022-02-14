
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hc_status_block_sm {int dummy; } ;
struct TYPE_5__ {void* lo; void* hi; } ;
struct TYPE_4__ {int vf_id; int vf_valid; void* vnic_id; void* pf_id; } ;
struct TYPE_6__ {int same_igu_sb_1b; struct hc_status_block_sm* state_machine; TYPE_2__ host_sb_addr; TYPE_1__ p_func; void* state; } ;
struct hc_status_block_data_e2 {int index_data; TYPE_3__ common; } ;
struct hc_status_block_data_e1x {int index_data; TYPE_3__ common; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (struct bnx2x*) ;
 void* FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct hc_status_block_sm*,int,int) ;
 int FUNC_9 (struct bnx2x*,int,int *,int) ;
 int FUNC_10 (struct bnx2x*,int) ;
 int FUNC_11 (struct hc_status_block_data_e2*,int ,int) ;

void FUNC_12(struct bnx2x *VAR_6, dma_addr_t VAR_7, int VAR_8,
     u8 VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12;

 struct hc_status_block_data_e2 VAR_13;
 struct hc_status_block_data_e1x VAR_14;
 struct hc_status_block_sm *VAR_15;
 int VAR_16;
 u32 *VAR_17;

 if (FUNC_2(VAR_6))
  VAR_12 = VAR_0;
 else
  VAR_12 = VAR_1;

 FUNC_10(VAR_6, VAR_10);

 if (!FUNC_3(VAR_6)) {
  FUNC_11(&VAR_13, 0, sizeof(struct hc_status_block_data_e2));
  VAR_13 = VAR_3;
  VAR_13 = FUNC_0(VAR_6);
  VAR_13 = VAR_8;
  VAR_13 = VAR_9;
  VAR_13 = FUNC_1(VAR_6);
  VAR_13 = 1;
  VAR_13 = FUNC_5(VAR_7);
  VAR_13 = FUNC_6(VAR_7);
  VAR_15 = VAR_13;
  VAR_17 = (u32 *)&VAR_13;
  VAR_16 = sizeof(struct hc_status_block_data_e2)/sizeof(u32);
  FUNC_7(VAR_13);
 } else {
  FUNC_11(&VAR_14, 0,
         sizeof(struct hc_status_block_data_e1x));
  VAR_14.common.state = VAR_3;
  VAR_14.common.p_func.pf_id = FUNC_0(VAR_6);
  VAR_14.common.p_func.vf_id = 0xff;
  VAR_14.common.p_func.vf_valid = 0;
  VAR_14.common.p_func.vnic_id = FUNC_1(VAR_6);
  VAR_14.common.same_igu_sb_1b = 1;
  VAR_14.common.host_sb_addr.hi = FUNC_5(VAR_7);
  VAR_14.common.host_sb_addr.lo = FUNC_6(VAR_7);
  VAR_15 = VAR_14.common.state_machine;
  VAR_17 = (u32 *)&VAR_14;
  VAR_16 = sizeof(struct hc_status_block_data_e1x)/sizeof(u32);
  FUNC_7(VAR_14.index_data);
 }

 FUNC_8(&VAR_15[VAR_4],
           VAR_11, VAR_12);
 FUNC_8(&VAR_15[VAR_5],
           VAR_11, VAR_12);

 FUNC_4(VAR_2, "Init FW SB %d\n", VAR_10);


 FUNC_9(VAR_6, VAR_10, VAR_17, VAR_16);
}
