
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct b43_dmaring {scalar_t__ type; int frameoffset; int nr_slots; TYPE_1__* dev; int dmabase; scalar_t__ tx; } ;
struct b43_dmadesc64 {int dummy; } ;
struct b43_dmadesc32 {int dummy; } ;
struct TYPE_4__ {int parity; } ;
struct TYPE_3__ {TYPE_2__ dma; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (struct b43_dmaring*) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (struct b43_dmaring*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct b43_dmaring *VAR_34)
{
 int VAR_35 = 0;
 u32 VAR_36;
 u32 VAR_37;
 bool VAR_38 = VAR_34->dev->dma.parity;
 u32 VAR_39;
 u32 VAR_40;

 if (VAR_34->tx) {
  if (VAR_34->type == VAR_30) {
   u64 VAR_41 = (u64) (VAR_34->dmabase);
   VAR_37 = FUNC_1(&VAR_34->dev->dma, VAR_41, VAR_31);
   VAR_39 = FUNC_1(&VAR_34->dev->dma, VAR_41, VAR_33);
   VAR_40 = FUNC_1(&VAR_34->dev->dma, VAR_41, VAR_32);

   VAR_36 = VAR_26;
   VAR_36 |= (VAR_37 << VAR_24)
       & VAR_23;
   if (!VAR_38)
    VAR_36 |= VAR_27;
   FUNC_2(VAR_34, VAR_25, VAR_36);
   FUNC_2(VAR_34, VAR_29, VAR_39);
   FUNC_2(VAR_34, VAR_28, VAR_40);
  } else {
   u32 VAR_42 = (u32) (VAR_34->dmabase);
   VAR_37 = FUNC_1(&VAR_34->dev->dma, VAR_42, VAR_31);
   VAR_39 = FUNC_1(&VAR_34->dev->dma, VAR_42, VAR_33);

   VAR_36 = VAR_11;
   VAR_36 |= (VAR_37 << VAR_9)
       & VAR_8;
   if (!VAR_38)
    VAR_36 |= VAR_12;
   FUNC_2(VAR_34, VAR_10, VAR_36);
   FUNC_2(VAR_34, VAR_13, VAR_39);
  }
 } else {
  VAR_35 = FUNC_0(VAR_34);
  if (VAR_35)
   goto out;
  if (VAR_34->type == VAR_30) {
   u64 VAR_43 = (u64) (VAR_34->dmabase);
   VAR_37 = FUNC_1(&VAR_34->dev->dma, VAR_43, VAR_31);
   VAR_39 = FUNC_1(&VAR_34->dev->dma, VAR_43, VAR_33);
   VAR_40 = FUNC_1(&VAR_34->dev->dma, VAR_43, VAR_32);

   VAR_36 = (VAR_34->frameoffset << VAR_18);
   VAR_36 |= VAR_17;
   VAR_36 |= (VAR_37 << VAR_15)
       & VAR_14;
   if (!VAR_38)
    VAR_36 |= VAR_20;
   FUNC_2(VAR_34, VAR_16, VAR_36);
   FUNC_2(VAR_34, VAR_22, VAR_39);
   FUNC_2(VAR_34, VAR_21, VAR_40);
   FUNC_2(VAR_34, VAR_19, VAR_34->nr_slots *
          sizeof(struct b43_dmadesc64));
  } else {
   u32 VAR_44 = (u32) (VAR_34->dmabase);
   VAR_37 = FUNC_1(&VAR_34->dev->dma, VAR_44, VAR_31);
   VAR_39 = FUNC_1(&VAR_34->dev->dma, VAR_44, VAR_33);

   VAR_36 = (VAR_34->frameoffset << VAR_4);
   VAR_36 |= VAR_3;
   VAR_36 |= (VAR_37 << VAR_1)
       & VAR_0;
   if (!VAR_38)
    VAR_36 |= VAR_6;
   FUNC_2(VAR_34, VAR_2, VAR_36);
   FUNC_2(VAR_34, VAR_7, VAR_39);
   FUNC_2(VAR_34, VAR_5, VAR_34->nr_slots *
          sizeof(struct b43_dmadesc32));
  }
 }

out:
 return VAR_35;
}
