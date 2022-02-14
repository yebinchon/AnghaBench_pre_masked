
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int start_time; int i_stopped; int l_total_ms; } ;
typedef TYPE_1__ entry_t ;
typedef scalar_t__ clock_t ;


 TYPE_1__* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;

void FUNC_3 (char* VAR_1) {
  clock_t VAR_2 ;
  entry_t* VAR_3 ;

  if (*VAR_1 == '\0') {
    FUNC_2 (VAR_0, "ERROR in ProfileStop: a tag may not be \"\". Call is denied.") ;
    return ;
  }

  VAR_3 = FUNC_0 (VAR_1) ;
  if (!VAR_3) {
    FUNC_2 (VAR_0, "WARNING in ProfileStop: tag \"%s\" was never started. Call is denied.\n", VAR_1) ;
    return ;
  }

  VAR_2 = FUNC_1 () ;
  VAR_3->l_total_ms += VAR_2 - VAR_3->start_time ;

  VAR_3->start_time = -1 ;
  VAR_3->i_stopped = 1 ;
}
