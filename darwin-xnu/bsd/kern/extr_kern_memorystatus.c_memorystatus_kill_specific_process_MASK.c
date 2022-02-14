
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
typedef TYPE_1__* proc_t ;
typedef int pid_t ;
typedef int os_reason_t ;
typedef int clock_usec_t ;
typedef scalar_t__ clock_sec_t ;
typedef int boolean_t ;
struct TYPE_6__ {char* p_name; int p_memstat_effectivepriority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__*,int*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,size_t,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (TYPE_1__*,size_t,int ) ;
 int FUNC_5 (int ,char*,unsigned long,size_t,int ,char*,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_11(pid_t VAR_5, uint32_t VAR_6, os_reason_t VAR_7) {
 boolean_t VAR_8;
 proc_t VAR_9;
 uint64_t VAR_10 = 0;
        clock_sec_t VAR_11;
        clock_usec_t VAR_12;
        uint32_t VAR_13;



 VAR_9 = FUNC_7(VAR_5);
 if (!VAR_9) {
  FUNC_6(VAR_7);
  return VAR_0;
 }

 FUNC_8();

 if (VAR_3 == 0) {
  FUNC_3(((void*)0),0);
 }

 VAR_10 = FUNC_1();
        FUNC_0(VAR_10, &VAR_11, &VAR_12);
        VAR_13 = VAR_12 / 1000;

 FUNC_4(VAR_9, VAR_6, VAR_10);

 FUNC_9();

 FUNC_5(VAR_1, "%lu.%03d memorystatus: killing_specific_process pid %d [%s] (%s %d) - memorystatus_available_pages: %llu\n",
        (unsigned long)VAR_11, VAR_13, VAR_5, (*VAR_9->p_name ? VAR_9->p_name : "unknown"),
        VAR_4[VAR_6], VAR_9->p_memstat_effectivepriority, (uint64_t)VAR_2);

 VAR_8 = FUNC_2(VAR_9, VAR_6, VAR_7);
 FUNC_10(VAR_9);

 return VAR_8;
}
