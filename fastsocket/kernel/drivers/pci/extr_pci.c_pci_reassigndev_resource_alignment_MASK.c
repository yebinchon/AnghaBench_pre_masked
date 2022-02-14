
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct resource {int flags; scalar_t__ start; scalar_t__ end; } ;
struct pci_dev {scalar_t__ hdr_type; int class; struct resource* resource; int dev; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ,int *) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ,int ) ;
 scalar_t__ FUNC_7 (struct resource*) ;

void FUNC_8(struct pci_dev *VAR_9)
{
 int VAR_10;
 struct resource *VAR_11;
 resource_size_t VAR_12, VAR_13;
 u16 VAR_14;

 if (!FUNC_3(VAR_9))
  return;

 if (VAR_9->hdr_type == VAR_7 &&
     (VAR_9->class >> 8) == VAR_2) {
  FUNC_1(&VAR_9->dev,
   "Can't reassign resources to host bridge.\n");
  return;
 }

 FUNC_0(&VAR_9->dev,
  "Disabling memory decoding and releasing memory resources.\n");
 FUNC_4(VAR_9, VAR_4, &VAR_14);
 VAR_14 &= ~VAR_5;
 FUNC_6(VAR_9, VAR_4, VAR_14);

 VAR_12 = FUNC_5(VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_11 = &VAR_9->resource[VAR_10];
  if (!(VAR_11->flags & VAR_0))
   continue;
  VAR_13 = FUNC_7(VAR_11);
  if (VAR_13 < VAR_12) {
   VAR_13 = VAR_12;
   FUNC_0(&VAR_9->dev,
    "Rounding up size of resource #%d to %#llx.\n",
    VAR_10, (unsigned long long)VAR_13);
  }
  VAR_11->end = VAR_13 - 1;
  VAR_11->start = 0;
 }




 if (VAR_9->hdr_type == VAR_6 &&
     (VAR_9->class >> 8) == VAR_3) {
  for (VAR_10 = VAR_1; VAR_10 < VAR_8; VAR_10++) {
   VAR_11 = &VAR_9->resource[VAR_10];
   if (!(VAR_11->flags & VAR_0))
    continue;
   VAR_11->end = FUNC_7(VAR_11) - 1;
   VAR_11->start = 0;
  }
  FUNC_2(VAR_9);
 }
}
