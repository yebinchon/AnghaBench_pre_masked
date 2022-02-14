
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct beiscsi_hba {int num_cpus; int msix_enabled; TYPE_1__* msix_entries; int pcidev; } ;
struct TYPE_2__ {int entry; } ;


 int FUNC_0 (int ,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(struct beiscsi_hba *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 <= VAR_0->num_cpus; VAR_1++)
  VAR_0->msix_entries[VAR_1].entry = VAR_1;

 VAR_2 = FUNC_0(VAR_0->pcidev, VAR_0->msix_entries,
     (VAR_0->num_cpus + 1));
 if (!VAR_2)
  VAR_0->msix_enabled = 1;

 return;
}
