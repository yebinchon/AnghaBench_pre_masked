
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int * function; scalar_t__ expires; } ;
struct ioc3_private {TYPE_1__ ioc3_timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct ioc3_private *VAR_3)
{
 VAR_3->ioc3_timer.expires = VAR_2 + (12 * VAR_0)/10;
 VAR_3->ioc3_timer.data = (unsigned long) VAR_3;
 VAR_3->ioc3_timer.function = &VAR_1;
 FUNC_0(&VAR_3->ioc3_timer);
}
