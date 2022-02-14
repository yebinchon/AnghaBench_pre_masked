
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* proc_t ;
struct TYPE_10__ {scalar_t__ limit; int state; int user_data; int priority; int pid; } ;
typedef TYPE_2__ memorystatus_priority_entry_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {scalar_t__ p_memstat_memlimit; int task; int p_memstat_userdata; int p_memstat_effectivepriority; int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int*,int ) ;
 TYPE_1__* FUNC_4 (int*,TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*,int ,size_t) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_9(memorystatus_priority_entry_t **VAR_4, size_t *VAR_5, size_t *VAR_6, boolean_t VAR_7)
{
  uint32_t VAR_8, VAR_9 = 0;
 memorystatus_priority_entry_t *VAR_10;
 proc_t VAR_11;

  VAR_8 = VAR_3;
 *VAR_6 = sizeof(memorystatus_priority_entry_t) * VAR_8;


 if (VAR_7) {
  return 0;
 }


 if (*VAR_5 < *VAR_6) {
  return VAR_0;
 }

  *VAR_4 = (memorystatus_priority_entry_t*)FUNC_1(*VAR_6);
 if (!*VAR_4) {
  return VAR_1;
 }

 FUNC_5(*VAR_4, 0, *VAR_6);

 *VAR_5 = *VAR_6;
 *VAR_6 = 0;

 VAR_10 = *VAR_4;

 FUNC_6();

 VAR_11 = FUNC_3(&VAR_9, VAR_2);
 while (VAR_11 && (*VAR_6 < *VAR_5)) {
  VAR_10->pid = VAR_11->p_pid;
  VAR_10->priority = VAR_11->p_memstat_effectivepriority;
  VAR_10->user_data = VAR_11->p_memstat_userdata;

  if (VAR_11->p_memstat_memlimit <= 0) {
                        FUNC_8(VAR_11->task, &VAR_10->limit);
                } else {
                        VAR_10->limit = VAR_11->p_memstat_memlimit;
                }

  VAR_10->state = FUNC_2(VAR_11);
  VAR_10++;

  *VAR_6 += sizeof(memorystatus_priority_entry_t);

  VAR_11 = FUNC_4(&VAR_9, VAR_11, VAR_2);
 }

 FUNC_7();

 FUNC_0(1, "memorystatus_get_priority_list: returning %lu for size\n", (unsigned long)*VAR_6);

 return 0;
}
