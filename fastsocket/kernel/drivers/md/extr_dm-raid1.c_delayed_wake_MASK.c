
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; scalar_t__ expires; } ;
struct mirror_set {TYPE_1__ timer; int timer_pending; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct mirror_set *VAR_3)
{
 if (FUNC_1(0, &VAR_3->timer_pending))
  return;

 VAR_3->timer.expires = VAR_2 + VAR_0 / 5;
 VAR_3->timer.data = (unsigned long) VAR_3;
 VAR_3->timer.function = VAR_1;
 FUNC_0(&VAR_3->timer);
}
