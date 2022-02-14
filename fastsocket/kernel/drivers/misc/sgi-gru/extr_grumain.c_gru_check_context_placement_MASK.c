
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gru_thread_state {scalar_t__ ts_tgid_owner; struct gru_state* ts_gru; } ;
struct gru_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ tgid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct gru_state*,struct gru_thread_state*) ;
 scalar_t__ FUNC_2 (struct gru_thread_state*) ;
 int FUNC_3 (struct gru_thread_state*,int) ;

void FUNC_4(struct gru_thread_state *VAR_3)
{
 struct gru_state *VAR_4;






 VAR_4 = VAR_3->ts_gru;
 if (!VAR_4 || VAR_3->ts_tgid_owner != VAR_2->tgid)
  return;

 if (!FUNC_1(VAR_4, VAR_3)) {
  FUNC_0(VAR_1);
  FUNC_3(VAR_3, 1);
 } else if (FUNC_2(VAR_3)) {
  FUNC_0(VAR_0);
 }
}
