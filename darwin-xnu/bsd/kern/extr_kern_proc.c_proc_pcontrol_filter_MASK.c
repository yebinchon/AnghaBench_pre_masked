
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct no_paging_space {scalar_t__ pcs_max_size; scalar_t__ npcs_max_size; int npcs_proc_count; int npcs_total_size; int npcs_uniqueid; int npcs_pid; int apcs_proc_count; int apcs_total_size; int pcs_proc_count; int pcs_total_size; int pcs_uniqueid; int pcs_pid; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int p_uniqueid; int p_pid; int task; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(proc_t VAR_0, void *VAR_1)
{
 struct no_paging_space *VAR_2;
 uint64_t VAR_3;

 VAR_2 = (struct no_paging_space *)VAR_1;

 VAR_3 = FUNC_2(VAR_0->task);

 if (FUNC_1(VAR_0)) {
  if (FUNC_0(VAR_0) == 0) {
   if (VAR_3 > VAR_2->pcs_max_size) {
    VAR_2->pcs_pid = VAR_0->p_pid;
    VAR_2->pcs_uniqueid = VAR_0->p_uniqueid;
    VAR_2->pcs_max_size = VAR_3;
   }
   VAR_2->pcs_total_size += VAR_3;
   VAR_2->pcs_proc_count++;
  } else {
   VAR_2->apcs_total_size += VAR_3;
   VAR_2->apcs_proc_count++;
  }
 } else {
  if (VAR_3 > VAR_2->npcs_max_size) {
   VAR_2->npcs_pid = VAR_0->p_pid;
   VAR_2->npcs_uniqueid = VAR_0->p_uniqueid;
   VAR_2->npcs_max_size = VAR_3;
  }
  VAR_2->npcs_total_size += VAR_3;
  VAR_2->npcs_proc_count++;

 }
 return (0);
}
