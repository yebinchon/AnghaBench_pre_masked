
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int data; } ;
struct page {int dummy; } ;
struct net_device {int dummy; } ;
struct ipoib_dev_priv {int ca; TYPE_1__* rx_ring; int max_ib_mtu; } ;
struct TYPE_2__ {struct sk_buff* skb; int * mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,struct page*,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 struct ipoib_dev_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct sk_buff*,int ,struct page*,int ,int ) ;
 int FUNC_11 (struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_13(struct net_device *VAR_4, int VAR_5)
{
 struct ipoib_dev_priv *VAR_6 = FUNC_9(VAR_4);
 struct sk_buff *VAR_7;
 int VAR_8;
 int VAR_9;
 u64 *VAR_10;

 if (FUNC_8(VAR_6->max_ib_mtu)) {
  VAR_8 = VAR_2;
  VAR_9 = 128;
 } else {
  VAR_8 = FUNC_0(VAR_6->max_ib_mtu);
  VAR_9 = 0;
 }

 VAR_7 = FUNC_2(VAR_8 + VAR_9 + 4);
 if (FUNC_12(!VAR_7))
  return ((void*)0);






 FUNC_11(VAR_7, 4);

 VAR_10 = VAR_6->rx_ring[VAR_5].mapping;
 VAR_10[0] = FUNC_5(VAR_6->ca, VAR_7->data, VAR_8,
           VAR_0);
 if (FUNC_12(FUNC_6(VAR_6->ca, VAR_10[0])))
  goto error;

 if (FUNC_8(VAR_6->max_ib_mtu)) {
  struct page *VAR_11 = FUNC_1(VAR_1);
  if (!VAR_11)
   goto partial_error;
  FUNC_10(VAR_7, 0, VAR_11, 0, VAR_3);
  VAR_10[1] =
   FUNC_4(VAR_6->ca, VAR_11,
     0, VAR_3, VAR_0);
  if (FUNC_12(FUNC_6(VAR_6->ca, VAR_10[1])))
   goto partial_error;
 }

 VAR_6->rx_ring[VAR_5].skb = VAR_7;
 return VAR_7;

partial_error:
 FUNC_7(VAR_6->ca, VAR_10[0], VAR_8, VAR_0);
error:
 FUNC_3(VAR_7);
 return ((void*)0);
}
