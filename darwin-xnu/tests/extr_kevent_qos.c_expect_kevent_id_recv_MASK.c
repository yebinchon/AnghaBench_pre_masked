
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent_qos_s {int flags; int fflags; int data; int member_0; int qos; int filter; int ident; } ;
typedef int qos_class_t ;
typedef int pthread_workqueue_function_workloop_t ;
typedef int mach_port_t ;
typedef int int32_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,int *) ;
 int VAR_15 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 int VAR_16 ;
 int * VAR_17 ;
 char const** VAR_18 ;
 int FUNC_8 (int,struct kevent_qos_s*,int,struct kevent_qos_s*,int,int *,int *,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;

__attribute__((used)) static void
FUNC_11(mach_port_t VAR_37, qos_class_t VAR_38[], const char *VAR_39[], const char *VAR_40)
{
 int VAR_41;


 for (int VAR_42 = 0; VAR_42 < VAR_1; VAR_42++) {
  VAR_17[VAR_42] = VAR_38[VAR_42];
  VAR_18[VAR_42] = VAR_39[VAR_42];
 }

 if (FUNC_10(VAR_40, "workloop_cb_test_intransit") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_20, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_22, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send_and_enable") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_23, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_send_two_sync") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_21, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_two_send_and_destroy") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_36, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send_reply") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_31, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send_deallocate") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_24, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send_reply_kevent") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_32, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send_reply_kevent_pthread") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_34, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send_kevent_reply") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_28, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send_do_nothing") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_25, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send_do_nothing_kevent_pthread") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_27, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send_do_nothing_exit") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_26, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send_reply_kevent_reply_kevent") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_35, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send_kevent_reply_reply_kevent") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_30, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send_kevent_reply_kevent_reply") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_29, 0, 0), ((void*)0));
 } else if (FUNC_10(VAR_40, "workloop_cb_test_sync_send_reply_kevent_kevent_reply") == 0) {
  VAR_15; FUNC_5(FUNC_7(
   VAR_19, VAR_16,
   (pthread_workqueue_function_workloop_t)VAR_33, 0, 0), ((void*)0));
 } else {
  FUNC_3("no workloop function specified \n");
 }

 struct kevent_qos_s VAR_43[] = {{
  .ident = VAR_37,
  .filter = VAR_2,
  .flags = VAR_3 | VAR_5 | VAR_4 | VAR_6,
  .fflags = (VAR_13 | VAR_11 | VAR_12 |
    FUNC_0(VAR_14) |
    FUNC_1(VAR_10)),
  .data = 1,
  .qos = (int32_t)FUNC_6(VAR_38[VAR_0], 0, 0)
 }};

 struct kevent_qos_s VAR_44[] = {{ 0 }};


 VAR_41 = FUNC_8(25, VAR_43, 1, VAR_44, 1, ((void*)0),
   ((void*)0), VAR_9 | VAR_8);

 VAR_15; FUNC_4(VAR_41, "kevent_id");
 VAR_15; FUNC_2(VAR_41, 0, "no errors returned from kevent_id");
 FUNC_9(VAR_7);
}
