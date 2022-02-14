
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mnl_name_t ;
typedef int ipc_port_t ;
typedef TYPE_1__* flipc_port_t ;
struct TYPE_3__ {int lport; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline ipc_port_t FUNC_3(mnl_name_t VAR_1)
{
    ipc_port_t VAR_2 = VAR_0;

    if (FUNC_1(VAR_1)) {
        flipc_port_t VAR_3 = (flipc_port_t)FUNC_2(VAR_1);
        if (FUNC_0(VAR_3))
            VAR_2 = VAR_3->lport;
    }
    return VAR_2;
}
