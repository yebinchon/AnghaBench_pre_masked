
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct strip {int dev; TYPE_1__ idle_timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct strip *VAR_2)
{



 VAR_2->idle_timer.expires = VAR_1 + 1 * VAR_0;
 FUNC_0(&VAR_2->idle_timer);
 FUNC_1(VAR_2->dev);
}
