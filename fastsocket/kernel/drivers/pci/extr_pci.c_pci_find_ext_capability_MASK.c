
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_dev {int cfg_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int,scalar_t__*) ;

int FUNC_3(struct pci_dev *VAR_3, int VAR_4)
{
 u32 VAR_5;
 int VAR_6;
 int VAR_7 = VAR_2;


 VAR_6 = (VAR_1 - VAR_2) / 8;

 if (VAR_3->cfg_size <= VAR_2)
  return 0;

 if (FUNC_2(VAR_3, VAR_7, &VAR_5) != VAR_0)
  return 0;





 if (VAR_5 == 0)
  return 0;

 while (VAR_6-- > 0) {
  if (FUNC_0(VAR_5) == VAR_4)
   return VAR_7;

  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7 < VAR_2)
   break;

  if (FUNC_2(VAR_3, VAR_7, &VAR_5) != VAR_0)
   break;
 }

 return 0;
}
