
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int event_t ;
struct TYPE_2__ {int memorystatus_wakeup; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_2 = 0;
 int VAR_3 = FUNC_0(&VAR_0);


 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  FUNC_1((event_t)&VAR_1[VAR_2].memorystatus_wakeup);
 }
}
