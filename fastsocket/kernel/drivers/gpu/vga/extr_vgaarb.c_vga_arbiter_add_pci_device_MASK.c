
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vga_device {int decodes; int owns; int locks; int list; struct pci_dev* pdev; } ;
struct pci_dev {int class; struct pci_bus* bus; } ;
struct pci_bus {struct pci_bus* parent; struct pci_dev* self; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct vga_device*) ;
 struct vga_device* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct vga_device*,int ,int) ;
 int * FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,int ,int ,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct vga_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int FUNC_13 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int * FUNC_14 (struct pci_dev*) ;

__attribute__((used)) static bool FUNC_15(struct pci_dev *VAR_17)
{
 struct vga_device *VAR_18;
 unsigned long VAR_19;
 struct pci_bus *VAR_20;
 struct pci_dev *VAR_21;
 u16 VAR_22;


 if ((VAR_17->class >> 8) != VAR_3)
  return 0;


 VAR_18 = FUNC_2(sizeof(struct vga_device), VAR_0);
 if (VAR_18 == ((void*)0)) {
  FUNC_8("vgaarb: failed to allocate pci device\n");




  return 0;
 }

 FUNC_4(VAR_18, 0, sizeof(*VAR_18));


 FUNC_10(&VAR_16, VAR_19);
 if (FUNC_14(VAR_17) != ((void*)0)) {
  FUNC_0(1);
  goto fail;
 }
 VAR_18->pdev = VAR_17;


 VAR_18->decodes = VAR_7 | VAR_9 |
     VAR_10 | VAR_11;


 VAR_13++;



 FUNC_7(VAR_17, VAR_4, &VAR_22);
 if (VAR_22 & VAR_5)
  VAR_18->owns |= VAR_7;
 if (VAR_22 & VAR_6)
  VAR_18->owns |= VAR_9;


 VAR_20 = VAR_17->bus;
 while (VAR_20) {
  VAR_21 = VAR_20->self;
  if (VAR_21) {
   u16 VAR_23;
   FUNC_7(VAR_21, VAR_1,
          &VAR_23);
   if (!(VAR_23 & VAR_2)) {
    VAR_18->owns = 0;
    break;
   }
  }
  VAR_20 = VAR_20->parent;
 }





 if (VAR_14 == ((void*)0) &&
     ((VAR_18->owns & VAR_8) == VAR_8))
  VAR_14 = FUNC_5(VAR_17);


 FUNC_12(VAR_18);


 FUNC_3(&VAR_18->list, &VAR_15);
 VAR_12++;
 FUNC_9("vgaarb: device added: PCI:%s,decodes=%s,owns=%s,locks=%s\n",
  FUNC_6(VAR_17),
  FUNC_13(VAR_18->decodes),
  FUNC_13(VAR_18->owns),
  FUNC_13(VAR_18->locks));

 FUNC_11(&VAR_16, VAR_19);
 return 1;
fail:
 FUNC_11(&VAR_16, VAR_19);
 FUNC_1(VAR_18);
 return 0;
}
