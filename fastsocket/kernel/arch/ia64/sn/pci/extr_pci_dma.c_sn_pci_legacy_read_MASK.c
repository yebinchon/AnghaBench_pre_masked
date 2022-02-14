
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
 int FUNC_0 (struct ia64_sal_retval,int ,int ,int ,int ,int ,scalar_t__,int,int ) ;
 TYPE_1__* FUNC_1 (struct pci_bus*) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (unsigned long,long,void*) ;
 int FUNC_4 (struct pci_bus*) ;

int FUNC_5(struct pci_bus *VAR_4, u16 VAR_5, u32 *VAR_6, u8 VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;
 struct ia64_sal_retval VAR_10;







 FUNC_0(VAR_10, VAR_2,
   FUNC_4(VAR_4), VAR_4->number,
   0,
   0,
   VAR_5, VAR_7, FUNC_2(VAR_6));

 if (VAR_10.status == 0)
  return VAR_7;
 if (!FUNC_1(VAR_4))
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_4)->bs_legacy_io | VAR_3;
 VAR_8 += VAR_5;

 VAR_9 = FUNC_3(VAR_8, (long)VAR_7, (void *)VAR_6);

 if (VAR_9 == 2)
  return -VAR_0;

 if (VAR_9 == 1)
  *VAR_6 = -1;

 return VAR_7;
}
