
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef uintptr_t thread_t ;
struct TYPE_3__ {uintptr_t interlock; } ;
typedef TYPE_1__ lck_spin_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 uintptr_t VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 uintptr_t FUNC_1 () ;
 int FUNC_2 (char*,...) ;

void
FUNC_3(lck_spin_t *VAR_3, unsigned int VAR_4)
{
 thread_t VAR_5, VAR_6;
 uintptr_t VAR_7;

 if (FUNC_0(VAR_4 != VAR_1 && VAR_4 != VAR_0)) {
  FUNC_2("lck_spin_assert(): invalid arg (%u)", VAR_4);
 }

 VAR_7 = VAR_3->interlock;
 VAR_6 = (thread_t)VAR_7;
 VAR_5 = FUNC_1();
 if (VAR_4 == VAR_1) {
  if (FUNC_0(VAR_6 == VAR_2)) {
   FUNC_2("Lock not owned %p = %lx", VAR_3, VAR_7);
  }
  if (FUNC_0(VAR_6 != VAR_5)) {
   FUNC_2("Lock not owned by current thread %p = %lx", VAR_3, VAR_7);
  }
 } else if (VAR_4 == VAR_0) {
  if (FUNC_0(VAR_6 != VAR_2)) {
   if (VAR_6 == VAR_5) {
    FUNC_2("Lock owned by current thread %p = %lx", VAR_3, VAR_7);
   } else {
    FUNC_2("Lock %p owned by thread %p", VAR_3, VAR_6);
   }
  }
 }
}
