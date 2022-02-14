
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int user_addr_t ;
typedef TYPE_1__* proc_t ;
typedef scalar_t__ pid_t ;
struct TYPE_9__ {scalar_t__ limit; int state; int user_data; int priority; int pid; } ;
typedef TYPE_2__ memorystatus_priority_entry_t ;
struct TYPE_8__ {scalar_t__ p_memstat_memlimit; int task; int p_memstat_userdata; int p_memstat_effectivepriority; int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_6(pid_t VAR_3, user_addr_t VAR_4, size_t VAR_5) {
        int VAR_6 = 0;
        memorystatus_priority_entry_t VAR_7;


        if ((VAR_3 == 0) || (VAR_4 == VAR_2) || (VAR_5 != sizeof(memorystatus_priority_entry_t))) {
                return VAR_0;
        }

 proc_t VAR_8 = FUNC_3(VAR_3);
        if (!VAR_8) {
                return VAR_1;
        }

        FUNC_2 (&VAR_7, 0, sizeof(memorystatus_priority_entry_t));

        VAR_7.pid = VAR_8->p_pid;
        VAR_7.priority = VAR_8->p_memstat_effectivepriority;
        VAR_7.user_data = VAR_8->p_memstat_userdata;
        if (VAR_8->p_memstat_memlimit <= 0) {
                FUNC_5(VAR_8->task, &VAR_7.limit);
        } else {
                VAR_7.limit = VAR_8->p_memstat_memlimit;
        }
        VAR_7.state = FUNC_1(VAR_8);

        FUNC_4(VAR_8);

        VAR_6 = FUNC_0(&VAR_7, VAR_4, VAR_5);

 return (VAR_6);
}
