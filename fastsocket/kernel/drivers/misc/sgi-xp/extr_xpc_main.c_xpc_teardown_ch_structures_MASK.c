
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_partition {scalar_t__ setup_state; int * channels; int * remote_openclose_args; int * remote_openclose_args_base; int references; int teardown_wq; int nchannels_active; int nchannels_engaged; } ;
struct TYPE_2__ {int (* teardown_ch_structures ) (struct xpc_partition*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xpc_partition*) ;
 int FUNC_4 (int ,int) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct xpc_partition *VAR_4)
{
 FUNC_0(FUNC_1(&VAR_4->nchannels_engaged) != 0);
 FUNC_0(FUNC_1(&VAR_4->nchannels_active) != 0);






 FUNC_0(VAR_4->setup_state != VAR_0);
 VAR_4->setup_state = VAR_2;

 FUNC_4(VAR_4->teardown_wq, (FUNC_1(&VAR_4->references) == 0));



 VAR_3.teardown_ch_structures(VAR_4);

 FUNC_2(VAR_4->remote_openclose_args_base);
 VAR_4->remote_openclose_args = ((void*)0);
 FUNC_2(VAR_4->channels);
 VAR_4->channels = ((void*)0);

 VAR_4->setup_state = VAR_1;
}
