
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct p54s_priv {int hw; TYPE_1__* spi; } ;
typedef int rx_head ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (struct p54s_priv*) ;
 int FUNC_6 (struct p54s_priv*,int ,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct p54s_priv*) ;
 scalar_t__* FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct p54s_priv *VAR_4)
{
 struct sk_buff *VAR_5;
 u16 VAR_6;
 u16 VAR_7[2];


 if (FUNC_7(VAR_4) < 0)
  return -VAR_0;





 FUNC_6(VAR_4, VAR_3, VAR_7, sizeof(VAR_7));
 VAR_6 = VAR_7[0];

 if (VAR_6 == 0) {
  FUNC_5(VAR_4);
  FUNC_1(&VAR_4->spi->dev, "rx request of zero bytes\n");
  return 0;
 }





 VAR_5 = FUNC_0(VAR_6 + 4);
 if (!VAR_5) {
  FUNC_5(VAR_4);
  FUNC_1(&VAR_4->spi->dev, "could not alloc skb");
  return -VAR_1;
 }

 if (VAR_6 <= (sizeof(VAR_7)-sizeof(u16))) {
  FUNC_3(FUNC_8(VAR_5, VAR_6), VAR_7 + 1, VAR_6);
 } else {
  FUNC_3(FUNC_8(VAR_5, (sizeof(VAR_7)-sizeof(u16))), VAR_7 + 1, (sizeof(VAR_7)-sizeof(u16)));
  FUNC_6(VAR_4, VAR_3,
    FUNC_8(VAR_5, VAR_6 - (sizeof(VAR_7)-sizeof(u16))),
    VAR_6 - (sizeof(VAR_7)-sizeof(u16)));
 }
 FUNC_5(VAR_4);


 FUNC_8(VAR_5, 4);

 if (FUNC_4(VAR_4->hw, VAR_5) == 0)
  FUNC_2(VAR_5);

 return 0;
}
