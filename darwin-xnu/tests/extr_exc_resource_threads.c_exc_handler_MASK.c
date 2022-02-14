
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_t ;
typedef scalar_t__ kern_return_t ;
typedef int exception_behavior_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 () ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int ,int,int ,int ,int ) ;

__attribute__((used)) static void *
FUNC_8(void * VAR_10)
{
#pragma unused(arg)
 kern_return_t VAR_11;
 mach_port_t VAR_12;

 VAR_11 = FUNC_4(FUNC_6(), VAR_7, &VAR_12);
 if (VAR_11 != VAR_3)
  FUNC_0("mach_port_allocate: %s (%d)", FUNC_2(VAR_11), VAR_11);

 VAR_11 = FUNC_5(FUNC_6(), VAR_12, VAR_12, VAR_6);
 if (VAR_11 != VAR_3)
  FUNC_0("mach_port_insert_right: %s (%d)", FUNC_2(VAR_11), VAR_11);

 VAR_11 = FUNC_7(FUNC_6(), VAR_2 | VAR_1, VAR_12,
                                 (exception_behavior_t)(VAR_0 | VAR_4), 0);
 if (VAR_11 != VAR_3)
  FUNC_0("task_set_exception_ports: %s (%d)", FUNC_2(VAR_11), VAR_11);

 FUNC_1(VAR_9);

 VAR_11 = FUNC_3(VAR_8, VAR_5, VAR_12, 0);
 if (VAR_11 != VAR_3)
  FUNC_0("mach_msg_server: %s (%d)", FUNC_2(VAR_11), VAR_11);

 return ((void*)0);
}
