
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ timeout_ms; scalar_t__ error; int * response; int opcode; int datalen; int blklen; int data; int flags; int arg; } ;
typedef TYPE_2__ sdmmc_command_t ;
struct TYPE_7__ {scalar_t__ command_timeout_ms; int slot; scalar_t__ (* do_transaction ) (int,TYPE_2__*) ;} ;
struct TYPE_9__ {TYPE_1__ host; } ;
typedef TYPE_3__ sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,int ,scalar_t__) ;
 int FUNC_1 (int ,char*,int,int ,int ,int ,scalar_t__,int,...) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int,TYPE_2__*) ;

esp_err_t FUNC_4(sdmmc_card_t* VAR_2, sdmmc_command_t* VAR_3)
{
    if (VAR_2->host.command_timeout_ms != 0) {
        VAR_3->timeout_ms = VAR_2->host.command_timeout_ms;
    } else if (VAR_3->timeout_ms == 0) {
        VAR_3->timeout_ms = VAR_0;
    }

    int VAR_4 = VAR_2->host.slot;
    FUNC_1(VAR_1, "sending cmd slot=%d op=%d arg=%x flags=%x data=%p blklen=%d datalen=%d timeout=%d",
            VAR_4, VAR_3->opcode, VAR_3->arg, VAR_3->flags, VAR_3->data, VAR_3->blklen, VAR_3->datalen, VAR_3->timeout_ms);
    esp_err_t VAR_5 = (*VAR_2->host.do_transaction)(VAR_4, VAR_3);
    if (VAR_5 != 0) {
        FUNC_0(VAR_1, "cmd=%d, sdmmc_req_run returned 0x%x", VAR_3->opcode, VAR_5);
        return VAR_5;
    }
    int VAR_6 = FUNC_2(VAR_3->response);
    FUNC_1(VAR_1, "cmd response %08x %08x %08x %08x err=0x%x state=%d",
               VAR_3->response[0],
               VAR_3->response[1],
               VAR_3->response[2],
               VAR_3->response[3],
               VAR_3->error,
               VAR_6);
    return VAR_3->error;
}
