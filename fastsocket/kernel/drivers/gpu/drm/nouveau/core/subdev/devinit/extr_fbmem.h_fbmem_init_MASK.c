
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct io_mapping {int dummy; } ;


 struct io_mapping* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static inline struct io_mapping *
FUNC_3(struct pci_dev *VAR_0)
{
 return FUNC_0(FUNC_2(VAR_0, 1),
        FUNC_1(VAR_0, 1));
}
