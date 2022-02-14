
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {struct bin_attribute** res_attr_wc; struct bin_attribute** res_attr; TYPE_1__* resource; struct pci_controller* sysdata; } ;
struct pci_controller {unsigned long sparse_mem_base; unsigned long dense_mem_base; unsigned long sparse_io_base; unsigned long dense_io_base; } ;
struct bin_attribute {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bin_attribute* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pci_dev*,int,char*,char*,struct bin_attribute*,unsigned long) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_3, int VAR_4)
{

 int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 1;
 unsigned long VAR_9, VAR_10;
 struct bin_attribute *VAR_11;
 struct pci_controller *VAR_12 = VAR_3->sysdata;
 char *VAR_13, *VAR_14;

 VAR_13 = "";
 VAR_6 = 10;

 if (VAR_3->resource[VAR_4].flags & VAR_2) {
  VAR_9 = VAR_12->sparse_mem_base;
  VAR_10 = VAR_12->dense_mem_base;
  if (VAR_9 && !FUNC_2(VAR_3, VAR_4)) {
   VAR_9 = 0;
   VAR_13 = "_dense";
   VAR_6 = 16;
  }
 } else {
  VAR_9 = VAR_12->sparse_io_base;
  VAR_10 = VAR_12->dense_io_base;
 }

 if (VAR_9) {
  VAR_13 = "_sparse";
  VAR_6 = 17;
  if (VAR_10) {
   VAR_7 = 16;
   VAR_8 = 2;
  }
 }

 VAR_11 = FUNC_0(sizeof(*VAR_11) * VAR_8 + VAR_6 + VAR_7, VAR_1);
 if (!VAR_11)
  return -VAR_0;


 VAR_14 = (char *)(VAR_11 + VAR_8);
 VAR_3->res_attr[VAR_4] = VAR_11;
 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_14, VAR_13, VAR_11,
         VAR_9);
 if (VAR_5 || VAR_8 == 1)
  return VAR_5;


 VAR_14 += VAR_6;
 VAR_11++;
 VAR_3->res_attr_wc[VAR_4] = VAR_11;
 return FUNC_1(VAR_3, VAR_4, VAR_14, "_dense", VAR_11, 0);
}
