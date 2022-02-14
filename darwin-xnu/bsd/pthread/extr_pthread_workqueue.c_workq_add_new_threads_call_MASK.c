
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct workqueue {int wq_thidlecount; int wq_nthreads; int wq_flags; int wq_thread_call_last_run; } ;
typedef void* proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct workqueue*,int ,int ,int ,int ) ;
 int FUNC_1 (struct workqueue*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,int ) ;
 struct workqueue* FUNC_5 (void*) ;
 int VAR_6 ;
 int FUNC_6 (struct workqueue*) ;
 int FUNC_7 (void*,struct workqueue*,int ) ;
 int FUNC_8 (struct workqueue*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_7, void *VAR_8)
{
 proc_t VAR_9 = VAR_7;
 struct workqueue *VAR_10 = FUNC_5(VAR_9);
 uint32_t VAR_11 = (uint32_t)(uintptr_t)VAR_8;





 if (!VAR_10) return;

 FUNC_2((VAR_11 == VAR_4) ||
   (VAR_11 == VAR_5));

 FUNC_0(VAR_2 | VAR_1, VAR_10, FUNC_1(VAR_10),
   VAR_10->wq_nthreads, VAR_10->wq_thidlecount, 0);

 FUNC_6(VAR_10);

 VAR_10->wq_thread_call_last_run = FUNC_3();
 FUNC_4(&VAR_10->wq_flags, ~VAR_11, VAR_6);


 FUNC_7(VAR_9, VAR_10, VAR_3);

 FUNC_8(VAR_10);

 FUNC_0(VAR_2 | VAR_0, VAR_10, 0,
   VAR_10->wq_nthreads, VAR_10->wq_thidlecount, 0);
}
