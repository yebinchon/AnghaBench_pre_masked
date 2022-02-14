
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int thread_t ;
typedef TYPE_1__* hw_lock_t ;
struct TYPE_7__ {int lock_data; } ;


 int VAR_0 ;
 uintptr_t FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ,uintptr_t,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (TYPE_1__*,uintptr_t,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,uintptr_t) ;

unsigned int
FUNC_8(hw_lock_t VAR_5, uint64_t VAR_6)
{
 thread_t VAR_7;
 uintptr_t VAR_8;
 unsigned int VAR_9 = 0;

 VAR_7 = FUNC_3();
 FUNC_4(VAR_7);
 VAR_8 = FUNC_0(VAR_7) | VAR_2;
 (void)VAR_6;
 if (FUNC_6(VAR_5) == 0) {
  FUNC_7(VAR_5, VAR_8);
  VAR_9 = 1;
 }





 return VAR_9;
}
