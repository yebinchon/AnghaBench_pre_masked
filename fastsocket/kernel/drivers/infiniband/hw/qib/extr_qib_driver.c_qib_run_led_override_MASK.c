
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {int led_override_timeoff; int led_override_timer; scalar_t__* led_override_vals; scalar_t__ led_override; int led_override_phase; struct qib_devdata* dd; } ;
struct qib_devdata {int flags; int (* f_setextled ) (struct qib_pportdata*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct qib_pportdata*,int) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_2)
{
 struct qib_pportdata *VAR_3 = (struct qib_pportdata *)VAR_2;
 struct qib_devdata *VAR_4 = VAR_3->dd;
 int VAR_5;
 int VAR_6;

 if (!(VAR_4->flags & VAR_0))
  return;

 VAR_6 = VAR_3->led_override_phase++ & 1;
 VAR_3->led_override = VAR_3->led_override_vals[VAR_6];
 VAR_5 = VAR_3->led_override_timeoff;

 VAR_4->f_setextled(VAR_3, 1);




 if (VAR_3->led_override_vals[0] || VAR_3->led_override_vals[1])
  FUNC_0(&VAR_3->led_override_timer, VAR_1 + VAR_5);
}
