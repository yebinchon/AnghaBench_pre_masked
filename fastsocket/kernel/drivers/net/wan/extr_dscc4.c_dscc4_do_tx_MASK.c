
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dscc4_dev_priv {int tx_current; int dev_id; scalar_t__ base_addr; scalar_t__ ltda; scalar_t__ tx_fd_dma; } ;
struct TxFD {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct dscc4_dev_priv *VAR_2,
          struct net_device *VAR_3)
{
 VAR_2->ltda = VAR_2->tx_fd_dma +
                      ((VAR_2->tx_current-1)%VAR_1)*sizeof(struct TxFD);
 FUNC_1(VAR_2->ltda, VAR_2->base_addr + VAR_0 + VAR_2->dev_id*4);

 FUNC_0(VAR_2->base_addr + VAR_0 + VAR_2->dev_id*4);
}
