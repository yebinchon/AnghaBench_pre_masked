
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mach_port_t ;
typedef int kern_return_t ;
typedef int boolean_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void *
FUNC_10(void *VAR_8)
{
 mach_port_t VAR_9;
 mach_port_t VAR_10;
 boolean_t VAR_11 = VAR_1;
 kern_return_t VAR_12;
 unsigned long VAR_13 = (unsigned long) VAR_8;

 VAR_12 = FUNC_5(VAR_6,
   VAR_2, &VAR_9);
 VAR_5; FUNC_1(VAR_12, "client bootstrap_look_up");


 VAR_12 = FUNC_6(&VAR_10);
 VAR_5; FUNC_1(VAR_12, "mach_sync_ipc_link_monitoring_start");


 FUNC_9(VAR_9, VAR_10, VAR_3,
  (uint32_t)FUNC_4(VAR_7[VAR_0], 0, 0), 0);


 VAR_12 = FUNC_8(VAR_10, VAR_9);
 VAR_5;FUNC_1(VAR_12, "receive");


 FUNC_9(VAR_9, VAR_10, VAR_3,
  (uint32_t)FUNC_4(VAR_7[VAR_0], 0, 0), 0);


 VAR_12 = FUNC_8(VAR_10, VAR_9);
 VAR_5;FUNC_1(VAR_12, "receive");


 VAR_12 = FUNC_7(VAR_10, &VAR_11);
 VAR_5; FUNC_1(VAR_12, "mach_sync_ipc_link_monitoring_stop");

 if (!VAR_11)
  FUNC_3("Link was broken");
 else
  FUNC_3("Link correct");

 if (VAR_13 == 1)
  FUNC_2(VAR_11, "special reply port link after rcv");
 else
  FUNC_0(VAR_11, "special reply port link after rcv");
 VAR_4;
}
