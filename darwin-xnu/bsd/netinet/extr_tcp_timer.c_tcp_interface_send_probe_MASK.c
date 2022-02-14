
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct tcptimerlist {scalar_t__ probe_if_index; int mtx; scalar_t__ idleruns; int mode; int runtime; scalar_t__ scheduled; scalar_t__ running; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {int tcps_probe_if_conflict; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 struct tcptimerlist VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_4 (int ,int ,int ,scalar_t__) ;

void
FUNC_5(u_int16_t VAR_5)
{
 int32_t VAR_6 = 0;
 struct tcptimerlist *VAR_7 = &VAR_3;


 FUNC_0();

 FUNC_1(VAR_7->mtx);
 if (VAR_7->probe_if_index > 0) {
  VAR_4.tcps_probe_if_conflict++;
  goto done;
 }

 VAR_7->probe_if_index = VAR_5;
 if (VAR_7->running)
  goto done;





 VAR_6 = VAR_1;
 if (VAR_7->scheduled) {
  int32_t VAR_8;
  VAR_8 = FUNC_4(VAR_7->runtime, 0, VAR_2, VAR_6);
  if (VAR_8 <= 0) {

   goto done;
  }
 }
 VAR_7->mode = VAR_0;
 VAR_7->idleruns = 0;

 FUNC_3(VAR_6);

done:
 FUNC_2(VAR_7->mtx);
 return;
}
