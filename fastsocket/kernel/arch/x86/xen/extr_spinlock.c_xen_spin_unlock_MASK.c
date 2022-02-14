
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_spinlock {int spinners; scalar_t__ lock; } ;
struct raw_spinlock {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct xen_spinlock*) ;

__attribute__((used)) static void FUNC_5(struct raw_spinlock *VAR_1)
{
 struct xen_spinlock *VAR_2 = (struct xen_spinlock *)VAR_1;

 FUNC_0(VAR_0, 1);

 FUNC_2();
 VAR_2->lock = 0;







 FUNC_1();

 if (FUNC_3(VAR_2->spinners))
  FUNC_4(VAR_2);
}
