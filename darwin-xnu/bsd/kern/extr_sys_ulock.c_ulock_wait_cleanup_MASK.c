
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ulk_addr; scalar_t__ ulk_pid; } ;
struct TYPE_7__ {scalar_t__ ull_nwaiters; scalar_t__ ull_owner; scalar_t__ ull_refcount; TYPE_1__ ull_key; } ;
typedef TYPE_2__ ull_t ;
typedef scalar_t__ thread_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(ull_t *VAR_1, thread_t VAR_2, thread_t VAR_3, int32_t *VAR_4)
{
 FUNC_3(VAR_1);

 thread_t VAR_5 = VAR_0;

 *VAR_4 = --VAR_1->ull_nwaiters;
 if (VAR_1->ull_nwaiters == 0) {





  VAR_5 = VAR_1->ull_owner;
  VAR_1->ull_owner = VAR_0;

  VAR_1->ull_key.ulk_pid = 0;
  VAR_1->ull_key.ulk_addr = 0;
  VAR_1->ull_refcount--;
  FUNC_0(VAR_1->ull_refcount > 0);
 }
 FUNC_4(VAR_1);


 FUNC_2();

 if (VAR_2 != VAR_0) {
  FUNC_1(VAR_2);
 }

 if (VAR_3 != VAR_0) {
  FUNC_1(VAR_3);
 }

 if (VAR_5 != VAR_0) {
  FUNC_1(VAR_5);
 }

 FUNC_0(*VAR_4 >= 0);
}
