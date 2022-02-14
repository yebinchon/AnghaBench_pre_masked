
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_lport_stats_s {int dummy; } ;
struct bfa_fcs_lport_s {struct bfa_lport_stats_s stats; } ;



void
FUNC_0(struct bfa_fcs_lport_s *VAR_0,
  struct bfa_lport_stats_s *VAR_1)
{
 *VAR_1 = VAR_0->stats;
}
