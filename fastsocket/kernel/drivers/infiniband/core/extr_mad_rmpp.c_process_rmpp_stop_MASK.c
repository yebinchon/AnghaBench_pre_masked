
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rmpp_status; } ;
struct ib_rmpp_mad {TYPE_2__ rmpp_hdr; } ;
struct TYPE_3__ {scalar_t__ mad; } ;
struct ib_mad_recv_wc {TYPE_1__ recv_buf; } ;
struct ib_mad_agent_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*,scalar_t__) ;
 int FUNC_1 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ib_mad_agent_private *VAR_2,
         struct ib_mad_recv_wc *VAR_3)
{
 struct ib_rmpp_mad *VAR_4;

 VAR_4 = (struct ib_rmpp_mad *)VAR_3->recv_buf.mad;

 if (VAR_4->rmpp_hdr.rmpp_status != VAR_1) {
  FUNC_0(VAR_2, VAR_3, VAR_0);
  FUNC_1(VAR_2, VAR_3, VAR_0);
 } else
  FUNC_0(VAR_2, VAR_3, VAR_4->rmpp_hdr.rmpp_status);
}
