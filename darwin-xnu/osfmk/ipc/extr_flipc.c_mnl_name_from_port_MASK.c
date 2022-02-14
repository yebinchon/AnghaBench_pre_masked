
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int mnl_name_t ;
typedef TYPE_5__* ipc_port_t ;
typedef TYPE_6__* flipc_port_t ;
struct TYPE_13__ {int name; } ;
struct TYPE_15__ {TYPE_4__ obj; } ;
struct TYPE_10__ {TYPE_6__* fport; } ;
struct TYPE_11__ {TYPE_1__ port; } ;
struct TYPE_12__ {TYPE_2__ data; } ;
struct TYPE_14__ {TYPE_3__ ip_messages; } ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_0 ;

__attribute__((used)) static inline mnl_name_t FUNC_2(ipc_port_t VAR_1)
{
    mnl_name_t VAR_2 = VAR_0;

    if (FUNC_1(VAR_1)) {
        flipc_port_t VAR_3 = VAR_1->ip_messages.data.port.fport;
        if (FUNC_0(VAR_3))
            VAR_2 = VAR_3->obj.name;
    }
    return VAR_2;
}
