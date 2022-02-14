
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {TYPE_2__* vpd; } ;
struct TYPE_4__ {size_t len; TYPE_1__* attr; } ;
struct TYPE_3__ {size_t size; } ;


 int VAR_0 ;

int FUNC_0(struct pci_dev *VAR_1, size_t VAR_2)
{
 if (!VAR_1->vpd)
  return -VAR_0;


 if (VAR_2 > VAR_1->vpd->len)
  return -VAR_0;

 VAR_1->vpd->len = VAR_2;
 if (VAR_1->vpd->attr)
  VAR_1->vpd->attr->size = VAR_2;

 return 0;
}
