
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* instance; } ;
typedef TYPE_1__ mdns_service_t ;
struct TYPE_5__ {char const* instance; char const* hostname; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static const char * FUNC_1(mdns_service_t * VAR_1)
{
    if (VAR_1 && !FUNC_0(VAR_1->instance)) {
        return VAR_1->instance;
    }

    if (VAR_0 && !FUNC_0(VAR_0->instance)) {
        return VAR_0->instance;
    }

    if (VAR_0 && !FUNC_0(VAR_0->hostname)) {
        return VAR_0->hostname;
    }

    return ((void*)0);
}
