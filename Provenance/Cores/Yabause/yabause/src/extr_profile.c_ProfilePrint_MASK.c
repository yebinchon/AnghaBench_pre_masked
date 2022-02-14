
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int entry_t ;
struct TYPE_3__ {scalar_t__ i_stopped; long l_total_ms; long start_time; char* str_name; int i_calls; } ;


 double VAR_0 ;
 int VAR_1 ;
 long FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 long VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (TYPE_1__**,int,int,int ) ;
 int VAR_5 ;

void FUNC_3 (void) {
  int VAR_6 ;
  long VAR_7 ;
  if (VAR_2 == 0) {
    FUNC_1 (VAR_5, "ProfilePrint: nothing to print.\n") ;
    return ;
  }

  VAR_7 = FUNC_0 () - VAR_3 ;
  if (VAR_7 == 0) {

    FUNC_1 (VAR_5, "Warning: nothing to show because timer ran for less than 1 clock-tick.") ;
  }

  for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
    if (VAR_4 [VAR_6].i_stopped == 0) {
      VAR_4 [VAR_6].l_total_ms += FUNC_0 () - VAR_4 [VAR_6].start_time ;
      FUNC_1 (VAR_5, "Warning: \"%s\" started but not stopped. (Done now, but result may be over-expensive!)\n", VAR_4 [VAR_6].str_name) ;
    }
  }

  FUNC_2 (&VAR_4, VAR_2, sizeof (entry_t), VAR_1) ;
  FUNC_1 (VAR_5, "Profiler results (descending by percentage):\n\n") ;
  for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {

    FUNC_1 (VAR_5, "< calls: %2d, total ms: %3d, percentage: %3.1f%% > - \"%s\"\n",
      VAR_4 [VAR_6].i_calls,
      (int) ((double) VAR_4 [VAR_6].l_total_ms / VAR_0 * 1000),
      (double) VAR_4 [VAR_6].l_total_ms / VAR_7 * 100,
      VAR_4 [VAR_6].str_name) ;
  }
}
