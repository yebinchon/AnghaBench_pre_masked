
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int timeout_ms; int retries; } ;
struct ib_mad_send_wr_private {TYPE_2__* mad_agent_priv; int agent_list; int refcount; TYPE_3__ send_buf; int timeout; int retries_left; } ;
struct TYPE_4__ {scalar_t__ rmpp_version; } ;
struct TYPE_5__ {int send_list; TYPE_1__ agent; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct ib_mad_send_wr_private*) ;
 int FUNC_1 (struct ib_mad_send_wr_private*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ib_mad_send_wr_private *VAR_2)
{
 int VAR_3;

 if (!VAR_2->retries_left)
  return -VAR_1;

 VAR_2->retries_left--;
 VAR_2->send_buf.retries++;

 VAR_2->timeout = FUNC_3(VAR_2->send_buf.timeout_ms);

 if (VAR_2->mad_agent_priv->agent.rmpp_version) {
  VAR_3 = FUNC_0(VAR_2);
  switch (VAR_3) {
  case 128:
   VAR_3 = FUNC_1(VAR_2);
   break;
  case 129:
   VAR_3 = 0;
   break;
  default:
   VAR_3 = -VAR_0;
   break;
  }
 } else
  VAR_3 = FUNC_1(VAR_2);

 if (!VAR_3) {
  VAR_2->refcount++;
  FUNC_2(&VAR_2->agent_list,
         &VAR_2->mad_agent_priv->send_list);
 }
 return VAR_3;
}
