
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {scalar_t__ scrubval; scalar_t__ bandwidth; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*,int ,scalar_t__,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 int VAR_6;







 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {




  if (VAR_1[VAR_6].scrubval < VAR_4)
   continue;

  if (VAR_1[VAR_6].bandwidth <= VAR_3)
   break;






 }

 VAR_5 = VAR_1[VAR_6].scrubval;

 FUNC_1(VAR_2, VAR_0, VAR_5, 0x001F);

 if (VAR_5)
  return VAR_1[VAR_6].bandwidth;

 return 0;
}
