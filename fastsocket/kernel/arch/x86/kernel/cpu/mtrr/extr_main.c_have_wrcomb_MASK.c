
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;
struct TYPE_2__ {int (* have_wrcomb ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int,int *) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(void)
{
 struct pci_dev *VAR_7;
 u8 VAR_8;

 VAR_7 = FUNC_1(VAR_0 << 8, ((void*)0));
 if (VAR_7 != ((void*)0)) {





  if (VAR_7->vendor == VAR_5 &&
      VAR_7->device == VAR_3) {
   FUNC_2(VAR_7, VAR_1, &VAR_8);
   if (VAR_8 <= 5) {
    FUNC_3("mtrr: Serverworks LE rev < 6 detected. Write-combining disabled.\n");
    FUNC_0(VAR_7);
    return 0;
   }
  }




  if (VAR_7->vendor == VAR_4 &&
      VAR_7->device == VAR_2) {
   FUNC_3("mtrr: Intel 450NX MMC detected. Write-combining disabled.\n");
   FUNC_0(VAR_7);
   return 0;
  }
  FUNC_0(VAR_7);
 }
 return VAR_6->have_wrcomb ? VAR_6->have_wrcomb() : 0;
}
