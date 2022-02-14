
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* resource; } ;
struct TYPE_2__ {unsigned long start; } ;


 int FUNC_0 (char*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

unsigned long FUNC_1(unsigned char VAR_3, unsigned char VAR_4,
     int VAR_5, void *VAR_6)
{
 unsigned long VAR_7 = 0;
 struct pci_dev *VAR_8 = (struct pci_dev *) VAR_6;

 if (VAR_5 < 6) {
  VAR_7 = VAR_8->resource[VAR_5].start;
 }

 FUNC_0(("GOT BAR[%d]=%08x", VAR_5, VAR_7));

 {
  unsigned long VAR_9 = (VAR_7 & 0x00000001);
  if (VAR_9 & VAR_2) {
   FUNC_0(("  I/O"));
   VAR_7 &= VAR_0;
  } else {
   FUNC_0(("  memory"));
   VAR_7 &= VAR_1;
  }
  FUNC_0(("  final=%08x", VAR_7));
 }

 return (VAR_7);
}
