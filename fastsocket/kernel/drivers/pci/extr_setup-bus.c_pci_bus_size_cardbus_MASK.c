
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct resource {int end; int flags; scalar_t__ start; } ;
struct pci_dev {struct resource* resource; } ;
struct pci_bus {struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct pci_bus *VAR_9)
{
 struct pci_dev *VAR_10 = VAR_9->self;
 struct resource *VAR_11 = &VAR_10->resource[VAR_4];
 u16 VAR_12;





 VAR_11[0].start = 0;
 VAR_11[0].end = VAR_7 - 1;
 VAR_11[0].flags |= VAR_0 | VAR_3;

 VAR_11[1].start = 0;
 VAR_11[1].end = VAR_7 - 1;
 VAR_11[1].flags |= VAR_0 | VAR_3;





 FUNC_0(VAR_10, VAR_5, &VAR_12);
 if (!(VAR_12 & VAR_6)) {
  VAR_12 |= VAR_6;
  FUNC_1(VAR_10, VAR_5, VAR_12);
  FUNC_0(VAR_10, VAR_5, &VAR_12);
 }






 if (VAR_12 & VAR_6) {
  VAR_11[2].start = 0;
  VAR_11[2].end = VAR_8 - 1;
  VAR_11[2].flags |= VAR_1 | VAR_2 | VAR_3;

  VAR_11[3].start = 0;
  VAR_11[3].end = VAR_8 - 1;
  VAR_11[3].flags |= VAR_1 | VAR_3;
 } else {
  VAR_11[3].start = 0;
  VAR_11[3].end = VAR_8 * 2 - 1;
  VAR_11[3].flags |= VAR_1 | VAR_3;
 }
}
