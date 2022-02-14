
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vf_valid; } ;
struct hc_sp_status_block_data {TYPE_1__ p_func; int state; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int ,int ) ;
 int FUNC_4 (struct bnx2x*,struct hc_sp_status_block_data*) ;
 int FUNC_5 (struct hc_sp_status_block_data*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4);
 struct hc_sp_status_block_data VAR_6;
 FUNC_5(&VAR_6, 0, sizeof(struct hc_sp_status_block_data));

 VAR_6.state = VAR_3;
 VAR_6.p_func.vf_valid = 0;

 FUNC_4(VAR_4, &VAR_6);

 FUNC_3(VAR_4, VAR_0 +
   FUNC_1(VAR_5), 0,
   VAR_1);
 FUNC_3(VAR_4, VAR_0 +
   FUNC_2(VAR_5), 0,
   VAR_2);
}
