
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dscc4_dev_priv {scalar_t__ tx_current; scalar_t__ tx_dirty; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct dscc4_dev_priv *VAR_0)
{
 return VAR_0->tx_current == VAR_0->tx_dirty;
}
