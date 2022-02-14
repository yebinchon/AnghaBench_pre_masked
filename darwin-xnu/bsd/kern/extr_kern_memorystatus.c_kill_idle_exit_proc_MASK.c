
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* proc_t ;
typedef scalar_t__ os_reason_t ;
typedef int boolean_t ;
struct TYPE_10__ {scalar_t__ p_memstat_effectivepriority; int p_memstat_dirty; scalar_t__ p_memstat_idledeadline; int p_pid; char* p_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (unsigned int*,int ) ;
 TYPE_1__* FUNC_3 (unsigned int*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_11(void)
{
 proc_t VAR_10, VAR_11 = VAR_5;
 uint64_t VAR_12;
 boolean_t VAR_13 = VAR_0;
 unsigned int VAR_14 = 0;
 os_reason_t VAR_15 = VAR_4;


 VAR_12 = FUNC_0();

 VAR_15 = FUNC_4(VAR_3, VAR_2);
 if (VAR_15 == VAR_4) {
  FUNC_6("kill_idle_exit_proc: failed to allocate jetsam reason\n");
 }

 FUNC_7();

 VAR_10 = FUNC_2(&VAR_14, VAR_0);
 while (VAR_10) {

  if (VAR_10->p_memstat_effectivepriority != VAR_1) {
   break;
  }

  if ((VAR_10->p_memstat_dirty & (VAR_6|VAR_7|VAR_8)) == (VAR_6)) {
   if (VAR_12 >= VAR_10->p_memstat_idledeadline) {
    VAR_10->p_memstat_dirty |= VAR_8;
    VAR_11 = FUNC_9(VAR_10);
    break;
   }
  }

  VAR_10 = FUNC_3(&VAR_14, VAR_10, VAR_0);
 }

 FUNC_8();

 if (VAR_11) {
  FUNC_6("memorystatus: killing_idle_process pid %d [%s]\n", VAR_11->p_pid, (*VAR_11->p_name ? VAR_11->p_name : "unknown"));
  VAR_13 = FUNC_1(VAR_11, VAR_9, VAR_15);
  FUNC_10(VAR_11);
 } else {
  FUNC_5(VAR_15);
 }

 return VAR_13;
}
