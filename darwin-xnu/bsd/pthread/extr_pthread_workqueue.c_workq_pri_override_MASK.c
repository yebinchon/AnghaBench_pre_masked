
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_qos_t ;
struct uu_workq_policy {int qos_bucket; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct uu_workq_policy) ;

__attribute__((used)) static inline thread_qos_t
FUNC_2(struct uu_workq_policy VAR_0)
{
 return FUNC_0(FUNC_1(VAR_0), VAR_0.qos_bucket);
}
