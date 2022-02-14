
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_dev {TYPE_4__* rx; TYPE_2__* tx; } ;
struct queue_entry_priv_mmio {int desc_dma; } ;
struct TYPE_8__ {int limit; int desc_size; TYPE_3__* entries; } ;
struct TYPE_7__ {struct queue_entry_priv_mmio* priv_data; } ;
struct TYPE_6__ {int limit; int desc_size; TYPE_1__* entries; } ;
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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rt2x00_dev *VAR_33)
{
 struct queue_entry_priv_mmio *VAR_34;
 u32 VAR_35;




 FUNC_1(VAR_33, VAR_26, &VAR_35);
 FUNC_0(&VAR_35, VAR_27,
      VAR_33->tx[0].limit);
 FUNC_0(&VAR_35, VAR_28,
      VAR_33->tx[1].limit);
 FUNC_0(&VAR_35, VAR_29,
      VAR_33->tx[2].limit);
 FUNC_0(&VAR_35, VAR_30,
      VAR_33->tx[3].limit);
 FUNC_2(VAR_33, VAR_26, VAR_35);

 FUNC_1(VAR_33, VAR_31, &VAR_35);
 FUNC_0(&VAR_35, VAR_32,
      VAR_33->tx[0].desc_size / 4);
 FUNC_2(VAR_33, VAR_31, VAR_35);

 VAR_34 = VAR_33->tx[0].entries[0].priv_data;
 FUNC_1(VAR_33, VAR_0, &VAR_35);
 FUNC_0(&VAR_35, VAR_1,
      VAR_34->desc_dma);
 FUNC_2(VAR_33, VAR_0, VAR_35);

 VAR_34 = VAR_33->tx[1].entries[0].priv_data;
 FUNC_1(VAR_33, VAR_2, &VAR_35);
 FUNC_0(&VAR_35, VAR_3,
      VAR_34->desc_dma);
 FUNC_2(VAR_33, VAR_2, VAR_35);

 VAR_34 = VAR_33->tx[2].entries[0].priv_data;
 FUNC_1(VAR_33, VAR_4, &VAR_35);
 FUNC_0(&VAR_35, VAR_5,
      VAR_34->desc_dma);
 FUNC_2(VAR_33, VAR_4, VAR_35);

 VAR_34 = VAR_33->tx[3].entries[0].priv_data;
 FUNC_1(VAR_33, VAR_6, &VAR_35);
 FUNC_0(&VAR_35, VAR_7,
      VAR_34->desc_dma);
 FUNC_2(VAR_33, VAR_6, VAR_35);

 FUNC_1(VAR_33, VAR_17, &VAR_35);
 FUNC_0(&VAR_35, VAR_18, VAR_33->rx->limit);
 FUNC_0(&VAR_35, VAR_19,
      VAR_33->rx->desc_size / 4);
 FUNC_0(&VAR_35, VAR_20, 4);
 FUNC_2(VAR_33, VAR_17, VAR_35);

 VAR_34 = VAR_33->rx->entries[0].priv_data;
 FUNC_1(VAR_33, VAR_13, &VAR_35);
 FUNC_0(&VAR_35, VAR_14,
      VAR_34->desc_dma);
 FUNC_2(VAR_33, VAR_13, VAR_35);

 FUNC_1(VAR_33, VAR_21, &VAR_35);
 FUNC_0(&VAR_35, VAR_22, 2);
 FUNC_0(&VAR_35, VAR_23, 2);
 FUNC_0(&VAR_35, VAR_24, 2);
 FUNC_0(&VAR_35, VAR_25, 2);
 FUNC_2(VAR_33, VAR_21, VAR_35);

 FUNC_1(VAR_33, VAR_8, &VAR_35);
 FUNC_0(&VAR_35, VAR_9, 1);
 FUNC_0(&VAR_35, VAR_10, 1);
 FUNC_0(&VAR_35, VAR_11, 1);
 FUNC_0(&VAR_35, VAR_12, 1);
 FUNC_2(VAR_33, VAR_8, VAR_35);

 FUNC_1(VAR_33, VAR_15, &VAR_35);
 FUNC_0(&VAR_35, VAR_16, 1);
 FUNC_2(VAR_33, VAR_15, VAR_35);

 return 0;
}
