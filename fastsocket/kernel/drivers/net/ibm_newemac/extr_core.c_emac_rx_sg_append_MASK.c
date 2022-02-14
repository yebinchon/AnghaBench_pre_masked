
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int rx_dropped_mtu; } ;
struct emac_instance {int rx_skb_size; TYPE_4__* rx_sg_skb; TYPE_3__** rx_skb; TYPE_2__ estats; TYPE_1__* rx_desc; } ;
struct TYPE_10__ {int len; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_7__ {int data_len; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct emac_instance*,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline int FUNC_7(struct emac_instance *VAR_0, int VAR_1)
{
 if (FUNC_3(VAR_0->rx_sg_skb != ((void*)0))) {
  int VAR_2 = VAR_0->rx_desc[VAR_1].data_len;
  int VAR_3 = VAR_0->rx_sg_skb->len + VAR_2;

  if (FUNC_6(VAR_3 + 2 > VAR_0->rx_skb_size)) {
   ++VAR_0->estats.rx_dropped_mtu;
   FUNC_1(VAR_0->rx_sg_skb);
   VAR_0->rx_sg_skb = ((void*)0);
  } else {
   FUNC_0(FUNC_5(VAR_0->rx_sg_skb),
      VAR_0->rx_skb[VAR_1]->data, VAR_2);
   FUNC_4(VAR_0->rx_sg_skb, VAR_2);
   FUNC_2(VAR_0, VAR_1, VAR_2);
   return 0;
  }
 }
 FUNC_2(VAR_0, VAR_1, 0);
 return -1;
}
