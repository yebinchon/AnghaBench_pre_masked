
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sja1000_priv {scalar_t__ reg_base; } ;


 int ioread8 (scalar_t__) ;

__attribute__((used)) static u8 kvaser_pci_read_reg(const struct sja1000_priv *priv, int port)
{
 return ioread8(priv->reg_base + port);
}
