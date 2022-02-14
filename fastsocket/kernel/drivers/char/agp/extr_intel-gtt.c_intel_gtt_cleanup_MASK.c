
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int registers; int gtt; TYPE_1__* driver; } ;
struct TYPE_3__ {int (* cleanup ) () ;} ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{
 VAR_0.driver->cleanup();

 FUNC_1(VAR_0.gtt);
 FUNC_1(VAR_0.registers);

 FUNC_0();
}
