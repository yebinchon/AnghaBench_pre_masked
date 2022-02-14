
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msix_entry {int dummy; } ;
struct igbvf_adapter {TYPE_1__* pdev; TYPE_2__* msix_entries; } ;
struct TYPE_5__ {int entry; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct igbvf_adapter*) ;
 TYPE_2__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_4(struct igbvf_adapter *VAR_2)
{
 int VAR_3 = -VAR_0;
 int VAR_4;


 VAR_2->msix_entries = FUNC_2(3, sizeof(struct msix_entry),
                                 VAR_1);
 if (VAR_2->msix_entries) {
  for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
   VAR_2->msix_entries[VAR_4].entry = VAR_4;

  VAR_3 = FUNC_3(VAR_2->pdev,
                        VAR_2->msix_entries, 3);
 }

 if (VAR_3) {

  FUNC_0(&VAR_2->pdev->dev,
          "Failed to initialize MSI-X interrupts.\n");
  FUNC_1(VAR_2);
 }
}
