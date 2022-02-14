
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vector_map_info {int channel_id; } ;
struct TYPE_2__ {int num_present_cpu; struct lpfc_vector_map_info* cpu_map; } ;
struct lpfc_hba {scalar_t__ cfg_fcp_io_sched; int cfg_fcp_io_channel; int fcp_qidx; TYPE_1__ sli4_hba; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static inline uint32_t
FUNC_2(struct lpfc_hba *VAR_1)
{
 struct lpfc_vector_map_info *VAR_2;
 int VAR_3, VAR_4;

 if (VAR_1->cfg_fcp_io_sched == VAR_0) {
  VAR_4 = FUNC_1();
  if (VAR_4 < VAR_1->sli4_hba.num_present_cpu) {
   VAR_2 = VAR_1->sli4_hba.cpu_map;
   VAR_2 += VAR_4;
   return VAR_2->channel_id;
  }
  VAR_3 = VAR_4;
 }
 VAR_3 = FUNC_0(1, &VAR_1->fcp_qidx);
 VAR_3 = (VAR_3 % VAR_1->cfg_fcp_io_channel);
 return VAR_3;
}
