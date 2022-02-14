
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kevent_qos_s {int ident; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct kevent_qos_s*) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int,unsigned int,char*,unsigned int,unsigned int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 unsigned int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(uint64_t *VAR_4, struct kevent_qos_s **VAR_5, int *VAR_6)
{
 unsigned VAR_7;
 unsigned VAR_8;

 FUNC_3("Workloop handler workloop_cb_test_sync_send_and_enable called");

 FUNC_1(*VAR_5);

 if (FUNC_7() != 0) {
  FUNC_4("kevent_qos test requires root privileges to run.");
 }


 FUNC_0(VAR_2[VAR_0],
   "dispatch_source event handler QoS should be %s", VAR_3[VAR_0]);


 VAR_7 = FUNC_6();


 struct kevent_qos_s *VAR_9 = *VAR_5;
 FUNC_5(VAR_4, VAR_9->ident);





 VAR_8 = FUNC_6();
 FUNC_2(VAR_8, VAR_7,
  "thread's current override priority %d should be less than override priority prior to enabling knote %d",
  VAR_8, VAR_7);

 *VAR_6 = 0;
 VAR_1;
}
