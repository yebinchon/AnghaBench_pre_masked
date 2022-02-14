
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* mt_device_t ;
struct TYPE_4__ {int (* mtd_reset ) () ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(mt_device_t VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->mtd_reset();
 return 0;
}
