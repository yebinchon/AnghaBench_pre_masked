
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_6__ {scalar_t__ ftpc_rcount; scalar_t__ ftpc_acount; int ftpc_mtx; struct TYPE_6__* ftpc_next; int ftpc_pid; } ;
typedef TYPE_1__ fasttrap_proc_t ;
struct TYPE_7__ {int ftb_mtx; int ftb_data; } ;
typedef TYPE_2__ fasttrap_bucket_t ;
struct TYPE_8__ {TYPE_2__* fth_table; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(fasttrap_proc_t *VAR_2)
{
 fasttrap_bucket_t *VAR_3;
 fasttrap_proc_t *VAR_4, **VAR_5;
 pid_t VAR_6 = VAR_2->ftpc_pid;

 FUNC_4(&VAR_2->ftpc_mtx);

 FUNC_0(VAR_2->ftpc_rcount != 0);
 FUNC_0(VAR_2->ftpc_acount <= VAR_2->ftpc_rcount);

 if (--VAR_2->ftpc_rcount != 0) {
  FUNC_5(&VAR_2->ftpc_mtx);
  return;
 }

 FUNC_5(&VAR_2->ftpc_mtx);





  FUNC_0(VAR_2->ftpc_acount == 0);

 VAR_3 = &VAR_1.fth_table[FUNC_1(VAR_6)];
 FUNC_4(&VAR_3->ftb_mtx);

 VAR_5 = (fasttrap_proc_t **)&VAR_3->ftb_data;
 while ((VAR_4 = *VAR_5) != ((void*)0)) {
  if (VAR_4 == VAR_2)
   break;

  VAR_5 = &VAR_4->ftpc_next;
 }




 FUNC_0(VAR_4 != ((void*)0));

 *VAR_5 = VAR_4->ftpc_next;

 FUNC_5(&VAR_3->ftb_mtx);





 FUNC_3(&VAR_4->ftpc_mtx, VAR_0);

 FUNC_2(VAR_4, sizeof (fasttrap_proc_t));
}
