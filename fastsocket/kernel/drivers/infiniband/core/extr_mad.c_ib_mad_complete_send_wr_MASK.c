
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_mad_send_wr_private {scalar_t__ status; int refcount; scalar_t__ timeout; int agent_list; struct ib_mad_agent_private* mad_agent_priv; } ;
struct ib_mad_send_wc {scalar_t__ status; } ;
struct TYPE_2__ {int (* send_handler ) (TYPE_1__*,struct ib_mad_send_wc*) ;scalar_t__ rmpp_version; } ;
struct ib_mad_agent_private {int lock; TYPE_1__ agent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ib_mad_agent_private*) ;
 int FUNC_1 (struct ib_mad_agent_private*) ;
 int FUNC_2 (struct ib_mad_send_wr_private*,struct ib_mad_send_wc*) ;
 int FUNC_3 (struct ib_mad_send_wc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (TYPE_1__*,struct ib_mad_send_wc*) ;
 int FUNC_8 (struct ib_mad_send_wr_private*) ;

void FUNC_9(struct ib_mad_send_wr_private *VAR_4,
        struct ib_mad_send_wc *VAR_5)
{
 struct ib_mad_agent_private *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_6 = VAR_4->mad_agent_priv;
 FUNC_5(&VAR_6->lock, VAR_7);
 if (VAR_6->agent.rmpp_version) {
  VAR_8 = FUNC_2(VAR_4, VAR_5);
  if (VAR_8 == VAR_0)
   goto done;
 } else
  VAR_8 = VAR_2;

 if (VAR_5->status != VAR_3 &&
     VAR_4->status == VAR_3) {
  VAR_4->status = VAR_5->status;
  VAR_4->refcount -= (VAR_4->timeout > 0);
 }

 if (--VAR_4->refcount > 0) {
  if (VAR_4->refcount == 1 && VAR_4->timeout &&
      VAR_4->status == VAR_3) {
   FUNC_8(VAR_4);
  }
  goto done;
 }


 FUNC_4(&VAR_4->agent_list);
 FUNC_0(VAR_6);
 FUNC_6(&VAR_6->lock, VAR_7);

 if (VAR_4->status != VAR_3 )
  VAR_5->status = VAR_4->status;
 if (VAR_8 == VAR_1)
  FUNC_3(VAR_5);
 else
  VAR_6->agent.send_handler(&VAR_6->agent,
         VAR_5);


 FUNC_1(VAR_6);
 return;
done:
 FUNC_6(&VAR_6->lock, VAR_7);
}
