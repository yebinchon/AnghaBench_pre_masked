
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct jsm_board {int dummy; } ;
typedef int pci_ers_result_t ;
typedef int pci_channel_state_t ;


 int VAR_0 ;
 int FUNC_0 (struct jsm_board*) ;
 struct jsm_board* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_2(struct pci_dev *VAR_1,
     pci_channel_state_t VAR_2)
{
 struct jsm_board *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3);

 return VAR_0;
}
