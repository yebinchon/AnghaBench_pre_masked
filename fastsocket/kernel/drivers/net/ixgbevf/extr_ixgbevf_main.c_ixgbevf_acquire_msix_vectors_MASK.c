
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbevf_adapter {int num_msix_vectors; int * msix_entries; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ixgbevf_adapter *VAR_2,
     int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;





 VAR_5 = VAR_1;






 while (VAR_3 >= VAR_5) {
  VAR_4 = FUNC_2(VAR_2->pdev, VAR_2->msix_entries,
          VAR_3);
  if (!VAR_4 || VAR_4 < 0)
   break;
  else
   VAR_3 = VAR_4;
 }

 if (VAR_3 < VAR_5)
  VAR_4 = -VAR_0;

 if (VAR_4) {
  FUNC_0(&VAR_2->pdev->dev,
   "Unable to allocate MSI-X interrupts\n");
  FUNC_1(VAR_2->msix_entries);
  VAR_2->msix_entries = ((void*)0);
 } else {





  VAR_2->num_msix_vectors = VAR_3;
 }

 return VAR_4;
}
