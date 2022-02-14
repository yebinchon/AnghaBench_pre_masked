
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int state; void* last_action; void* last_slept; int sleep_ms; int off_override; } ;
struct ar9170 {TYPE_3__ ps; TYPE_2__* hw; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar9170*,int) ;
 void* VAR_1 ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct ar9170 *VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4 = 0;

 if (!VAR_2->ps.off_override)
  VAR_3 = (VAR_2->hw->conf.flags & VAR_0);

 if (VAR_3 != VAR_2->ps.state) {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;

  if (VAR_2->ps.state && !VAR_3) {
   VAR_2->ps.sleep_ms = FUNC_1(VAR_1 -
    VAR_2->ps.last_action);
  }

  if (VAR_3)
   VAR_2->ps.last_slept = VAR_1;

  VAR_2->ps.last_action = VAR_1;
  VAR_2->ps.state = VAR_3;
 }

 return 0;
}
