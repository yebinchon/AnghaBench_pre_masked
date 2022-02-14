
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b43_dmaring {int nr_slots; TYPE_1__* dev; struct b43_dmadesc64* descbase; } ;
struct b43_dmadesc64 {void* address_high; void* address_low; void* control1; void* control0; } ;
struct b43_dmadesc_generic {struct b43_dmadesc64 dma64; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct b43_dmaring *VAR_10,
     struct b43_dmadesc_generic *VAR_11,
     dma_addr_t VAR_12, u16 VAR_13,
     int VAR_14, int VAR_15, int VAR_16)
{
 struct b43_dmadesc64 *VAR_17 = VAR_10->descbase;
 int VAR_18;
 u32 VAR_19 = 0, VAR_20 = 0;
 u32 VAR_21, VAR_22;
 u32 VAR_23;

 VAR_18 = (int)(&(VAR_11->dma64) - VAR_17);
 FUNC_0(!(VAR_18 >= 0 && VAR_18 < VAR_10->nr_slots));

 VAR_21 = FUNC_1(&VAR_10->dev->dma, VAR_12, VAR_9);
 VAR_22 = FUNC_1(&VAR_10->dev->dma, VAR_12, VAR_8);
 VAR_23 = FUNC_1(&VAR_10->dev->dma, VAR_12, VAR_7);

 if (VAR_18 == VAR_10->nr_slots - 1)
  VAR_19 |= VAR_0;
 if (VAR_14)
  VAR_19 |= VAR_2;
 if (VAR_15)
  VAR_19 |= VAR_1;
 if (VAR_16)
  VAR_19 |= VAR_3;
 VAR_20 |= VAR_13 & VAR_6;
 VAR_20 |= (VAR_23 << VAR_5)
     & VAR_4;

 VAR_11->dma64.control0 = FUNC_2(VAR_19);
 VAR_11->dma64.control1 = FUNC_2(VAR_20);
 VAR_11->dma64.address_low = FUNC_2(VAR_21);
 VAR_11->dma64.address_high = FUNC_2(VAR_22);
}
