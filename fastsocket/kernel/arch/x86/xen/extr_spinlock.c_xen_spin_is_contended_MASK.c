
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_spinlock {scalar_t__ spinners; } ;
struct raw_spinlock {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct raw_spinlock *VAR_0)
{
 struct xen_spinlock *VAR_1 = (struct xen_spinlock *)VAR_0;



 return VAR_1->spinners != 0;
}
