
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_SERVICE_MASK ;
struct TYPE_6__ {scalar_t__ dealloc; int reg_services; scalar_t__ in_use; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
struct TYPE_7__ {TYPE_1__* profile; TYPE_2__* scb; } ;
struct TYPE_5__ {scalar_t__ sdp_handle; int scn; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 TYPE_4__ VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_5 (int ) ;

void FUNC_6(tBTA_AG_SCB *VAR_6, tBTA_AG_DATA *VAR_7)
{
    tBTA_AG_SCB *VAR_8 = &VAR_3.scb[0];
    tBTA_SERVICE_MASK VAR_9;
    tBTA_SERVICE_MASK VAR_10 = 0;
    int VAR_11;
    FUNC_4(VAR_7);


    for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++, VAR_8++) {
        if (VAR_6 == VAR_8) {
            continue;
        }
        if (VAR_8->in_use && VAR_8->dealloc == VAR_2) {
            VAR_10 |= VAR_8->reg_services;
        }
    }
    VAR_10 >>= VAR_1;
    VAR_9 = VAR_6->reg_services >> VAR_1;
    for (VAR_11 = 0; VAR_11 < VAR_0 && VAR_9 != 0; VAR_11++, VAR_9 >>= 1, VAR_10 >>= 1)
    {

        if (((VAR_9 & 1) == 1) && ((VAR_10 & 1) == 0)) {
            FUNC_0("bta_ag_del_records %d", VAR_11);
            if (VAR_3.profile[VAR_11].sdp_handle != 0) {
                FUNC_3(VAR_3.profile[VAR_11].sdp_handle);
                VAR_3.profile[VAR_11].sdp_handle = 0;
            }
            FUNC_1(VAR_3.profile[VAR_11].scn);
            FUNC_2(VAR_4[VAR_11]);
            FUNC_5(VAR_5[VAR_11]);
        }
    }
}
