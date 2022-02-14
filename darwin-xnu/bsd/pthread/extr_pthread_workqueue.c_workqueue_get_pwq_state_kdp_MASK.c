
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct workqueue {scalar_t__ wq_constrained_threads_scheduled; scalar_t__ wq_nthreads; } ;
typedef void* proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct workqueue* FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct workqueue*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

uint32_t
FUNC_3(void * VAR_8)
{
 FUNC_1((VAR_0 << 17) ==
   VAR_3);
 FUNC_1((VAR_1 << 17) ==
   VAR_4);
 FUNC_1((VAR_2 << 17) == VAR_5);
 FUNC_1((VAR_2 | VAR_1 |
    VAR_0) == 0x7);

 if (VAR_8 == ((void*)0)) {
  return 0;
 }

 proc_t VAR_9 = VAR_8;
 struct workqueue *VAR_10 = FUNC_0(VAR_9);

 if (VAR_10 == ((void*)0) || FUNC_2(VAR_10)) {
  return 0;
 }

 uint32_t VAR_11 = VAR_2;

 if (VAR_10->wq_constrained_threads_scheduled >= VAR_6) {
  VAR_11 |= VAR_0;
 }

 if (VAR_10->wq_nthreads >= VAR_7) {
  VAR_11 |= VAR_1;
 }

 return VAR_11;
}
