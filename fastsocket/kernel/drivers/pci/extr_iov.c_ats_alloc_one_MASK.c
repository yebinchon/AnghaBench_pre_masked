
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {struct pci_ats* ats; } ;
struct pci_ats {int pos; int stu; scalar_t__ qdep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct pci_ats* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_6, int VAR_7)
{
 int VAR_8;
 u16 VAR_9;
 struct pci_ats *VAR_10;

 VAR_8 = FUNC_2(VAR_6, VAR_5);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->pos = VAR_8;
 VAR_10->stu = VAR_7;
 FUNC_3(VAR_6, VAR_8 + VAR_3, &VAR_9);
 VAR_10->qdep = FUNC_0(VAR_9) ? FUNC_0(VAR_9) :
         VAR_4;
 VAR_6->ats = VAR_10;

 return 0;
}
