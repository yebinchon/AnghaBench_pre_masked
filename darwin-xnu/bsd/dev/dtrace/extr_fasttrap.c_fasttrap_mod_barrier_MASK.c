
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int cpuc_pid_lock; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(uint64_t VAR_3)
{
 unsigned int VAR_4;

 if (VAR_3 < VAR_2)
  return;

 VAR_2++;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(&VAR_1[VAR_4].cpuc_pid_lock);
  FUNC_1(&VAR_1[VAR_4].cpuc_pid_lock);
 }
}
