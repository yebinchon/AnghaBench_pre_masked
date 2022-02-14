
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jme_adapter {int reg_rxcs; int rx_ring_size; int dev; TYPE_1__* rxring; } ;
typedef int __u64 ;
struct TYPE_2__ {scalar_t__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct jme_adapter*,int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void
FUNC_3(struct jme_adapter *VAR_8)
{



 FUNC_1(VAR_8, VAR_0, VAR_8->reg_rxcs |
    VAR_7);
 FUNC_2();




 FUNC_1(VAR_8, VAR_2, (__u64)(VAR_8->rxring[0].dma) & 0xFFFFFFFFUL);
 FUNC_1(VAR_8, VAR_1, (__u64)(VAR_8->rxring[0].dma) >> 32);
 FUNC_1(VAR_8, VAR_3, (__u64)(VAR_8->rxring[0].dma) & 0xFFFFFFFFUL);




 FUNC_1(VAR_8, VAR_4, VAR_8->rx_ring_size);




 FUNC_0(VAR_8->dev);




 FUNC_2();
 FUNC_1(VAR_8, VAR_0, VAR_8->reg_rxcs |
    VAR_7 |
    VAR_5 |
    VAR_6);
}
