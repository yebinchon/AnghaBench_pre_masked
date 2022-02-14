
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int flags; } ;
struct pci_dev {int dev; struct pci_bus* bus; struct resource* resource; } ;
struct pci_bus {struct pci_bus* parent; TYPE_1__* self; } ;
typedef int resource_size_t ;
struct TYPE_2__ {scalar_t__ transparent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_bus*,struct pci_dev*,int) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct pci_dev*,struct resource*) ;
 scalar_t__ FUNC_3 (struct resource*) ;

int FUNC_4(struct pci_dev *VAR_4, int VAR_5)
{
 struct resource *VAR_6 = VAR_4->resource + VAR_5;
 resource_size_t VAR_7;
 struct pci_bus *VAR_8;
 int VAR_9;
 char *VAR_10;

 VAR_7 = FUNC_2(VAR_4, VAR_6);
 if (!VAR_7) {
  FUNC_1(&VAR_4->dev, "BAR %d: can't assign %pR "
    "(bogus alignment)\n", VAR_5, VAR_6);
  return -VAR_0;
 }

 VAR_8 = VAR_4->bus;
 while ((VAR_9 = FUNC_0(VAR_8, VAR_4, VAR_5))) {
  if (VAR_8->parent && VAR_8->self->transparent)
   VAR_8 = VAR_8->parent;
  else
   VAR_8 = ((void*)0);
  if (VAR_8)
   continue;
  break;
 }

 if (VAR_9) {
  if (VAR_6->flags & VAR_2)
   if (VAR_6->flags & VAR_3)
    VAR_10 = "mem pref";
   else
    VAR_10 = "mem";
  else if (VAR_6->flags & VAR_1)
   VAR_10 = "io";
  else
   VAR_10 = "unknown";
  FUNC_1(&VAR_4->dev,
    "BAR %d: can't assign %s (size %#llx)\n",
    VAR_5, VAR_10, (unsigned long long) FUNC_3(VAR_6));
 }

 return VAR_9;
}
