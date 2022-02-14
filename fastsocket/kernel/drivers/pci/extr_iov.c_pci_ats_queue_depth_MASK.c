
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {TYPE_1__* ats; scalar_t__ is_virtfn; } ;
struct TYPE_2__ {int qdep; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int *) ;

int FUNC_3(struct pci_dev *VAR_4)
{
 int VAR_5;
 u16 VAR_6;

 if (VAR_4->is_virtfn)
  return 0;

 if (VAR_4->ats)
  return VAR_4->ats->qdep;

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(VAR_4, VAR_5 + VAR_1, &VAR_6);

 return FUNC_0(VAR_6) ? FUNC_0(VAR_6) :
           VAR_2;
}
