
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct ipoib_tx_buf {int * mapping; struct sk_buff* skb; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int size; } ;
typedef TYPE_1__ skb_frag_t ;
struct TYPE_4__ {int nr_frags; TYPE_1__* frags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,int ,int ) ;
 int FUNC_1 (struct ib_device*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct ib_device *VAR_1,
          struct ipoib_tx_buf *VAR_2)
{
 struct sk_buff *VAR_3 = VAR_2->skb;
 u64 *VAR_4 = VAR_2->mapping;
 int VAR_5;
 int VAR_6;

 if (FUNC_2(VAR_3)) {
  FUNC_1(VAR_1, VAR_4[0], FUNC_2(VAR_3), VAR_0);
  VAR_6 = 1;
 } else
  VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_3)->nr_frags; ++VAR_5) {
  skb_frag_t *VAR_7 = &FUNC_3(VAR_3)->frags[VAR_5];
  FUNC_0(VAR_1, VAR_4[VAR_5 + VAR_6], VAR_7->size,
      VAR_0);
 }
}
