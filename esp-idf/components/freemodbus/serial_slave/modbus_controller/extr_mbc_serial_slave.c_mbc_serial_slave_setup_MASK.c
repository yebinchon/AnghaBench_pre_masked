
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int mbs_comm; } ;
typedef TYPE_1__ mb_slave_options_t ;
struct TYPE_5__ {scalar_t__ mode; scalar_t__ slave_addr; scalar_t__ port; scalar_t__ parity; } ;
typedef TYPE_2__ mb_slave_comm_info_t ;
typedef int mb_communication_info_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_1__ opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int ,char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* VAR_8 ;

__attribute__((used)) static esp_err_t FUNC_1(void* VAR_9)
{
    FUNC_0((VAR_8 != ((void*)0)),
                    VAR_1,
                    "Slave interface is not correctly initialized.");
    FUNC_0((VAR_9 != ((void*)0)), VAR_0,
                    "mb wrong communication settings.");
    mb_slave_options_t* VAR_10 = &VAR_8->opts;
    mb_slave_comm_info_t* VAR_11 = (mb_slave_comm_info_t*)VAR_9;
    FUNC_0(((VAR_11->mode == VAR_5) || (VAR_11->mode == VAR_4)),
                VAR_0, "mb incorrect mode = (0x%x).",
                (uint32_t)VAR_11->mode);
    FUNC_0((VAR_11->slave_addr <= VAR_3),
                VAR_0, "mb wrong slave address = (0x%x).",
                (uint32_t)VAR_11->slave_addr);
    FUNC_0((VAR_11->port < VAR_6), VAR_0,
                "mb wrong port to set = (0x%x).", (uint32_t)VAR_11->port);
    FUNC_0((VAR_11->parity <= VAR_7), VAR_0,
                "mb wrong parity option = (0x%x).", (uint32_t)VAR_11->parity);


    VAR_10->mbs_comm = *(mb_communication_info_t*)VAR_11;
    return VAR_2;
}
