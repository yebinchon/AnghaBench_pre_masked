
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int shared_phys; scalar_t__ shared_virt; } ;
struct il_priv {TYPE_2__ _3945; TYPE_1__* pci_dev; } ;
struct il3945_shared {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(struct il_priv *VAR_0)
{
 if (VAR_0->_3945.shared_virt)
  FUNC_0(&VAR_0->pci_dev->dev,
      sizeof(struct il3945_shared),
      VAR_0->_3945.shared_virt, VAR_0->_3945.shared_phys);
}
