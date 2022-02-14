
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ timeout_fn ;
struct TYPE_8__ {unsigned long spinup; scalar_t__ select_delay; } ;
struct TYPE_7__ {unsigned long spinup_date; int flags; } ;
struct TYPE_6__ {int (* interrupt ) () ;int (* error ) () ;} ;
struct TYPE_5__ {int flags; int cmd_count; int * cmd; } ;


 TYPE_4__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (unsigned long,scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_14 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_10(void)
{
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 unsigned long VAR_19;
 timeout_fn VAR_20;

 VAR_17 = VAR_14->flags;
 if (VAR_17 & (VAR_5 | VAR_7))
  VAR_17 |= VAR_2;

 if ((VAR_17 & VAR_6) && !(VAR_17 & VAR_4)) {
  VAR_19 = VAR_1->spinup_date + VAR_0->spinup;




  if (FUNC_9(VAR_19, VAR_12 + VAR_0->select_delay)) {
   VAR_19 -= VAR_0->select_delay;
   VAR_20 = (timeout_fn) VAR_10;
  } else
   VAR_20 = (timeout_fn) FUNC_10;


  if (FUNC_1(VAR_19, VAR_20))
   return;
 }
 VAR_18 = VAR_1->flags;

 if ((VAR_17 & VAR_5) || (VAR_17 & VAR_7))
  FUNC_6();

 if (VAR_17 & VAR_2)
  VAR_9 = VAR_13;

 VAR_16 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_14->cmd_count; VAR_15++)
  VAR_16 |= FUNC_3(VAR_14->cmd[VAR_15]);

 FUNC_0("rw_command: ");

 if (VAR_16) {
  VAR_8->error();
  FUNC_4();
  return;
 }

 if (!(VAR_17 & VAR_2)) {
  VAR_11 = FUNC_5();
  VAR_8->interrupt();
 } else if (VAR_17 & VAR_3)
  FUNC_2();
}
