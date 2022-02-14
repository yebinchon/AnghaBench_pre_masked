
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct pci_dev*,int ,int ) ;
 int FUNC_5 (int) ;

void FUNC_6(struct pci_dev *VAR_5, unsigned long VAR_6)
{



 FUNC_4(VAR_5, VAR_3, VAR_4);






 FUNC_3(VAR_1, VAR_6 + VAR_0);
 FUNC_2();
 FUNC_5(5);
 if (FUNC_1(VAR_6 + VAR_0) & VAR_1)
  FUNC_0(&VAR_5->dev, "HCRESET not completed yet!\n");




 FUNC_3(0, VAR_6 + VAR_2);
 FUNC_3(0, VAR_6 + VAR_0);
}
