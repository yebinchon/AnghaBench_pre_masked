
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {struct resource_list* next; struct pci_dev* dev; struct resource* res; } ;
struct resource {int flags; scalar_t__ parent; } ;
struct pci_dev {int dev; struct resource* resource; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,struct resource*) ;
 struct resource_list* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct pci_dev*,struct resource*) ;

void FUNC_4(struct pci_dev *VAR_3, struct resource_list *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct resource *VAR_6;
  struct resource_list *VAR_7, *VAR_8;
  resource_size_t VAR_9;

  VAR_6 = &VAR_3->resource[VAR_5];

  if (VAR_6->flags & VAR_1)
   continue;

  if (!(VAR_6->flags) || VAR_6->parent)
   continue;

  VAR_9 = FUNC_3(VAR_3, VAR_6);
  if (!VAR_9) {
   FUNC_0(&VAR_3->dev, "BAR %d: %pR has bogus alignment\n",
     VAR_5, VAR_6);
   continue;
  }
  for (VAR_7 = VAR_4; ; VAR_7 = VAR_7->next) {
   resource_size_t VAR_10 = 0;
   struct resource_list *VAR_11 = VAR_7->next;

   if (VAR_11)
    VAR_10 = FUNC_3(VAR_11->dev, VAR_11->res);

   if (VAR_9 > VAR_10) {
    VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_0);
    if (!VAR_8)
     FUNC_2("pdev_sort_resources(): "
           "kmalloc() failed!\n");
    VAR_8->next = VAR_11;
    VAR_8->res = VAR_6;
    VAR_8->dev = VAR_3;
    VAR_7->next = VAR_8;
    break;
   }
  }
 }
}
