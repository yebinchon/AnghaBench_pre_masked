
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pci_controller {int dummy; } ;
struct pci_bus {int dummy; } ;
struct celleb_pci_resource {TYPE_1__* r; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;






 int FUNC_1 (char*,int,int,scalar_t__) ;
 char* FUNC_2 (struct pci_controller*,unsigned int,unsigned int) ;
 struct celleb_pci_resource* FUNC_3 (struct pci_controller*,unsigned int,unsigned int) ;
 struct pci_controller* FUNC_4 (struct pci_bus*) ;
 int FUNC_5 (char*,int,int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct pci_bus *VAR_2,
  unsigned int VAR_3, int VAR_4, int VAR_5, u32 VAR_6)
{
 char *VAR_7;
 struct pci_controller *VAR_8 = FUNC_4(VAR_2);
 struct celleb_pci_resource *VAR_9;
 unsigned int VAR_10 = VAR_3 >> 3;
 unsigned int VAR_11 = VAR_3 & 0x7;


 FUNC_0(VAR_4 % VAR_5);

 VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11);

 if (!VAR_7)
  return VAR_0;

 if (VAR_6 == ~0) {
  int VAR_12 = (VAR_4 - 133) >> 3;

  switch (VAR_4) {
  case 133:
  case 131:
   if (VAR_5 != 4)
    return VAR_0;
   VAR_9 = FUNC_3(VAR_8, VAR_10, VAR_11);
   if (!VAR_9)
    return VAR_0;
   FUNC_1(VAR_7, VAR_4, VAR_5,
     (VAR_9->r[VAR_12].end - VAR_9->r[VAR_12].start));
   return VAR_1;
  case 132:
  case 130:
  case 129:
  case 128:
   break;
  default:
   break;
  }
 }

 FUNC_1(VAR_7, VAR_4, VAR_5, VAR_6);
 FUNC_5("    fake write: where=%x, size=%d, val=%x\n",
   VAR_4, VAR_5, VAR_6);

 return VAR_1;
}
