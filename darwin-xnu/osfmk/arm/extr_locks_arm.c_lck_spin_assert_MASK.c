
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int thread_t ;
struct TYPE_3__ {scalar_t__ type; uintptr_t lck_spin_data; } ;
typedef TYPE_1__ lck_spin_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 uintptr_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(lck_spin_t *VAR_4, unsigned int VAR_5)
{
 thread_t VAR_6, VAR_7;
 uintptr_t VAR_8;

 if (VAR_4->type != VAR_3)
  FUNC_1("Invalid spinlock %p", VAR_4);

 VAR_8 = VAR_4->lck_spin_data;
 VAR_7 = (thread_t)(VAR_8 & ~VAR_2);
 VAR_6 = FUNC_0();
 if (VAR_5 == VAR_1) {
  if (VAR_7 == 0)
   FUNC_1("Lock not owned %p = %lx", VAR_4, VAR_8);
  if (VAR_7 != VAR_6)
   FUNC_1("Lock not owned by current thread %p = %lx", VAR_4, VAR_8);
  if ((VAR_8 & VAR_2) == 0)
   FUNC_1("Lock bit not set %p = %lx", VAR_4, VAR_8);
 } else if (VAR_5 == VAR_0) {
  if (VAR_7 != 0) {
   if (VAR_7 == VAR_6)
    FUNC_1("Lock owned by current thread %p = %lx", VAR_4, VAR_8);
   else
    FUNC_1("Lock %p owned by thread %p", VAR_4, VAR_7);
  }
  if (VAR_8 & VAR_2)
   FUNC_1("Lock bit set %p = %lx", VAR_4, VAR_8);
 } else
  FUNC_1("lck_spin_assert(): invalid arg (%u)", VAR_5);
}
