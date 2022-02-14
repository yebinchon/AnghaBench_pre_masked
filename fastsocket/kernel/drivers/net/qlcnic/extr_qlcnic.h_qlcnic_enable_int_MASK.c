
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_host_sds_ring {int crb_intr_mask; struct qlcnic_adapter* adapter; } ;
struct qlcnic_adapter {int tgt_mask_reg; } ;


 int FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct qlcnic_host_sds_ring *VAR_0)
{
 struct qlcnic_adapter *VAR_1 = VAR_0->adapter;

 FUNC_1(0x1, VAR_0->crb_intr_mask);

 if (!FUNC_0(VAR_1))
  FUNC_1(0xfbff, VAR_1->tgt_mask_reg);
}
