
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int enable_cnt; TYPE_1__* resource; } ;
typedef int resource_size_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1,
         resource_size_t VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5 = 0;

 if (FUNC_0(1, &VAR_1->enable_cnt) > 1)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_1->resource[VAR_4].flags & VAR_2)
   VAR_5 |= (1 << VAR_4);

 VAR_3 = FUNC_2(VAR_1, VAR_5);
 if (VAR_3 < 0)
  FUNC_1(&VAR_1->enable_cnt);
 return VAR_3;
}
