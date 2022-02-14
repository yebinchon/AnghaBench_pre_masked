
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; scalar_t__ expires; int * function; } ;
struct controller {TYPE_1__ poll_timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct controller *VAR_3, int VAR_4)
{

 if ((VAR_4 <= 0) || (VAR_4 > 60))
         VAR_4 = 2;

 VAR_3->poll_timer.function = &VAR_1;
 VAR_3->poll_timer.data = (unsigned long)VAR_3;
 VAR_3->poll_timer.expires = VAR_2 + VAR_4 * VAR_0;
 FUNC_0(&VAR_3->poll_timer);
}
