
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct bnx2x_txq_setup_params {int traffic_type; scalar_t__ sb_cq_index; int tss_leading_cl_id; int fw_sb_id; int dscr_map; } ;
struct bnx2x_fastpath {int fw_sb_id; TYPE_1__** txdata_ptr; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int tx_desc_mapping; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x_fastpath*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_5,
 struct bnx2x_fastpath *VAR_6, struct bnx2x_txq_setup_params *VAR_7,
 u8 VAR_8)
{
 VAR_7->dscr_map = VAR_6->txdata_ptr[VAR_8]->tx_desc_mapping;
 VAR_7->sb_cq_index = VAR_0 + VAR_8;
 VAR_7->traffic_type = VAR_3;
 VAR_7->fw_sb_id = VAR_6->fw_sb_id;





 VAR_7->tss_leading_cl_id = FUNC_1(VAR_5, 0, VAR_4);

 if (FUNC_0(VAR_6)) {
  VAR_7->sb_cq_index = VAR_1;
  VAR_7->traffic_type = VAR_2;
 }
}
