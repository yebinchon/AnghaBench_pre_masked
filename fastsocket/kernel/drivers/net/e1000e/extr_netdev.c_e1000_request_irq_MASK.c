
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct e1000_adapter {int flags; TYPE_1__* pdev; int int_mode; scalar_t__ msix_entries; struct net_device* netdev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct e1000_adapter *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->netdev;
 int VAR_8;

 if (VAR_6->msix_entries) {
  VAR_8 = FUNC_0(VAR_6);
  if (!VAR_8)
   return VAR_8;

  FUNC_1(VAR_6);
  VAR_6->int_mode = VAR_1;
  FUNC_2(VAR_6);
 }
 if (VAR_6->flags & VAR_2) {
  VAR_8 = FUNC_4(VAR_6->pdev->irq, VAR_5, 0,
      VAR_7->name, VAR_7);
  if (!VAR_8)
   return VAR_8;


  FUNC_1(VAR_6);
  VAR_6->int_mode = VAR_0;
 }

 VAR_8 = FUNC_4(VAR_6->pdev->irq, VAR_4, VAR_3,
     VAR_7->name, VAR_7);
 if (VAR_8)
  FUNC_3("Unable to allocate interrupt, Error: %d\n", VAR_8);

 return VAR_8;
}
