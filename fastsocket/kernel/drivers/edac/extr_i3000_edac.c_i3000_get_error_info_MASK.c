
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mem_ctl_info {int dev; } ;
struct i3000_error_info {int errsts; int errsts2; int derrsyn; int deap; int edeap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 int FUNC_1 (struct pci_dev*,int ,int *) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_5,
     struct i3000_error_info *VAR_6)
{
 struct pci_dev *VAR_7;

 VAR_7 = FUNC_4(VAR_5->dev);






 FUNC_2(VAR_7, VAR_3, &VAR_6->errsts);
 if (!(VAR_6->errsts & VAR_4))
  return;
 FUNC_0(VAR_7, VAR_2, &VAR_6->edeap);
 FUNC_1(VAR_7, VAR_0, &VAR_6->deap);
 FUNC_0(VAR_7, VAR_1, &VAR_6->derrsyn);
 FUNC_2(VAR_7, VAR_3, &VAR_6->errsts2);







 if ((VAR_6->errsts ^ VAR_6->errsts2) & VAR_4) {
  FUNC_0(VAR_7, VAR_2, &VAR_6->edeap);
  FUNC_1(VAR_7, VAR_0, &VAR_6->deap);
  FUNC_0(VAR_7, VAR_1, &VAR_6->derrsyn);
 }





 FUNC_3(VAR_7, VAR_3, VAR_4,
    VAR_4);
}
