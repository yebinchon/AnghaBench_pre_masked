
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_stopped; int start_time; int i_calls; } ;
typedef TYPE_1__ entry_t ;


 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_6 (char* VAR_2) {
  entry_t* VAR_3 ;

  if (!VAR_0) {
    FUNC_1 () ;
  }

  if (*VAR_2 == '\0') {
    FUNC_5 (VAR_1, "ERROR in ProfileStart: a tag may not be \"\". Call is denied.") ;
    return ;
  }

  VAR_3 = FUNC_2 (VAR_2) ;
  if (!VAR_3) {

    VAR_3 = FUNC_0 (VAR_2) ;
    if (!VAR_3) {
      FUNC_5 (VAR_1, "WARNING in ProfileStart: no more space to store the tag (\"%s\"). Increase NUM_TAGS in \"profile.h\". Call is denied.\n", VAR_2) ;
      return ;
    }
  }

  if (FUNC_3 (VAR_2)) {
    FUNC_5 (VAR_1, "ERROR in ProfileStart: nesting of equal tags not allowed (\"%s\"). Call is denied.\n", VAR_2) ;
    return ;
  }

  ++VAR_3->i_calls ;

  VAR_3->start_time = FUNC_4 () ;
  VAR_3->i_stopped = 0 ;
}
