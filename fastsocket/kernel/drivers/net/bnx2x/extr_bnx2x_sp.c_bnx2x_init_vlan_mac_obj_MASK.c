
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union bnx2x_qable_obj {int dummy; } bnx2x_qable_obj ;
typedef int u8 ;
typedef int u32 ;
struct bnx2x_vlan_mac_obj {int exe_queue; int ramrod_cmd; int check_move; void* check_add; void* check_del; int set_one_rule; int put_cam_offset; int get_cam_offset; int put_credit; int get_credit; } ;
struct bnx2x_credit_pool_obj {int dummy; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;
typedef int bnx2x_obj_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_4 (struct bnx2x*,int *,int,union bnx2x_qable_obj*,int ,int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct bnx2x_vlan_mac_obj*,int ,int ,int ,void*,int ,int,unsigned long*,int ,struct bnx2x_credit_pool_obj*,struct bnx2x_credit_pool_obj*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

void FUNC_6(struct bnx2x *VAR_18,
        struct bnx2x_vlan_mac_obj *VAR_19,
        u8 VAR_20, u32 VAR_21, u8 VAR_22, void *VAR_23,
        dma_addr_t VAR_24, int VAR_25,
        unsigned long *VAR_26, bnx2x_obj_type VAR_27,
        struct bnx2x_credit_pool_obj *VAR_28,
        struct bnx2x_credit_pool_obj *VAR_29)
{
 union bnx2x_qable_obj *VAR_30 =
  (union bnx2x_qable_obj *)VAR_19;

 FUNC_5(VAR_19, VAR_20, VAR_21, VAR_22, VAR_23,
       VAR_24, VAR_25, VAR_26, VAR_27,
       VAR_28, VAR_29);


 VAR_19->get_credit = VAR_10;
 VAR_19->put_credit = VAR_13;




 VAR_19->get_cam_offset = VAR_9;
 VAR_19->put_cam_offset = VAR_12;

 if (FUNC_2(VAR_18)) {
  FUNC_0("Do not support chips others than E2\n");
  FUNC_1();
 } else if (FUNC_3(VAR_18)) {
  VAR_19->set_one_rule = VAR_15;
  VAR_19->check_del = VAR_6;
  VAR_19->check_add = VAR_5;
  VAR_19->check_move = VAR_4;
  VAR_19->ramrod_cmd = VAR_2;


  FUNC_4(VAR_18,
         &VAR_19->exe_queue, 1, VAR_30,
         VAR_17,
         VAR_14,
         VAR_11,
         VAR_7,
         VAR_8);
 } else {
  VAR_19->set_one_rule = VAR_16;
  VAR_19->check_del = VAR_6;
  VAR_19->check_add = VAR_5;
  VAR_19->check_move = VAR_3;
  VAR_19->ramrod_cmd =
   VAR_1;


  FUNC_4(VAR_18,
         &VAR_19->exe_queue,
         VAR_0,
         VAR_30, VAR_17,
         VAR_14,
         VAR_11,
         VAR_7,
         VAR_8);
 }
}
