
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bnx2x_virtf {int leading_rss; int filter_state; int mcast_obj; int abs_vfid; } ;
struct TYPE_2__ {int func_id; } ;
struct bnx2x_vf_queue {int cid; int vlan_obj; int mac_obj; TYPE_1__ sp_obj; } ;
struct bnx2x {int vlans_pool; int macs_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bnx2x*,int *,int ,int ,int ,int ,int ,int ,int *,int ,int *) ;
 int FUNC_3 (struct bnx2x*,int *,int ,int ,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_4 (struct bnx2x*,TYPE_1__*,int ,int *,int,int ,int ,int ,unsigned long) ;
 int FUNC_5 (struct bnx2x*,int *,int ,int ,int ,int ,int ,int ,int *,int ,int *) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,unsigned long*) ;
 int FUNC_9 (struct bnx2x_virtf*,struct bnx2x_vf_queue*) ;
 scalar_t__ FUNC_10 (struct bnx2x_vf_queue*) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_11(struct bnx2x *VAR_11, struct bnx2x_virtf *VAR_12,
      struct bnx2x_vf_queue *VAR_13)
{
 u8 VAR_14 = FUNC_9(VAR_12, VAR_13);
 u8 VAR_15 = FUNC_1(VAR_12->abs_vfid);
 unsigned long VAR_16 = 0;

 FUNC_8(VAR_6, &VAR_16);
 FUNC_8(VAR_5, &VAR_16);


 FUNC_4(VAR_11, &VAR_13->sp_obj,
        VAR_14, &VAR_13->cid, 1, VAR_15,
        FUNC_6(VAR_11, VAR_12, VAR_9),
        FUNC_7(VAR_11, VAR_12, VAR_9),
        VAR_16);

 FUNC_0(VAR_3,
    "initialized vf %d's queue object. func id set to %d\n",
    VAR_12->abs_vfid, VAR_13->sp_obj.func_id);




 if (FUNC_10(VAR_13)) {

  FUNC_2(VAR_11, &VAR_13->mac_obj,
       VAR_14, VAR_13->cid, VAR_15,
       FUNC_6(VAR_11, VAR_12, VAR_7),
       FUNC_7(VAR_11, VAR_12, VAR_7),
       VAR_0,
       &VAR_12->filter_state,
       VAR_4,
       &VAR_11->macs_pool);

  FUNC_5(VAR_11, &VAR_13->vlan_obj,
        VAR_14, VAR_13->cid, VAR_15,
        FUNC_6(VAR_11, VAR_12, VAR_10),
        FUNC_7(VAR_11, VAR_12, VAR_10),
        VAR_2,
        &VAR_12->filter_state,
        VAR_4,
        &VAR_11->vlans_pool);


  FUNC_3(VAR_11, &VAR_12->mcast_obj, VAR_14,
         VAR_13->cid, VAR_15, VAR_15,
         FUNC_6(VAR_11, VAR_12, VAR_8),
         FUNC_7(VAR_11, VAR_12, VAR_8),
         VAR_1,
         &VAR_12->filter_state,
         VAR_4);

  VAR_12->leading_rss = VAR_14;
 }
}
