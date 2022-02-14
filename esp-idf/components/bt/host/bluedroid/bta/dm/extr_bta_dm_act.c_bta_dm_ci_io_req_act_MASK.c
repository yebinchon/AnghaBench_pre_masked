
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_AUTH_REQ ;
struct TYPE_4__ {int oob_data; int io_cap; int bd_addr; scalar_t__ auth_req; } ;
struct TYPE_5__ {TYPE_1__ ci_io_req; } ;
typedef TYPE_2__ tBTA_DM_MSG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(tBTA_DM_MSG *VAR_2)
{
    tBTM_AUTH_REQ VAR_3 = VAR_0;
    if (VAR_2->ci_io_req.auth_req) {
        VAR_3 = VAR_1;
    }
    FUNC_0(VAR_2->ci_io_req.bd_addr, VAR_2->ci_io_req.io_cap,
                 VAR_2->ci_io_req.oob_data, VAR_3);
}
