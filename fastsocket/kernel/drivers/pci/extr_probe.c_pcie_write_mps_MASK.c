
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ self; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_2 == VAR_0) {
  VAR_4 = 128 << FUNC_5(VAR_3);

  if (FUNC_2(VAR_3) != VAR_1 &&
      VAR_3->bus->self)
   VAR_4 = FUNC_1(VAR_4, FUNC_3(VAR_3->bus->self));
 }

 VAR_5 = FUNC_4(VAR_3, VAR_4);
 if (VAR_5)
  FUNC_0(&VAR_3->dev, "Failed attempting to set the MPS\n");
}
