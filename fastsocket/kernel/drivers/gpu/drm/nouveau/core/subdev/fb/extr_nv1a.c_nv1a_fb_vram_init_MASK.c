
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int size; int type; } ;
struct nouveau_fb {TYPE_1__ ram; } ;
struct TYPE_4__ {int chipset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 TYPE_2__* FUNC_1 (struct nouveau_fb*) ;
 int FUNC_2 (struct nouveau_fb*,char*) ;
 struct pci_dev* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_fb *VAR_2)
{
 struct pci_dev *VAR_3;
 u32 VAR_4, VAR_5;

 VAR_3 = FUNC_3(0, FUNC_0(0, 1));
 if (!VAR_3) {
  FUNC_2(VAR_2, "no bridge device\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_2)->chipset == 0x1a) {
  FUNC_4(VAR_3, 0x7c, &VAR_4);
  VAR_5 = ((VAR_4 >> 6) & 31) + 1;
 } else {
  FUNC_4(VAR_3, 0x84, &VAR_4);
  VAR_5 = ((VAR_4 >> 4) & 127) + 1;
 }

 VAR_2->ram.type = VAR_1;
 VAR_2->ram.size = VAR_5 * 1024 * 1024;
 return 0;
}
