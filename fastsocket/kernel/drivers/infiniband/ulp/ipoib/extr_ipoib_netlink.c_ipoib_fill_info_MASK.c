
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ipoib_dev_priv {int flags; int pkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ipoib_dev_priv* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_6, const struct net_device *VAR_7)
{
 struct ipoib_dev_priv *VAR_8 = FUNC_0(VAR_7);
 u16 VAR_9;

 if (FUNC_1(VAR_6, VAR_2, VAR_8->pkey))
  goto nla_put_failure;

 VAR_9 = FUNC_2(VAR_4, &VAR_8->flags);
 if (FUNC_1(VAR_6, VAR_1, VAR_9))
  goto nla_put_failure;

 VAR_9 = FUNC_2(VAR_5, &VAR_8->flags);
 if (FUNC_1(VAR_6, VAR_3, VAR_9))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -VAR_0;
}
