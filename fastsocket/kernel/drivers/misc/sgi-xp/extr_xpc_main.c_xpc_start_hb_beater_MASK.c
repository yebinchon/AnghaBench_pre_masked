
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* heartbeat_init ) () ;} ;
struct TYPE_4__ {int (* function ) (int ) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{
 VAR_0.heartbeat_init();
 FUNC_0(&VAR_1);
 VAR_1.function = FUNC_2;
 FUNC_2(0);
}
