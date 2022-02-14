
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
struct TYPE_7__ {int lck_mtx_data; } ;
typedef TYPE_1__ lck_mtx_t ;
typedef int boolean_t ;


 int VAR_0 ;
 uintptr_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;
 uintptr_t FUNC_7 (TYPE_1__*) ;

void
FUNC_8(lck_mtx_t *VAR_6)
{
 thread_t VAR_7 = FUNC_4();
 uintptr_t VAR_8;
 boolean_t VAR_9 = VAR_0;

 FUNC_6(VAR_6);

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8 & VAR_1) {
  if(FUNC_0(VAR_8) == (thread_t)VAR_2)
   VAR_9 = VAR_4;
  goto slow_case;
 }

 if (FUNC_3(&VAR_6->lck_mtx_data, FUNC_1(VAR_7), 0,
     VAR_5, VAR_0)) {



  return;
 }
slow_case:
 FUNC_5(VAR_6, VAR_7, VAR_9);
}
