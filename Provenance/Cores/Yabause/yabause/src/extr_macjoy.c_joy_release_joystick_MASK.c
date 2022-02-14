
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hats; scalar_t__ axes; scalar_t__ buttons; TYPE_2__** iface; } ;
typedef TYPE_1__ joydata_t ;
struct TYPE_5__ {int (* Release ) (TYPE_2__**) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__**) ;

__attribute__((used)) static void FUNC_2(joydata_t *VAR_0) {
    (*VAR_0->iface)->Release(VAR_0->iface);

    VAR_0->iface = ((void*)0);

    if(VAR_0->buttons)
        FUNC_0(VAR_0->buttons);

    if(VAR_0->axes)
        FUNC_0(VAR_0->axes);

    if(VAR_0->hats)
        FUNC_0(VAR_0->hats);
}
