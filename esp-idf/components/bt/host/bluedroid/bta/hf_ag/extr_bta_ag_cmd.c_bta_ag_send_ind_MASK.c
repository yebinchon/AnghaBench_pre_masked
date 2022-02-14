
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bia_masked_out; int call_ind; int callsetup_ind; int service_ind; int signal_ind; int roam_ind; int battchg_ind; int callheld_ind; scalar_t__ cmer_enabled; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef void* UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void FUNC_2(tBTA_AG_SCB *VAR_9, UINT16 VAR_10, UINT16 VAR_11, BOOLEAN VAR_12)
{
    char VAR_13[12];
    char *VAR_14 = VAR_13;


    if ((VAR_9->bia_masked_out & ((UINT32)1 << VAR_10)) &&
        ((VAR_10 != VAR_1) && (VAR_10 != VAR_3) && (VAR_10 != VAR_2)))
        return;



    if (VAR_10 == VAR_1) {
        if ((VAR_11 == VAR_9->call_ind) && (VAR_12 == VAR_8)) {
            return;
        }
        VAR_9->call_ind = (UINT8)VAR_11;
    }
    if ((VAR_10 == VAR_3) && (VAR_12 == VAR_8)) {
        if (VAR_11 == VAR_9->callsetup_ind) {
            return;
        }
        VAR_9->callsetup_ind = (UINT8)VAR_11;
    }
    if ((VAR_10 == VAR_5) && (VAR_12 == VAR_8)) {
        if (VAR_11 == VAR_9->service_ind) {
            return;
        }
        VAR_9->service_ind = (UINT8)VAR_11;
    }
    if ((VAR_10 == VAR_6) && (VAR_12 == VAR_8)) {
        if (VAR_11 == VAR_9->signal_ind) {
            return;
        }
        VAR_9->signal_ind = (UINT8)VAR_11;
    }
    if ((VAR_10 == VAR_4) && (VAR_12 == VAR_8)) {
        if (VAR_11 == VAR_9->roam_ind) {
            return;
        }
        VAR_9->roam_ind = (UINT8)VAR_11;
    }
    if ((VAR_10 == VAR_0) && (VAR_12 == VAR_8)) {
        if (VAR_11 == VAR_9->battchg_ind) {
            return;
        }
        VAR_9->battchg_ind = (UINT8)VAR_11;
    }
    if ((VAR_10 == VAR_2) && (VAR_12 == VAR_8)) {

        if ((VAR_11 != 1) && (VAR_11 == VAR_9->callheld_ind)) {
            return;
        }
        VAR_9->callheld_ind = (UINT8)VAR_11;
    }
    if (VAR_9->cmer_enabled) {
        VAR_14 += FUNC_1(VAR_10, VAR_14);
        *VAR_14++ = ',';
        FUNC_1(VAR_11, VAR_14);
        FUNC_0(VAR_9, VAR_7, VAR_13, 0);
    }
}
