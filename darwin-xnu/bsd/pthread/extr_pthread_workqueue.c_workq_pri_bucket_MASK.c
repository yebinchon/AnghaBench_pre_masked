
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_qos_t ;
struct uu_workq_policy {int qos_override; int qos_max; int qos_req; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline thread_qos_t
FUNC_1(struct uu_workq_policy VAR_0)
{
 return FUNC_0(FUNC_0(VAR_0.qos_req, VAR_0.qos_max), VAR_0.qos_override);
}
