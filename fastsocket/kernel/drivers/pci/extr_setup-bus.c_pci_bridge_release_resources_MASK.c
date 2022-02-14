
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned long flags; scalar_t__ start; scalar_t__ end; int parent; } ;
struct pci_dev {int dev; struct resource* resource; } ;
struct pci_bus {struct pci_dev* self; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_bus*,unsigned long) ;
 int FUNC_1 (int ,int *,char*,int,struct resource*) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (struct resource*) ;

__attribute__((used)) static void FUNC_4(struct pci_bus *VAR_6,
       unsigned long VAR_7)
{
 int VAR_8;
 bool VAR_9 = 0;
 struct pci_dev *VAR_10;
 struct resource *VAR_11;
 unsigned long VAR_12 = VAR_0 | VAR_1 |
      VAR_2;

 VAR_10 = VAR_6->self;
 for (VAR_8 = VAR_4; VAR_8 < VAR_5;
      VAR_8++) {
  VAR_11 = &VAR_10->resource[VAR_8];
  if ((VAR_11->flags & VAR_12) != VAR_7)
   continue;
  if (!VAR_11->parent)
   continue;




  FUNC_2(VAR_11);
  if (!FUNC_3(VAR_11)) {
   FUNC_1(VAR_3, &VAR_10->dev,
     "resource %d %pR released\n", VAR_8, VAR_11);

   VAR_11->end = VAR_11->end - VAR_11->start;
   VAR_11->start = 0;
   VAR_11->flags = 0;
   VAR_9 = 1;
  }
 }

 if (VAR_9) {

  if (VAR_7 & VAR_2)
   VAR_7 = VAR_2;
  FUNC_0(VAR_6, VAR_7);
 }
}
