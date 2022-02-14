
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kperf_sample {int dummy; } ;
struct kperf_context {int cur_pid; } ;
typedef int kern_return_t ;
struct TYPE_2__ {int pid_filter; unsigned int sample; int ucallstack_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct kperf_sample*,struct kperf_context*,unsigned int,unsigned int,unsigned int,int ) ;

kern_return_t
FUNC_1(struct kperf_sample *VAR_4,
             struct kperf_context *VAR_5,
             unsigned VAR_6, unsigned VAR_7)
{

 if ((VAR_6 > VAR_2) || (VAR_6 == 0)) {
  return VAR_1;
 }




 int VAR_8 = VAR_3[VAR_6 - 1].pid_filter;
 if ((VAR_8 != -1) && (VAR_8 != VAR_5->cur_pid)) {
  return VAR_0;
 }


 unsigned int VAR_9 = VAR_3[VAR_6 - 1].sample;


 return FUNC_0(VAR_4, VAR_5, VAR_9,
                              VAR_7, VAR_6,
                              VAR_3[VAR_6 - 1].ucallstack_depth);
}
