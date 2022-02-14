
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {char cap_nr; unsigned int size; } ;
struct pci_cap_saved_state {TYPE_1__ cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_cap_saved_state* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pci_dev*,struct pci_cap_saved_state*) ;
 int FUNC_2 (struct pci_dev*,char) ;

__attribute__((used)) static int FUNC_3(
 struct pci_dev *VAR_2, char VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 struct pci_cap_saved_state *VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5 <= 0)
  return 0;

 VAR_6 = FUNC_0(sizeof(*VAR_6) + VAR_4, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->cap.cap_nr = VAR_3;
 VAR_6->cap.size = VAR_4;
 FUNC_1(VAR_2, VAR_6);

 return 0;
}
