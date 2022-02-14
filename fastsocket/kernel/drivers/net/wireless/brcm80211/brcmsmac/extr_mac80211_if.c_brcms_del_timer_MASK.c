
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_timer {int set; TYPE_1__* wl; int dly_wrk; } ;
struct TYPE_2__ {int callbacks; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct brcms_timer *VAR_0)
{
 if (VAR_0->set) {
  VAR_0->set = 0;
  if (!FUNC_1(&VAR_0->dly_wrk))
   return 0;

  FUNC_0(&VAR_0->wl->callbacks);
 }

 return 1;
}
