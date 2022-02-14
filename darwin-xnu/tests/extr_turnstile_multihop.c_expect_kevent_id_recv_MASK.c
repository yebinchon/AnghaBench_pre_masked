
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent_qos_s {int flags; int fflags; int data; int member_0; int qos; int filter; int ident; } ;
typedef int pthread_workqueue_function_workloop_t ;
typedef int mach_port_t ;
typedef int int32_t ;


 int VAR_0 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_14 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int VAR_15 ;
 int FUNC_7 (int,struct kevent_qos_s*,int,struct kevent_qos_s*,int,int *,int *,int) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static void
FUNC_8(mach_port_t VAR_18)
{
 int VAR_19;

 VAR_14; FUNC_4(FUNC_6(
  VAR_16, VAR_15,
  (pthread_workqueue_function_workloop_t)VAR_17, 0, 0), ((void*)0));

 struct kevent_qos_s VAR_20[] = {{
  .ident = VAR_18,
  .filter = VAR_0,
  .flags = VAR_1 | VAR_3 | VAR_2 | VAR_4,
  .fflags = (VAR_10 | VAR_8 | VAR_9 |
    FUNC_0(VAR_11) |
    FUNC_1(VAR_7) |
    VAR_12),
  .data = 1,
  .qos = (int32_t)FUNC_5(VAR_13, 0, 0)
 }};

 struct kevent_qos_s VAR_21[] = {{ 0 }};


 VAR_19 = FUNC_7(25, VAR_20, 1, VAR_21, 1, ((void*)0),
   ((void*)0), VAR_6 | VAR_5);

 VAR_14; FUNC_3(VAR_19, "kevent_id");
 VAR_14; FUNC_2(VAR_19, 0, "no errors returned from kevent_id");
}
