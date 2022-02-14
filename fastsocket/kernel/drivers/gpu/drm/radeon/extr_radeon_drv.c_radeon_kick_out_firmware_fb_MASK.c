
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {TYPE_1__* resource; } ;
struct apertures_struct {TYPE_2__* ranges; } ;
struct TYPE_4__ {int size; int base; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct apertures_struct* FUNC_0 (int) ;
 int FUNC_1 (struct apertures_struct*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct apertures_struct*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_3)
{
 struct apertures_struct *VAR_4;
 bool VAR_5 = 0;

 VAR_4 = FUNC_0(1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->ranges[0].base = FUNC_3(VAR_3, 0);
 VAR_4->ranges[0].size = FUNC_2(VAR_3, 0);




 FUNC_4(VAR_4, "radeondrmfb", VAR_5);
 FUNC_1(VAR_4);

 return 0;
}
