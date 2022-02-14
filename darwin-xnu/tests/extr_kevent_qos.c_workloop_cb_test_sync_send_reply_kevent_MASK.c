
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kevent_qos_s {int filter; int ident; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct kevent_qos_s*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(uint64_t *VAR_2, struct kevent_qos_s **VAR_3, int *VAR_4)
{

 FUNC_1("Workloop handler workloop_cb_test_sync_send_reply_kevent called");

 if (FUNC_5() != 0) {
  FUNC_2("kevent_qos test requires root privileges to run.");
 }

 VAR_1; FUNC_0(*VAR_4, 1, "events received");
 VAR_1; FUNC_0(((*VAR_3)->filter), VAR_0, "received EVFILT_MACHPORT");

 struct kevent_qos_s *VAR_5 = *VAR_3;


 FUNC_6(FUNC_4(VAR_5));


 FUNC_3(VAR_2, VAR_5->ident);

 *VAR_4 = 0;

 FUNC_1("Handler returning \n");
}
