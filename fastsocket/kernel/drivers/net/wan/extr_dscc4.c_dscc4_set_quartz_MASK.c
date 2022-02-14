
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dscc4_dev_priv {TYPE_1__* pci_priv; } ;
struct TYPE_2__ {int xtal_hz; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct dscc4_dev_priv *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if ((VAR_3 < 0) || (VAR_3 > VAR_0))
  VAR_4 = -VAR_1;
 else
  VAR_2->pci_priv->xtal_hz = VAR_3;

 return VAR_4;
}
