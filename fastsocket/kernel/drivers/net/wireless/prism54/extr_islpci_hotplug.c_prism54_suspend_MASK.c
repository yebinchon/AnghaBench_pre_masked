
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
typedef int pm_message_t ;
struct TYPE_4__ {int device_base; } ;
typedef TYPE_1__ islpci_private ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static int
FUNC_8(struct pci_dev *VAR_1, pm_message_t VAR_2)
{
 struct net_device *VAR_3 = FUNC_6(VAR_1);
 islpci_private *VAR_4 = VAR_3 ? FUNC_3(VAR_3) : ((void*)0);
 FUNC_0(!VAR_4);


 FUNC_7(VAR_1);


 FUNC_1(VAR_4->device_base);



 FUNC_2(VAR_4, VAR_0);

 FUNC_5(VAR_3);
 FUNC_4(VAR_3);

 return 0;
}
