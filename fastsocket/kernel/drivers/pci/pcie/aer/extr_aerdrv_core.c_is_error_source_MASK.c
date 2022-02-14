
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {int devfn; int enable_cnt; TYPE_1__* bus; } ;
struct aer_err_info {int id; scalar_t__ severity; int multi_error_valid; } ;
struct TYPE_2__ {int number; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_8 ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static bool FUNC_5(struct pci_dev *VAR_9, struct aer_err_info *VAR_10)
{
 int VAR_11;
 u32 VAR_12, VAR_13;
 u16 VAR_14;





 if (!VAR_8 && (FUNC_0(VAR_10->id) != 0)) {

  if (VAR_10->id == ((VAR_9->bus->number << 8) | VAR_9->devfn))
   return 1;


  if (!VAR_10->multi_error_valid)
   return 0;
 }
 if (FUNC_1(&VAR_9->enable_cnt) == 0)
  return 0;


 FUNC_4(VAR_9, VAR_6, &VAR_14);
 if (!(VAR_14 & VAR_5))
  return 0;

 VAR_11 = FUNC_2(VAR_9, VAR_7);
 if (!VAR_11)
  return 0;


 if (VAR_10->severity == VAR_0) {
  FUNC_3(VAR_9, VAR_11 + VAR_2, &VAR_12);
  FUNC_3(VAR_9, VAR_11 + VAR_1, &VAR_13);
 } else {
  FUNC_3(VAR_9, VAR_11 + VAR_4, &VAR_12);
  FUNC_3(VAR_9, VAR_11 + VAR_3, &VAR_13);
 }
 if (VAR_12 & ~VAR_13)
  return 1;

 return 0;
}
