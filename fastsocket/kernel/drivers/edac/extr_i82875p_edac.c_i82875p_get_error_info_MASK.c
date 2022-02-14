
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mem_ctl_info {int dev; } ;
struct i82875p_error_info {int errsts; int errsts2; int derrsyn; int des; int eap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 int FUNC_1 (struct pci_dev*,int ,int *) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_4,
    struct i82875p_error_info *VAR_5)
{
 struct pci_dev *VAR_6;

 VAR_6 = FUNC_4(VAR_4->dev);






 FUNC_2(VAR_6, VAR_3, &VAR_5->errsts);

 if (!(VAR_5->errsts & 0x0081))
  return;

 FUNC_1(VAR_6, VAR_2, &VAR_5->eap);
 FUNC_0(VAR_6, VAR_1, &VAR_5->des);
 FUNC_0(VAR_6, VAR_0, &VAR_5->derrsyn);
 FUNC_2(VAR_6, VAR_3, &VAR_5->errsts2);







 if ((VAR_5->errsts ^ VAR_5->errsts2) & 0x0081) {
  FUNC_1(VAR_6, VAR_2, &VAR_5->eap);
  FUNC_0(VAR_6, VAR_1, &VAR_5->des);
  FUNC_0(VAR_6, VAR_0, &VAR_5->derrsyn);
 }

 FUNC_3(VAR_6, VAR_3, 0x0081, 0x0081);
}
