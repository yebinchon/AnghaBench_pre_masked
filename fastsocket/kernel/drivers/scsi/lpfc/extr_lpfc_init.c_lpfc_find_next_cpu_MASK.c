
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_vector_map_info {scalar_t__ irq; scalar_t__ phys_id; } ;
struct TYPE_2__ {int num_present_cpu; struct lpfc_vector_map_info* cpu_map; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct lpfc_hba *VAR_2, uint32_t VAR_3)
{
 struct lpfc_vector_map_info *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->sli4_hba.cpu_map;
 for (VAR_5 = 0; VAR_5 < VAR_2->sli4_hba.num_present_cpu; VAR_5++) {

  if (FUNC_0(VAR_5)) {
   if ((VAR_4->irq == VAR_0) &&
       (VAR_1[VAR_5] == VAR_0) &&
       (VAR_4->phys_id == VAR_3)) {
    return VAR_5;
   }
  }
  VAR_4++;
 }







 for (VAR_5 = 0; VAR_5 < VAR_2->sli4_hba.num_present_cpu; VAR_5++) {
  if (VAR_1[VAR_5] == VAR_3)
   VAR_1[VAR_5] = VAR_0;
 }

 VAR_4 = VAR_2->sli4_hba.cpu_map;
 for (VAR_5 = 0; VAR_5 < VAR_2->sli4_hba.num_present_cpu; VAR_5++) {

  if (FUNC_0(VAR_5)) {
   if ((VAR_4->irq == VAR_0) &&
       (VAR_4->phys_id == VAR_3)) {
    return VAR_5;
   }
  }
  VAR_4++;
 }
 return VAR_0;
}
