
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct pci_bus {int number; } ;
struct TYPE_2__ {int notifier_call; } ;
struct acpiphp_slot {int function; int flags; int device; unsigned long long sun; struct acpiphp_slot* next; TYPE_1__ nb; int funcs; int sibling; struct acpiphp_slot* slot; int crit_sect; struct acpiphp_bridge* bridge; int handle; } ;
struct acpiphp_func {int function; int flags; int device; unsigned long long sun; struct acpiphp_func* next; TYPE_1__ nb; int funcs; int sibling; struct acpiphp_func* slot; int crit_sect; struct acpiphp_bridge* bridge; int handle; } ;
struct acpiphp_bridge {int nr_slots; struct acpiphp_slot* slots; struct pci_bus* pci_bus; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
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
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,char*,int *,unsigned long long*) ;
 int FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (int ,int ,int ,struct acpiphp_slot*) ;
 int FUNC_7 (struct pci_bus*,int ) ;
 int VAR_12 ;
 int FUNC_8 (struct acpiphp_slot*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*) ;
 int VAR_13 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct acpiphp_slot*) ;
 struct acpiphp_slot* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_bus*) ;
 struct pci_dev* FUNC_18 (struct pci_bus*,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 scalar_t__ FUNC_20 (int ,int *,struct acpiphp_slot*) ;
 int FUNC_21 (char*,...) ;

__attribute__((used)) static acpi_status
FUNC_22(acpi_handle VAR_15, u32 VAR_16, void *VAR_17, void **VAR_18)
{
 struct acpiphp_bridge *VAR_19 = (struct acpiphp_bridge *)VAR_17;
 struct acpiphp_slot *VAR_20;
 struct acpiphp_func *VAR_21;
 acpi_handle VAR_22;
 acpi_status VAR_23 = VAR_2;
 unsigned long long VAR_24, VAR_25;
 int VAR_26, VAR_27, VAR_28;
 struct pci_bus *VAR_29 = VAR_19->pci_bus;
 struct pci_dev *VAR_30;

 if (!FUNC_7(VAR_29, VAR_15) && !FUNC_11(VAR_15))
  return VAR_2;

 FUNC_4(VAR_15, "_ADR", ((void*)0), &VAR_24);
 VAR_26 = (VAR_24 >> 16) & 0xffff;
 VAR_27 = VAR_24 & 0xffff;

 VAR_21 = FUNC_13(sizeof(struct acpiphp_func), VAR_9);
 if (!VAR_21)
  return VAR_1;

 FUNC_2(&VAR_21->sibling);
 VAR_21->handle = VAR_15;
 VAR_21->function = VAR_27;

 if (FUNC_1(FUNC_5(VAR_15, "_EJ0", &VAR_22)))
  VAR_21->flags = VAR_5;

 if (FUNC_1(FUNC_5(VAR_15, "_STA", &VAR_22)))
  VAR_21->flags |= VAR_8;

 if (FUNC_1(FUNC_5(VAR_15, "_PS0", &VAR_22)))
  VAR_21->flags |= VAR_6;

 if (FUNC_1(FUNC_5(VAR_15, "_PS3", &VAR_22)))
  VAR_21->flags |= VAR_7;

 if (FUNC_1(FUNC_5(VAR_15, "_DCK", &VAR_22)))
  VAR_21->flags |= VAR_4;

 VAR_23 = FUNC_4(VAR_15, "_SUN", ((void*)0), &VAR_25);
 if (FUNC_0(VAR_23)) {




  VAR_25 = VAR_19->nr_slots+1;
 }


 for (VAR_20 = VAR_19->slots; VAR_20; VAR_20 = VAR_20->next)
  if (VAR_20->device == VAR_26) {
   if (VAR_20->sun != VAR_25)
    FUNC_21("sibling found, but _SUN doesn't match!\n");
   break;
  }

 if (!VAR_20) {
  VAR_20 = FUNC_13(sizeof(struct acpiphp_slot), VAR_9);
  if (!VAR_20) {
   FUNC_12(VAR_21);
   return VAR_1;
  }

  VAR_20->bridge = VAR_19;
  VAR_20->device = VAR_26;
  VAR_20->sun = VAR_25;
  FUNC_2(&VAR_20->funcs);
  FUNC_15(&VAR_20->crit_sect);

  VAR_20->next = VAR_19->slots;
  VAR_19->slots = VAR_20;

  VAR_19->nr_slots++;

  FUNC_9("found ACPI PCI Hotplug slot %llu at PCI %04x:%02x:%02x\n",
      VAR_20->sun, FUNC_17(VAR_29), VAR_29->number, VAR_26);
  VAR_28 = FUNC_8(VAR_20);
  if (VAR_28) {
   if (VAR_28 == -VAR_3)
    FUNC_21("Slot %llu already registered by another "
     "hotplug driver\n", VAR_20->sun);
   else
    FUNC_21("acpiphp_register_hotplug_slot failed "
     "(err code = 0x%x)\n", VAR_28);
   goto err_exit;
  }
 }

 VAR_21->slot = VAR_20;
 FUNC_14(&VAR_21->sibling, &VAR_20->funcs);

 VAR_30 = FUNC_18(VAR_29, FUNC_3(VAR_26, VAR_27));
 if (VAR_30) {
  VAR_20->flags |= (VAR_10 | VAR_11);
  FUNC_16(VAR_30);
 }

 if (FUNC_11(VAR_15)) {




  VAR_21->flags &= ~VAR_5;
  if (FUNC_20(VAR_15,
   &VAR_12, VAR_21))
   FUNC_9("failed to register dock device\n");





  VAR_21->nb.notifier_call = VAR_14;
  if (FUNC_19(&VAR_21->nb))
   FUNC_9("failed to register a dock notifier");
 }


 if (!(VAR_21->flags & VAR_4)) {
  VAR_23 = FUNC_6(VAR_15,
          VAR_0,
          VAR_13,
          VAR_21);

  if (FUNC_0(VAR_23))
   FUNC_10("failed to register interrupt notify handler\n");
 } else
  VAR_23 = VAR_2;

 return VAR_23;

 err_exit:
 VAR_19->nr_slots--;
 VAR_19->slots = VAR_20->next;
 FUNC_12(VAR_20);
 FUNC_12(VAR_21);

 return VAR_2;
}
