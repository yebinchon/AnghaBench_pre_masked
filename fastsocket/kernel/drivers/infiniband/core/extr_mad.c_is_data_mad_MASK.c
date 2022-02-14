
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rmpp_type; } ;
struct ib_rmpp_mad {TYPE_2__ rmpp_hdr; } ;
struct ib_mad_hdr {int dummy; } ;
struct TYPE_3__ {int rmpp_version; } ;
struct ib_mad_agent_private {TYPE_1__ agent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct ib_mad_agent_private *VAR_2,
         struct ib_mad_hdr *VAR_3)
{
 struct ib_rmpp_mad *VAR_4;

 VAR_4 = (struct ib_rmpp_mad *)VAR_3;
 return !VAR_2->agent.rmpp_version ||
  !(FUNC_0(&VAR_4->rmpp_hdr) &
        VAR_0) ||
  (VAR_4->rmpp_hdr.rmpp_type == VAR_1);
}
