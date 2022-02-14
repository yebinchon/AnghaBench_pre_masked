
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {scalar_t__ state; int lock; } ;
struct iscsi_conn {unsigned long recv_timeout; unsigned long last_recv; unsigned long ping_timeout; unsigned long last_ping; int transport_timer; struct iscsi_session* session; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct iscsi_conn*,char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iscsi_conn*,int ) ;
 int FUNC_2 (int ,struct iscsi_conn*,char*,unsigned long,unsigned long,unsigned long,unsigned long,int ) ;
 scalar_t__ FUNC_3 (struct iscsi_conn*) ;
 int FUNC_4 (struct iscsi_conn*,int *) ;
 int VAR_4 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_5)
{
 struct iscsi_conn *VAR_6 = (struct iscsi_conn *)VAR_5;
 struct iscsi_session *VAR_7 = VAR_6->session;
 unsigned long VAR_8, VAR_9 = 0, VAR_10;

 FUNC_6(&VAR_7->lock);
 if (VAR_7->state != VAR_2)
  goto done;

 VAR_8 = VAR_6->recv_timeout;
 if (!VAR_8)
  goto done;

 VAR_8 *= VAR_0;
 VAR_10 = VAR_6->last_recv;

 if (FUNC_3(VAR_6)) {
  FUNC_2(VAR_3, VAR_6, "ping timeout of %d secs "
      "expired, recv timeout %d, last rx %lu, "
      "last ping %lu, now %lu\n",
      VAR_6->ping_timeout, VAR_6->recv_timeout,
      VAR_10, VAR_6->last_ping, VAR_4);
  FUNC_7(&VAR_7->lock);
  FUNC_1(VAR_6, VAR_1);
  return;
 }

 if (FUNC_8(VAR_10 + VAR_8, VAR_4)) {

  FUNC_0(VAR_6, "Sending nopout as ping\n");
  FUNC_4(VAR_6, ((void*)0));
  VAR_9 = VAR_6->last_ping + (VAR_6->ping_timeout * VAR_0);
 } else
  VAR_9 = VAR_10 + VAR_8;

 FUNC_0(VAR_6, "Setting next tmo %lu\n", VAR_9);
 FUNC_5(&VAR_6->transport_timer, VAR_9);
done:
 FUNC_7(&VAR_7->lock);
}
