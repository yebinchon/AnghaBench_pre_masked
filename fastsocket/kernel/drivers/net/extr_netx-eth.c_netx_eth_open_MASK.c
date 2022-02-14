
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netx_eth_priv {int mii; scalar_t__ xpec_base; } ;
struct net_device {int* dev_addr; int name; int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *,int ,int) ;
 struct netx_eth_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct netx_eth_priv*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int ,int *,int ,int ,struct net_device*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_12)
{
 struct netx_eth_priv *VAR_13 = FUNC_1(VAR_12);

 if (FUNC_4
     (VAR_12->irq, &VAR_11, VAR_4, VAR_12->name, VAR_12))
  return -VAR_0;

 FUNC_5(VAR_12->dev_addr[0] |
        VAR_12->dev_addr[1]<<8 |
        VAR_12->dev_addr[2]<<16 |
        VAR_12->dev_addr[3]<<24,
        VAR_13->xpec_base + VAR_10 + VAR_1);
 FUNC_5(VAR_12->dev_addr[4] |
        VAR_12->dev_addr[5]<<8,
        VAR_13->xpec_base + VAR_10 + VAR_2);

 FUNC_5(VAR_9 |
  VAR_6 |
  VAR_5 |
  VAR_8 |
  VAR_7,
  VAR_13->xpec_base + VAR_10 +
  VAR_3);

 FUNC_0(&VAR_13->mii, FUNC_2(VAR_13), 1);
 FUNC_3(VAR_12);

 return 0;
}
