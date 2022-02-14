
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_OOB_DATA ;
typedef int tBTA_IO_CAP ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int auth_req; int oob_data; int io_cap; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_CI_IO_REQ ;
typedef int tBTA_AUTH_REQ ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(BD_ADDR VAR_1, tBTA_IO_CAP VAR_2, tBTA_OOB_DATA VAR_3,
                      tBTA_AUTH_REQ VAR_4)

{
    tBTA_DM_CI_IO_REQ *VAR_5;

    if ((VAR_5 = (tBTA_DM_CI_IO_REQ *) FUNC_2(sizeof(tBTA_DM_CI_IO_REQ))) != ((void*)0)) {
        VAR_5->hdr.event = VAR_0;
        FUNC_0(VAR_5->bd_addr, VAR_1);
        VAR_5->io_cap = VAR_2;
        VAR_5->oob_data = VAR_3;
        VAR_5->auth_req = VAR_4;
        FUNC_1(VAR_5);
    }
}
