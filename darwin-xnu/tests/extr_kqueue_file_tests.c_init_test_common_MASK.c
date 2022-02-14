
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {short tu_pollevents; int tu_kev; } ;
struct TYPE_6__ {char* t_testname; char* t_watchfile; int t_n_prep_actions; int t_n_cleanup_actions; int t_want_event; int t_is_poll_test; int t_nbytes; TYPE_1__ t_union; scalar_t__ t_nondeterministic; scalar_t__ t_known_failure; } ;
typedef TYPE_2__ test_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int,int,int,int ,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void
FUNC_2(test_t *VAR_5, char *VAR_6, char *VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 FUNC_1(VAR_5, 0, sizeof(test_t));
 VAR_5->t_testname = VAR_6;
 VAR_5->t_known_failure = 0;
 VAR_5->t_nondeterministic = 0;
 VAR_5->t_watchfile = VAR_7;
 VAR_5->t_n_prep_actions = VAR_8;
 VAR_5->t_n_cleanup_actions = VAR_9;
 VAR_5->t_want_event = (VAR_11 > 0);

 if (VAR_12) {
  VAR_5->t_is_poll_test = 1;
  VAR_5->t_union.tu_pollevents = (short)VAR_10;
 } else {

  if (VAR_10 == VAR_0 || VAR_10 == VAR_2) {
   FUNC_0(&VAR_5->t_union.tu_kev, 0, VAR_10, VAR_3 | VAR_4, 0, 0, ((void*)0));
   VAR_5->t_nbytes = VAR_11;
  } else {
   FUNC_0(&VAR_5->t_union.tu_kev, 0, VAR_1, VAR_3 | VAR_4, VAR_10, 0, ((void*)0));
  }
 }
}
