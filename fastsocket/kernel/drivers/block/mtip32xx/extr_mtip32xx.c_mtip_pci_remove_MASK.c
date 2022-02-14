
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct driver_data {int remove_list; int dd_flag; int online_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct driver_data*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct driver_data*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct driver_data*) ;
 int FUNC_7 (struct pci_dev*) ;
 struct driver_data* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int) ;
 int VAR_4 ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static void FUNC_14(struct pci_dev *VAR_5)
{
 struct driver_data *VAR_6 = FUNC_8(VAR_5);
 int VAR_7 = 0;
 unsigned long VAR_8;

 FUNC_10(VAR_2, &VAR_6->dd_flag);

 FUNC_11(&VAR_3, VAR_8);
 FUNC_2(&VAR_6->online_list);
 FUNC_1(&VAR_6->remove_list, &VAR_4);
 FUNC_12(&VAR_3, VAR_8);

 if (FUNC_5(VAR_5)) {
  while (!FUNC_13(VAR_1, &VAR_6->dd_flag)) {
   VAR_7++;
   FUNC_3(20);
   if (VAR_7 == 10) {

    FUNC_6(VAR_6);
    break;
   }
  }
 }


 FUNC_4(VAR_6);

 FUNC_7(VAR_5);

 FUNC_11(&VAR_3, VAR_8);
 FUNC_2(&VAR_6->remove_list);
 FUNC_12(&VAR_3, VAR_8);

 FUNC_0(VAR_6);
 FUNC_9(VAR_5, 1 << VAR_0);
}
