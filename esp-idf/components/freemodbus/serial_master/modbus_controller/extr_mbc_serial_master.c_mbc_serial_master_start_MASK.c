
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int mbm_event_group; int mbm_comm; } ;
typedef TYPE_1__ mb_master_options_t ;
struct TYPE_5__ {scalar_t__ parity; scalar_t__ baudrate; scalar_t__ port; scalar_t__ mode; } ;
typedef TYPE_2__ mb_communication_info_t ;
typedef int esp_err_t ;
typedef int eMBParity ;
typedef int eMBMode ;
typedef scalar_t__ eMBErrorCode ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_6__ {TYPE_1__ opts; } ;
typedef int EventBits_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,char*,...) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 TYPE_3__* VAR_5 ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static esp_err_t FUNC_4(void)
{
    FUNC_0((VAR_5 != ((void*)0)),
                    VAR_0,
                    "Master interface uninitialized.");
    eMBErrorCode VAR_6 = VAR_2;
    mb_master_options_t* VAR_7 = &VAR_5->opts;
    const mb_communication_info_t* VAR_8 = (mb_communication_info_t*)&VAR_7->mbm_comm;


    VAR_6 = FUNC_2((eMBMode)VAR_8->mode, (UCHAR)VAR_8->port,
                            (ULONG)VAR_8->baudrate, (eMBParity)VAR_8->parity);
    FUNC_0((VAR_6 == VAR_3), VAR_0,
            "mb stack initialization failure, eMBInit() returns (0x%x).", VAR_6);
    VAR_6 = FUNC_1();
    FUNC_0((VAR_6 == VAR_3), VAR_0,
            "mb stack set slave ID failure, eMBEnable() returned (0x%x).", (uint32_t)VAR_6);

    EventBits_t VAR_9 = FUNC_3(VAR_7->mbm_event_group,
                                            (EventBits_t)VAR_4);
    FUNC_0((VAR_9 & VAR_4),
                VAR_0, "mb stack start event set error.");
    return VAR_1;
}
