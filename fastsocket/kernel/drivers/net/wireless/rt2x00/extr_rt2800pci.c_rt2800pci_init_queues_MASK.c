
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rt2x00_dev {TYPE_4__* rx; TYPE_2__* tx; } ;
struct queue_entry_priv_mmio {scalar_t__ desc_dma; } ;
struct TYPE_8__ {scalar_t__ limit; TYPE_3__* entries; } ;
struct TYPE_7__ {struct queue_entry_priv_mmio* priv_data; } ;
struct TYPE_6__ {scalar_t__ limit; TYPE_1__* entries; } ;
struct TYPE_5__ {struct queue_entry_priv_mmio* priv_data; } ;


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
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct rt2x00_dev *VAR_29)
{
 struct queue_entry_priv_mmio *VAR_30;




 VAR_30 = VAR_29->tx[0].entries[0].priv_data;
 FUNC_1(VAR_29, VAR_5,
      VAR_30->desc_dma);
 FUNC_1(VAR_29, VAR_23,
      VAR_29->tx[0].limit);
 FUNC_1(VAR_29, VAR_11, 0);
 FUNC_1(VAR_29, VAR_17, 0);

 VAR_30 = VAR_29->tx[1].entries[0].priv_data;
 FUNC_1(VAR_29, VAR_6,
      VAR_30->desc_dma);
 FUNC_1(VAR_29, VAR_24,
      VAR_29->tx[1].limit);
 FUNC_1(VAR_29, VAR_12, 0);
 FUNC_1(VAR_29, VAR_18, 0);

 VAR_30 = VAR_29->tx[2].entries[0].priv_data;
 FUNC_1(VAR_29, VAR_7,
      VAR_30->desc_dma);
 FUNC_1(VAR_29, VAR_25,
      VAR_29->tx[2].limit);
 FUNC_1(VAR_29, VAR_13, 0);
 FUNC_1(VAR_29, VAR_19, 0);

 VAR_30 = VAR_29->tx[3].entries[0].priv_data;
 FUNC_1(VAR_29, VAR_8,
      VAR_30->desc_dma);
 FUNC_1(VAR_29, VAR_26,
      VAR_29->tx[3].limit);
 FUNC_1(VAR_29, VAR_14, 0);
 FUNC_1(VAR_29, VAR_20, 0);

 FUNC_1(VAR_29, VAR_9, 0);
 FUNC_1(VAR_29, VAR_27, 0);
 FUNC_1(VAR_29, VAR_15, 0);
 FUNC_1(VAR_29, VAR_21, 0);

 FUNC_1(VAR_29, VAR_10, 0);
 FUNC_1(VAR_29, VAR_28, 0);
 FUNC_1(VAR_29, VAR_16, 0);
 FUNC_1(VAR_29, VAR_22, 0);

 VAR_30 = VAR_29->rx->entries[0].priv_data;
 FUNC_1(VAR_29, VAR_1,
      VAR_30->desc_dma);
 FUNC_1(VAR_29, VAR_4,
      VAR_29->rx[0].limit);
 FUNC_1(VAR_29, VAR_2,
      VAR_29->rx[0].limit - 1);
 FUNC_1(VAR_29, VAR_3, 0);

 FUNC_0(VAR_29);

 FUNC_1(VAR_29, VAR_0, 0);

 return 0;
}
