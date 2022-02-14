
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tcp_heuristic {int th_tfo_in_backoff; scalar_t__ th_tfo_enabled_time; scalar_t__ th_tfo_backoff; scalar_t__ th_tfo_backoff_until; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct tcp_heuristic *VAR_3)
{
 if (VAR_3->th_tfo_in_backoff)
  return;

 VAR_3->th_tfo_in_backoff = 1;

 if (VAR_3->th_tfo_enabled_time) {
  uint32_t VAR_4 = VAR_3->th_tfo_backoff;

  VAR_3->th_tfo_backoff -= (VAR_2 - VAR_3->th_tfo_enabled_time);
  if (VAR_3->th_tfo_backoff > VAR_4)
   VAR_3->th_tfo_backoff = FUNC_0(VAR_1);
 }

 VAR_3->th_tfo_backoff_until = VAR_2 + VAR_3->th_tfo_backoff;


 VAR_3->th_tfo_backoff *= 2;

 if (VAR_3->th_tfo_backoff > FUNC_0(VAR_0))
  VAR_3->th_tfo_backoff = FUNC_0(VAR_1);
}
