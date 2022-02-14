
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ipath_devdata {int ipath_unit; int ipath_list; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_1 ;
 int FUNC_5 (struct ipath_devdata*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_2,
          struct ipath_devdata *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(VAR_2, ((void*)0));

 if (VAR_3->ipath_unit != -1) {
  FUNC_3(&VAR_0, VAR_4);
  FUNC_0(&VAR_1, VAR_3->ipath_unit);
  FUNC_1(&VAR_3->ipath_list);
  FUNC_4(&VAR_0, VAR_4);
 }
 FUNC_5(VAR_3);
}
