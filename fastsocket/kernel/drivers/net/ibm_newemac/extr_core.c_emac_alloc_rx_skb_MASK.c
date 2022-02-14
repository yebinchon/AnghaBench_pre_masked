
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct emac_instance {TYPE_2__* rx_desc; int rx_sync_size; TYPE_1__* ofdev; struct sk_buff** rx_skb; int rx_skb_size; } ;
typedef int gfp_t ;
struct TYPE_4__ {int ctrl; scalar_t__ data_ptr; scalar_t__ data_len; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;

__attribute__((used)) static inline int FUNC_5(struct emac_instance *VAR_6, int VAR_7,
        gfp_t VAR_8)
{
 struct sk_buff *VAR_9 = FUNC_0(VAR_6->rx_skb_size, VAR_8);
 if (FUNC_3(!VAR_9))
  return -VAR_2;

 VAR_6->rx_skb[VAR_7] = VAR_9;
 VAR_6->rx_desc[VAR_7].data_len = 0;

 FUNC_2(VAR_9, VAR_1 + 2);
 VAR_6->rx_desc[VAR_7].data_ptr =
     FUNC_1(&VAR_6->ofdev->dev, VAR_9->data - 2, VAR_6->rx_sync_size,
      VAR_0) + 2;
 FUNC_4();
 VAR_6->rx_desc[VAR_7].ctrl = VAR_3 |
     (VAR_7 == (VAR_5 - 1) ? VAR_4 : 0);

 return 0;
}
