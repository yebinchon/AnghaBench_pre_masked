
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dscc4_dev_priv {int dev_id; scalar_t__ ltda; scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct dscc4_dev_priv *VAR_1,
           struct net_device *VAR_2)
{
 return FUNC_0(VAR_1->base_addr + VAR_0 + VAR_1->dev_id*4) == VAR_1->ltda;
}
