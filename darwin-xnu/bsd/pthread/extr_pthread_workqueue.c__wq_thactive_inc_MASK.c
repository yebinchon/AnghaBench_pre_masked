
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wq_thactive_t ;
typedef int thread_qos_t ;
struct workqueue {int wq_thactive; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline wq_thactive_t
FUNC_2(struct workqueue *VAR_1, thread_qos_t VAR_2)
{
 wq_thactive_t VAR_3 = FUNC_0(VAR_2);
 return FUNC_1(&VAR_1->wq_thactive, VAR_3, VAR_0);
}
