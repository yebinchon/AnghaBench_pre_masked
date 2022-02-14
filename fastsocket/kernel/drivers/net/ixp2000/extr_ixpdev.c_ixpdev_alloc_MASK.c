
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int * netdev_ops; } ;
struct ixpdev_priv {int channel; scalar_t__ tx_queue_entries; int napi; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ixpdev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int *,int ,int) ;

struct net_device *FUNC_3(int VAR_4, int VAR_5)
{
 struct net_device *VAR_6;
 struct ixpdev_priv *VAR_7;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->netdev_ops = &VAR_2;

 VAR_6->features |= VAR_1 | VAR_0;

 VAR_7 = FUNC_1(VAR_6);
 VAR_7->dev = VAR_6;
 FUNC_2(VAR_6, &VAR_7->napi, VAR_3, 64);
 VAR_7->channel = VAR_4;
 VAR_7->tx_queue_entries = 0;

 return VAR_6;
}
