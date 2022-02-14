
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mem_ctl_info {int dev; } ;
struct i82860_error_info {int errsts; int derrsyn; int errsts2; int eap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mem_ctl_info *VAR_3,
    struct i82860_error_info *VAR_4)
{
 struct pci_dev *VAR_5;

 VAR_5 = FUNC_3(VAR_3->dev);






 FUNC_1(VAR_5, VAR_2, &VAR_4->errsts);
 FUNC_0(VAR_5, VAR_1, &VAR_4->eap);
 FUNC_1(VAR_5, VAR_0, &VAR_4->derrsyn);
 FUNC_1(VAR_5, VAR_2, &VAR_4->errsts2);

 FUNC_2(VAR_5, VAR_2, 0x0003, 0x0003);






 if (!(VAR_4->errsts2 & 0x0003))
  return;

 if ((VAR_4->errsts ^ VAR_4->errsts2) & 0x0003) {
  FUNC_0(VAR_5, VAR_1, &VAR_4->eap);
  FUNC_1(VAR_5, VAR_0, &VAR_4->derrsyn);
 }
}
