
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_phy {int (* mdio_read ) (int ,int,int) ;int dev; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct mii_phy* VAR_0, int VAR_1, int VAR_2)
{
 return VAR_0->mdio_read(VAR_0->dev, VAR_1, VAR_2);
}
