
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct pci_bus {int number; } ;
struct ia64_sal_retval {scalar_t__ status; } ;
struct TYPE_2__ {unsigned long bs_legacy_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ia64_sal_retval,int ,int ,int ,int ,int,scalar_t__,int,int ) ;
 TYPE_1__* FUNC_1 (struct pci_bus*) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_bus*) ;

int FUNC_4(struct pci_bus *VAR_4, u16 VAR_5, u32 VAR_6, u8 VAR_7)
{
 int VAR_8 = VAR_7;
 unsigned long VAR_9;
 unsigned long *VAR_10;
 struct ia64_sal_retval VAR_11;







 FUNC_0(VAR_11, VAR_2,
   FUNC_3(VAR_4), VAR_4->number,
   0,
   1,
   VAR_5, VAR_7, FUNC_2(&VAR_6));

 if (VAR_11.status == 0)
  return VAR_7;
 if (!FUNC_1(VAR_4)) {
  VAR_8 = -VAR_1;
  goto out;
 }


 VAR_9 = FUNC_1(VAR_4)->bs_legacy_io | VAR_3;
 VAR_9 += VAR_5;
 VAR_10 = (unsigned long *)VAR_9;

 switch (VAR_7) {
 case 1:
  *(volatile u8 *)(VAR_10) = (u8)(VAR_6);
  break;
 case 2:
  *(volatile u16 *)(VAR_10) = (u16)(VAR_6);
  break;
 case 4:
  *(volatile u32 *)(VAR_10) = (u32)(VAR_6);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }
 out:
 return VAR_8;
}
