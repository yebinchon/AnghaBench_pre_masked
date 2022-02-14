
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct b43_pio_txqueue {scalar_t__ mmio_base; int dev; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct b43_pio_txqueue *VAR_0,
         u16 VAR_1, u16 VAR_2)
{
 FUNC_0(VAR_0->dev, VAR_0->mmio_base + VAR_1, VAR_2);
}
