
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u16 ;
struct vnic_rq {int dummy; } ;
struct rq_enet_desc {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rq_enet_desc*,int,int ,scalar_t__) ;
 struct rq_enet_desc* FUNC_1 (struct vnic_rq*) ;
 int FUNC_2 (struct vnic_rq*,void*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct vnic_rq *VAR_2,
          void *VAR_3, dma_addr_t VAR_4,
          u16 VAR_5)
{
 struct rq_enet_desc *VAR_6 = FUNC_1(VAR_2);

 FUNC_0(VAR_6,
  (u64)VAR_4 | VAR_1,
  VAR_0,
  (u16)VAR_5);

 FUNC_2(VAR_2, VAR_3, 0, VAR_4, VAR_5);
}
