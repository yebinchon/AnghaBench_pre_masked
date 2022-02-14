
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct veth_lpar_connection {int dst_inst; int src_inst; int remote_lp; } ;
typedef int HvLpEvent_Rc ;
typedef int HvLpEvent_AckType ;
typedef int HvLpEvent_AckInd ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline HvLpEvent_Rc
FUNC_1(struct veth_lpar_connection *VAR_1, u16 VAR_2,
   HvLpEvent_AckInd VAR_3, HvLpEvent_AckType VAR_4,
   u64 VAR_5,
   u64 VAR_6, u64 VAR_7, u64 VAR_8, u64 VAR_9, u64 VAR_10)
{
 return FUNC_0(VAR_1->remote_lp,
          VAR_0,
          VAR_2, VAR_3, VAR_4,
          VAR_1->src_inst,
          VAR_1->dst_inst,
          VAR_5, VAR_6, VAR_7, VAR_8,
          VAR_9, VAR_10);
}
