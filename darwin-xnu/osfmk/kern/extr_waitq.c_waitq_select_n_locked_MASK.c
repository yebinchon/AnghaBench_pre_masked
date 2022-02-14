
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int waitq_select_cb ;
typedef int uint64_t ;
struct waitq_select_args {void* select_ctx; int max_threads; int* nthreads; int * spl; int threadq; int * reserved_preposts; int select_cb; int event; struct waitq* waitq; struct waitq* posted_waitq; } ;
struct waitq {int dummy; } ;
typedef int spl_t ;
typedef int queue_t ;
typedef int event64_t ;


 int FUNC_0 (struct waitq_select_args*) ;

__attribute__((used)) static __inline__ int FUNC_1(struct waitq *VAR_0,
         event64_t VAR_1,
         waitq_select_cb VAR_2,
         void *VAR_3,
         uint64_t *VAR_4,
         queue_t VAR_5,
         int VAR_6, spl_t *VAR_7)
{
 int VAR_8 = 0;

 struct waitq_select_args VAR_9 = {
  .posted_waitq = VAR_0,
  .waitq = VAR_0,
  .event = VAR_1,
  .select_cb = VAR_2,
  .select_ctx = VAR_3,
  .reserved_preposts = VAR_4,
  .threadq = VAR_5,
  .max_threads = VAR_6,
  .nthreads = &VAR_8,
  .spl = VAR_7,
 };

 FUNC_0(&VAR_9);
 return VAR_8;
}
