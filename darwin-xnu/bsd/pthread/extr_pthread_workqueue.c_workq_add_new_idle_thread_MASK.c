
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_map_t ;
typedef int thread_t ;
struct workqueue {int wq_nthreads; int wq_thnewlist; int wq_thidlecount; int wq_creations; } ;
struct uthread {int uu_workq_stackaddr; } ;
typedef TYPE_1__* proc_t ;
typedef int mach_vm_offset_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_7__ {scalar_t__ (* workq_create_threadstack ) (TYPE_1__*,int ,int *) ;int (* workq_destroy_threadstack ) (TYPE_1__*,int ,int ) ;} ;
struct TYPE_6__ {int task; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct uthread*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,struct workqueue*,scalar_t__,int,int ,int ) ;
 struct uthread* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_5__* VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_7 (struct workqueue*) ;
 int FUNC_8 (struct workqueue*) ;
 int VAR_6 ;

__attribute__((used)) static bool
FUNC_9(proc_t VAR_7, struct workqueue *VAR_8)
{
 mach_vm_offset_t VAR_9;
 kern_return_t VAR_10;
 thread_t VAR_11;

 VAR_8->wq_nthreads++;

 FUNC_8(VAR_8);

 vm_map_t VAR_12 = FUNC_3(VAR_7->task);

 VAR_10 = VAR_4->workq_create_threadstack(VAR_7, VAR_12, &VAR_9);
 if (VAR_10 != VAR_1) {
  FUNC_1(VAR_3 | VAR_0, VAR_8,
    VAR_10, 1, 0, 0);
  goto out;
 }

 VAR_10 = FUNC_6(VAR_7->task, VAR_6, &VAR_11);
 if (VAR_10 != VAR_1) {
  FUNC_1(VAR_3 | VAR_0, VAR_8,
    VAR_10, 0, 0, 0);
  VAR_4->workq_destroy_threadstack(VAR_7, VAR_12, VAR_9);
  goto out;
 }




 struct uthread *VAR_13 = FUNC_2(VAR_11);

 VAR_8->wq_creations++;
 VAR_8->wq_thidlecount++;
 VAR_13->uu_workq_stackaddr = VAR_9;
 FUNC_0(&VAR_8->wq_thnewlist, VAR_13, VAR_5);

 FUNC_1(VAR_2 | VAR_0, VAR_8, 0, 0, 0, 0);
 return 1;

out:
 FUNC_7(VAR_8);





 VAR_8->wq_nthreads--;
 return 0;
}
