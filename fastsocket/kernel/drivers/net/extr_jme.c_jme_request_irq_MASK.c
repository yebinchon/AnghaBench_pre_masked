
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int irq; int name; } ;
struct jme_adapter {TYPE_1__* pdev; int flags; struct net_device* dev; } ;
typedef int irq_handler_t ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*,char*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int,int ,struct net_device*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int
FUNC_7(struct jme_adapter *VAR_4)
{
 int VAR_5;
 struct net_device *VAR_6 = VAR_4->dev;
 irq_handler_t VAR_7 = VAR_2;
 int VAR_8 = VAR_0;

 if (!FUNC_3(VAR_4->pdev)) {
  FUNC_5(VAR_1, &VAR_4->flags);
  VAR_7 = VAR_3;
  VAR_8 = 0;
 }

 VAR_5 = FUNC_4(VAR_4->pdev->irq, VAR_7, VAR_8, VAR_6->name,
     VAR_6);
 if (VAR_5) {
  FUNC_1(VAR_4->pdev,
   "Unable to request %s interrupt (return: %d)\n",
   FUNC_6(VAR_1, &VAR_4->flags) ? "MSI" : "INTx",
   VAR_5);

  if (FUNC_6(VAR_1, &VAR_4->flags)) {
   FUNC_2(VAR_4->pdev);
   FUNC_0(VAR_1, &VAR_4->flags);
  }
 } else {
  VAR_6->irq = VAR_4->pdev->irq;
 }

 return VAR_5;
}
