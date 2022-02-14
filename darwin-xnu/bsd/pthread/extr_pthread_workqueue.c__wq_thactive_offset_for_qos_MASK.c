
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wq_thactive_t ;
typedef int thread_qos_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline wq_thactive_t
FUNC_1(thread_qos_t VAR_1)
{
 return (wq_thactive_t)1 << (FUNC_0(VAR_1) * VAR_0);
}
