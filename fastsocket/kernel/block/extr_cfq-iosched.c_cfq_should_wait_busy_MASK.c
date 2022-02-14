
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfq_queue {int slice_end; TYPE_1__* cfqg; } ;
struct cfq_io_context {int ttime_mean; int ttime_samples; } ;
struct cfq_data {struct cfq_io_context* active_cic; } ;
struct TYPE_2__ {int nr_cfqq; } ;


 scalar_t__ FUNC_0 (struct cfq_queue*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct cfq_data *VAR_1, struct cfq_queue *VAR_2)
{
 struct cfq_io_context *VAR_3 = VAR_1->active_cic;


 if (VAR_2->cfqg->nr_cfqq > 1)
  return 0;

 if (FUNC_0(VAR_2))
  return 1;


 if (VAR_3 && FUNC_1(VAR_3->ttime_samples)
     && (VAR_2->slice_end - VAR_0 < VAR_3->ttime_mean))
  return 1;
 if (VAR_2->slice_end - VAR_0 == 1)
  return 1;

 return 0;
}
