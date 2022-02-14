
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct wq_enet_desc {int dummy; } ;
struct vnic_wq {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 struct wq_enet_desc* FUNC_0 (struct vnic_wq*) ;
 int FUNC_1 (struct vnic_wq*,void*,scalar_t__,unsigned int,int,int) ;
 int FUNC_2 (struct wq_enet_desc*,int,int ,int ,int ,int ,int,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct vnic_wq *VAR_1,
          void *VAR_2, dma_addr_t VAR_3,
          unsigned int VAR_4,
          int VAR_5,
          unsigned int VAR_6,
          int VAR_7)
{
 struct wq_enet_desc *VAR_8 = FUNC_0(VAR_1);

 FUNC_2(VAR_8,
    (u64)VAR_3 | VAR_0,
    (u16)VAR_4,
    0,
    0,
    0,
    1,
    (u8)VAR_7,
    0,
    (u8)VAR_5,
    (u16)VAR_6,
    0 );

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, 1, 1);
}
