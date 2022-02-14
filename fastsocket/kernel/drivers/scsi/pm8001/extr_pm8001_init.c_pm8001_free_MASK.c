
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* region; } ;
struct pm8001_hba_info {struct pm8001_hba_info* tags; scalar_t__ shost; TYPE_2__ memoryMap; int pdev; } ;
struct TYPE_6__ {int (* chip_iounmap ) (struct pm8001_hba_info*) ;} ;
struct TYPE_4__ {int phys_addr; int * virt_ptr; scalar_t__ alignment; scalar_t__ total_len; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pm8001_hba_info*) ;
 int FUNC_2 (int ,scalar_t__,int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct pm8001_hba_info*) ;

__attribute__((used)) static void FUNC_5(struct pm8001_hba_info *VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3->memoryMap.region[VAR_4].virt_ptr != ((void*)0)) {
   FUNC_2(VAR_3->pdev,
    (VAR_3->memoryMap.region[VAR_4].total_len +
    VAR_3->memoryMap.region[VAR_4].alignment),
    VAR_3->memoryMap.region[VAR_4].virt_ptr,
    VAR_3->memoryMap.region[VAR_4].phys_addr);
   }
 }
 VAR_0->chip_iounmap(VAR_3);
 if (VAR_3->shost)
  FUNC_3(VAR_3->shost);
 FUNC_0(VAR_2);
 FUNC_1(VAR_3->tags);
 FUNC_1(VAR_3);
}
