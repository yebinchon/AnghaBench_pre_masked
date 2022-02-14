
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uthread {int uu_workq_stackaddr; } ;
typedef int event_t ;



__attribute__((used)) static inline event_t
FUNC_0(struct uthread *VAR_0)
{
 return (event_t)&VAR_0->uu_workq_stackaddr;
}
