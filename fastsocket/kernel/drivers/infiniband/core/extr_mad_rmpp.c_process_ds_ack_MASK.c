
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mad_rmpp_recv {scalar_t__ state; int repwin; } ;
struct ib_mad_recv_wc {int dummy; } ;
struct ib_mad_agent_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct mad_rmpp_recv* FUNC_0 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;

__attribute__((used)) static void FUNC_1(struct ib_mad_agent_private *VAR_1,
      struct ib_mad_recv_wc *VAR_2, int VAR_3)
{
 struct mad_rmpp_recv *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4 && VAR_4->state == VAR_0)
  VAR_4->repwin = VAR_3;
}
