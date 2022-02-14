
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int mbm_comm; } ;
typedef TYPE_1__ mb_master_options_t ;
struct TYPE_5__ {scalar_t__ mode; scalar_t__ port; scalar_t__ parity; } ;
typedef TYPE_2__ mb_master_comm_info_t ;
typedef int mb_communication_info_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_1__ opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__* VAR_7 ;

__attribute__((used)) static esp_err_t FUNC_1(void* VAR_8)
{
    FUNC_0((VAR_7 != ((void*)0)),
                    VAR_1,
                    "Master interface uninitialized.");
    mb_master_options_t* VAR_9 = &VAR_7->opts;

    const mb_master_comm_info_t* VAR_10 = (mb_master_comm_info_t*)VAR_8;

    FUNC_0(((VAR_10->mode == VAR_4) || (VAR_10->mode == VAR_3)),
                VAR_0, "mb incorrect mode = (0x%x).",
                (uint32_t)VAR_10->mode);
    FUNC_0((VAR_10->port < VAR_5), VAR_0,
                "mb wrong port to set = (0x%x).", (uint32_t)VAR_10->port);
    FUNC_0((VAR_10->parity <= VAR_6), VAR_0,
                "mb wrong parity option = (0x%x).", (uint32_t)VAR_10->parity);

    VAR_9->mbm_comm = *(mb_communication_info_t*)VAR_10;
    return VAR_2;
}
