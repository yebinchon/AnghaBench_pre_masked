
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cb_evt; scalar_t__ state; scalar_t__ selected_association_model; int tk; int pairing_bda; } ;
typedef TYPE_1__ tSMP_CB ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT32 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int ,scalar_t__*) ;

void FUNC_7 (BD_ADDR VAR_9, UINT8 VAR_10, UINT32 VAR_11)
{
    tSMP_CB *VAR_12 = & VAR_8;
    UINT8 VAR_13 = VAR_4;

    FUNC_1 ("SMP_PasskeyReply: Key: %d  Result:%d",
                     VAR_11, VAR_10);


    if (VAR_12->cb_evt != VAR_5) {
        FUNC_2 ("SMP_PasskeyReply() - Wrong State: %d", VAR_12->state);
        return;
    }

    if (FUNC_4 (VAR_9, VAR_12->pairing_bda, VAR_0) != 0) {
        FUNC_0 ("SMP_PasskeyReply() - Wrong BD Addr");
        return;
    }

    if (FUNC_3 (VAR_9) == ((void*)0)) {
        FUNC_0 ("SMP_PasskeyReply() - no dev CB");
        return;
    }

    if (VAR_11 > VAR_1 || VAR_10 != VAR_7) {
        FUNC_2 ("SMP_PasskeyReply() - Wrong key len: %d or passkey entry fail", VAR_11);

        FUNC_6(VAR_12, VAR_2, &VAR_13);

    } else if (VAR_12->selected_association_model == VAR_3) {
        FUNC_6(&VAR_8, VAR_6, &VAR_11);
    } else {
        FUNC_5(VAR_12->tk, VAR_11);
    }

    return;
}
