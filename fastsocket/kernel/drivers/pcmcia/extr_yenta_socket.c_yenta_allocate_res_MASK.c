
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct yenta_socket {struct pci_dev* dev; } ;
struct resource {unsigned int flags; unsigned int start; unsigned int end; int name; scalar_t__ parent; } ;
struct pci_dev {int dev; TYPE_1__* subordinate; struct resource* resource; } ;
struct pci_bus_region {unsigned int start; unsigned int end; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (struct yenta_socket*,int) ;
 int FUNC_1 (int ,int *,char*,unsigned int) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*,struct resource*,struct pci_bus_region*) ;
 scalar_t__ FUNC_4 (struct yenta_socket*,struct resource*,int ) ;

__attribute__((used)) static int FUNC_5(struct yenta_socket *VAR_12, int VAR_13, unsigned VAR_14, int VAR_15, int VAR_16)
{
 struct pci_dev *VAR_17 = VAR_12->dev;
 struct resource *VAR_18;
 struct pci_bus_region VAR_19;
 unsigned VAR_20;

 VAR_18 = VAR_17->resource + VAR_10 + VAR_13;

 if (VAR_18->parent)
  return 0;


 VAR_20 = ~0xfff;
 if (VAR_14 & VAR_6)
  VAR_20 = ~3;

 VAR_18->name = VAR_17->subordinate->name;
 VAR_18->flags = VAR_14;

 VAR_19.start = FUNC_0(VAR_12, VAR_15) & VAR_20;
 VAR_19.end = FUNC_0(VAR_12, VAR_16) | ~VAR_20;
 if (VAR_19.start && VAR_19.end > VAR_19.start && !VAR_11) {
  FUNC_3(VAR_17, VAR_18, &VAR_19);
  if (FUNC_2(VAR_17, VAR_10 + VAR_13) == 0)
   return 0;
  FUNC_1(VAR_9, &VAR_17->dev,
      "Preassigned resource %d busy or not available, "
      "reconfiguring...\n",
      VAR_13);
 }

 if (VAR_14 & VAR_6) {
  if ((FUNC_4(VAR_12, VAR_18, VAR_1)) ||
      (FUNC_4(VAR_12, VAR_18, VAR_0)) ||
      (FUNC_4(VAR_12, VAR_18, VAR_2)))
   return 1;
 } else {
  if (VAR_14 & VAR_8) {
   if ((FUNC_4(VAR_12, VAR_18, VAR_4)) ||
       (FUNC_4(VAR_12, VAR_18, VAR_3)) ||
       (FUNC_4(VAR_12, VAR_18, VAR_5)))
    return 1;

   VAR_18->flags = VAR_7;
  }
  if ((FUNC_4(VAR_12, VAR_18, VAR_4)) ||
      (FUNC_4(VAR_12, VAR_18, VAR_3)) ||
      (FUNC_4(VAR_12, VAR_18, VAR_5)))
   return 1;
 }

 FUNC_1(VAR_9, &VAR_17->dev,
     "no resource of type %x available, trying to continue...\n",
     VAR_14);
 VAR_18->start = VAR_18->end = VAR_18->flags = 0;
 return 0;
}
