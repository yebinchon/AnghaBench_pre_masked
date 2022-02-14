
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wq_thactive_t ;
typedef int thread_qos_t ;
struct workqueue {int * wq_thscheduled_count; int wq_thactive; } ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_3(struct workqueue *VAR_1,
  thread_qos_t VAR_2, thread_qos_t VAR_3)
{
 wq_thactive_t VAR_4 = FUNC_1(VAR_3) -
   FUNC_1(VAR_2);
 FUNC_2(&VAR_1->wq_thactive, VAR_4, VAR_0);
 VAR_1->wq_thscheduled_count[FUNC_0(VAR_2)]--;
 VAR_1->wq_thscheduled_count[FUNC_0(VAR_3)]++;
}
