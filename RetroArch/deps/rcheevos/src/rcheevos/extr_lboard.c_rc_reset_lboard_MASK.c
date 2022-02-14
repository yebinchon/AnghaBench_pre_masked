
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cancel; int submit; int start; scalar_t__ submitted; scalar_t__ started; } ;
typedef TYPE_1__ rc_lboard_t ;


 int FUNC_0 (int *) ;

void FUNC_1(rc_lboard_t* VAR_0) {
  VAR_0->started = VAR_0->submitted = 0;

  FUNC_0(&VAR_0->start);
  FUNC_0(&VAR_0->submit);
  FUNC_0(&VAR_0->cancel);
}
