
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ cryptocop_queue_priority ;
struct TYPE_2__ {int jobs; scalar_t__ prio; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_3;

 FUNC_0(&VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++){
  VAR_1[VAR_3].prio = (cryptocop_queue_priority)VAR_3;
  FUNC_0(&VAR_1[VAR_3].jobs);
 }
 return 0;
}
