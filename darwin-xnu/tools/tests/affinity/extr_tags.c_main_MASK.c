
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_act_t ;
typedef int mach_port_name_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int,scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int,char**,char*) ;
 char* VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int ) ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int ,int,int *) ;
 scalar_t__ FUNC_13 (int ,int**,int*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 () ;
 void* VAR_8 ;

int
FUNC_17(int VAR_9, char *VAR_10[])
{
 kern_return_t VAR_11;
 mach_port_name_t VAR_12;
 int VAR_13;
 int VAR_14;
 thread_act_t *VAR_15;
 mach_msg_type_number_t VAR_16;
 int VAR_17;
 boolean_t VAR_18 = VAR_0;
 int VAR_19;

 if (FUNC_6() != 0) {
  FUNC_10("Must be run as root\n");
  FUNC_2(1);
 }


 while ((VAR_14 = FUNC_7 (VAR_9, VAR_10, "hiv:")) != -1) {
  switch (VAR_14) {
  case 'i':
   VAR_18 = VAR_2;
   break;
  case 'v':
   VAR_8 = FUNC_0(VAR_4);
   break;
  case 'h':
  case '?':
  default:
   FUNC_16();
  }
 }
 VAR_9 -= VAR_5; VAR_10 += VAR_5;
 if (VAR_9 > 0)
  VAR_13 = FUNC_0(*VAR_10);

 VAR_11 = FUNC_12(FUNC_8(), VAR_13, &VAR_12);
 if (VAR_11 != VAR_1)
  FUNC_1(1, "task_for_pid(,%d,) returned %d", VAR_13, VAR_11);

 FUNC_9("task %p\n", VAR_12);
 VAR_11 = FUNC_13(VAR_12, &VAR_15, &VAR_16);
 if (VAR_11 != VAR_1)
  FUNC_1(1, "task_threads() returned %d", VAR_13, VAR_11);

 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  FUNC_10(" %d: thread 0x%08x tag %d\n",
   VAR_17, VAR_15[VAR_17], FUNC_14(VAR_15[VAR_17]));
 }

 while (VAR_18) {
  FUNC_10("Enter new tag or <return> to skip or ^D to quit\n");
  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
   VAR_19 = FUNC_14(VAR_15[VAR_17]);
   FUNC_10(" %d: thread 0x%08x tag %d: ",
    VAR_17, VAR_15[VAR_17], VAR_19);
   FUNC_4(VAR_7);
   (void) FUNC_5(VAR_3, 20, VAR_6);
   if (FUNC_3(VAR_6)) {
    FUNC_10("\n");
    VAR_18 = VAR_0;
    break;
   }
   if (FUNC_11(VAR_3) > 1) {
    VAR_19 = FUNC_0(VAR_3);
    FUNC_15(VAR_15[VAR_17], VAR_19);
   }
  }
 }

 return 0;
}
