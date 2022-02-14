
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tBTA_SERVICE_MASK ;
struct TYPE_8__ {int * serv_handle; int serv_sec_mask; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
typedef int UINT8 ;
struct TYPE_9__ {TYPE_1__* profile; } ;
struct TYPE_7__ {int scn; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ,int ,int *,int *,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_6__ VAR_9 ;
 int * VAR_10 ;
 int FUNC_3 (TYPE_2__*) ;
 int * VAR_11 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int * VAR_12 ;

void FUNC_5(tBTA_AG_SCB *VAR_13, tBTA_SERVICE_MASK VAR_14)
{
    int VAR_15;

    VAR_14 >>= VAR_2;
    for (int VAR_16 = 0; VAR_16 < VAR_1 && VAR_14 != 0; VAR_16++, VAR_14 >>= 1) {

        if (VAR_14 & 1) {
            FUNC_1(VAR_5, "", VAR_11[VAR_16], VAR_13->serv_sec_mask,
                VAR_4, VAR_3, VAR_9.profile[VAR_16].scn);

            VAR_15 = FUNC_2(VAR_12[VAR_16], VAR_9.profile[VAR_16].scn,
                VAR_7, VAR_0, (UINT8 *) VAR_8, &(VAR_13->serv_handle[VAR_16]),
                VAR_10[FUNC_3(VAR_13) - 1]);

            if( VAR_15 == VAR_6 ) {
                FUNC_4(VAR_13, VAR_13->serv_handle[VAR_16]);
            } else {

                FUNC_0("bta_ag_start_servers: RFCOMM_CreateConnection returned error:%d", VAR_15);
            }
        }
    }
}
