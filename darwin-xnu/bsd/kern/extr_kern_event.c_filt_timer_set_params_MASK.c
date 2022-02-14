
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_sdata; int * kn_ext; } ;
struct filt_timer_params {int interval; int leeway; int deadline; } ;



__attribute__((used)) static void
FUNC_0(struct knote *VAR_0, struct filt_timer_params *VAR_1)
{
 VAR_0->kn_ext[0] = VAR_1->deadline;
 VAR_0->kn_ext[1] = VAR_1->leeway;
 VAR_0->kn_sdata = VAR_1->interval;
}
