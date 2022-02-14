
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lockedBy; } ;
typedef TYPE_1__ timer_list_t ;
typedef int int64_t ;


 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(timer_list_t* VAR_0) {
  int64_t VAR_1 = FUNC_2();
  int VAR_2 = 0;
  while (FUNC_0(&(VAR_0->lockedBy), 0, VAR_1) != 0) {
    if (++VAR_2 % 1000 == 0) {
      FUNC_1();
    }
  }
}
