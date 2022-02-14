
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wq_thactive_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ thread_qos_t ;
struct workqueue {int* wq_thscheduled_count; int * wq_lastblocked_ts; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static inline uint32_t
FUNC_4(struct workqueue *VAR_6, wq_thactive_t VAR_7,
  thread_qos_t VAR_8, uint32_t *VAR_9, uint32_t *VAR_10)
{
 uint32_t VAR_11 = 0, VAR_12;
 uint64_t VAR_13;

 FUNC_1(VAR_3 <= VAR_8 && VAR_8 <= VAR_2);

 if (VAR_9) {
  VAR_13 = FUNC_2();
  *VAR_9 = 0;
 }
 if (VAR_10) {
  *VAR_10 = VAR_0 - VAR_8;
 }

 int VAR_14 = FUNC_0(VAR_8);
 VAR_7 >>= VAR_14 * VAR_5;
 for (; VAR_14 < VAR_1; VAR_14++, VAR_7 >>= VAR_5) {
  VAR_12 = VAR_7 & VAR_4;
  VAR_11 += VAR_12;

  if (VAR_9 && VAR_6->wq_thscheduled_count[VAR_14] > VAR_12) {
   if (FUNC_3(VAR_13, &VAR_6->wq_lastblocked_ts[VAR_14])) {






    (*VAR_9)++;
   }
  }
 }

 return VAR_11;
}
