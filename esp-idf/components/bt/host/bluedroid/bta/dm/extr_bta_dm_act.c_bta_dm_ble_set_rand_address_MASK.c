
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_4__ {scalar_t__ addr_type; int (* p_set_rand_addr_cback ) (int ) ;int address; } ;
struct TYPE_5__ {TYPE_1__ set_addr; } ;
typedef TYPE_2__ tBTA_DM_MSG ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(tBTA_DM_MSG *VAR_2)
{
    tBTM_STATUS VAR_3 = VAR_1;
    if (VAR_2->set_addr.addr_type != VAR_0) {
        FUNC_0("Invalid random adress type = %d\n", VAR_2->set_addr.addr_type);
        if(VAR_2->set_addr.p_set_rand_addr_cback) {
            (*VAR_2->set_addr.p_set_rand_addr_cback)(VAR_3);
        }
        return;
    }

    VAR_3 = FUNC_1(VAR_2->set_addr.address);
    if(VAR_2->set_addr.p_set_rand_addr_cback) {
        (*VAR_2->set_addr.p_set_rand_addr_cback)(VAR_3);
    }

}
