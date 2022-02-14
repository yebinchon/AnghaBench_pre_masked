
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct scsi_cmnd {int dummy; } ;
struct bfa_itnim_latency_s {size_t* min; size_t* max; int * avg; int * count; } ;
struct bfa_ioim_s {TYPE_2__* itnim; scalar_t__ dio; scalar_t__ start_time; } ;
struct TYPE_3__ {struct bfa_itnim_latency_s io_latency; } ;
struct TYPE_4__ {TYPE_1__ ioprofile; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct scsi_cmnd*) ;

void
FUNC_3(struct bfa_ioim_s *VAR_1)
{
 struct bfa_itnim_latency_s *VAR_2 =
   &(VAR_1->itnim->ioprofile.io_latency);
 u32 VAR_3, VAR_4;

 VAR_3 = (u32)(VAR_0 - VAR_1->start_time);
 VAR_4 = FUNC_0(FUNC_2((struct scsi_cmnd *)VAR_1->dio));
 FUNC_1(VAR_1->itnim, VAR_4);

 VAR_2->count[VAR_4]++;
 VAR_2->min[VAR_4] = (VAR_2->min[VAR_4] < VAR_3) ? VAR_2->min[VAR_4] : VAR_3;
 VAR_2->max[VAR_4] = (VAR_2->max[VAR_4] > VAR_3) ? VAR_2->max[VAR_4] : VAR_3;
 VAR_2->avg[VAR_4] += VAR_3;
}
