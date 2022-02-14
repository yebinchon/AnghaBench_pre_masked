
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* api; } ;
struct TYPE_4__ {int (* destroy_cm_core ) (TYPE_2__*) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(void)
{
 VAR_0->api->destroy_cm_core(VAR_0);
 return 0;
}
