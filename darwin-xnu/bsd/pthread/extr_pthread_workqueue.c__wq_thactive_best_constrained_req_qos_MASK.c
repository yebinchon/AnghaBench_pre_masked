
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wq_thactive_t ;
typedef int thread_qos_t ;
struct workqueue {int wq_thactive; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline thread_qos_t
FUNC_1(struct workqueue *VAR_0)
{


 wq_thactive_t VAR_1 = *(wq_thactive_t *)&VAR_0->wq_thactive;
 return FUNC_0(VAR_1);
}
