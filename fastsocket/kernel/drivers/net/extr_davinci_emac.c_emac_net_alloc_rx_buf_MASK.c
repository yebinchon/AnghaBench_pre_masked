
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {void* data; struct net_device* dev; } ;
struct device {int dummy; } ;
struct net_device {struct device dev; } ;
struct emac_priv {struct net_device* ndev; } ;


 int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (struct emac_priv*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void *FUNC_7(struct emac_priv *VAR_1, int VAR_2,
  void **VAR_3, u32 VAR_4)
{
 struct net_device *VAR_5 = VAR_1->ndev;
 struct device *VAR_6 = &VAR_5->dev;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_1(VAR_2);
 if (FUNC_6(((void*)0) == VAR_7)) {
  if (FUNC_4(VAR_1) && FUNC_3())
   FUNC_2(VAR_6, "DaVinci EMAC: failed to alloc skb");
  return ((void*)0);
 }


 VAR_7->dev = VAR_5;
 FUNC_5(VAR_7, VAR_0);
 *VAR_3 = (void *) VAR_7;
 FUNC_0((unsigned long)VAR_7->data, VAR_2);
 return VAR_7->data;
}
