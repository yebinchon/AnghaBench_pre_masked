
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ipg_timer; } ;
struct amd8111e_priv {int options; int lock; TYPE_1__ ipg_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct amd8111e_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_6)
{
 struct net_device *VAR_7 = FUNC_6(VAR_6);
 struct amd8111e_priv *VAR_8 = FUNC_2(VAR_7);

 if (!FUNC_4(VAR_7))
  return 0;

 FUNC_8(VAR_6, VAR_2);
 FUNC_7(VAR_6);

 FUNC_5(VAR_6, VAR_4, 0);
 FUNC_5(VAR_6, VAR_3, 0);

 FUNC_3(VAR_7);

 FUNC_9(&VAR_8->lock);
 FUNC_0(VAR_7);

 if(VAR_8->options & VAR_1)
  FUNC_1(&VAR_8->ipg_data.ipg_timer,
    VAR_5 + VAR_0);
 FUNC_10(&VAR_8->lock);

 return 0;
}
