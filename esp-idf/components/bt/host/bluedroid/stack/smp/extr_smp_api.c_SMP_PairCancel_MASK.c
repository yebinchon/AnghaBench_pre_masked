
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; void* is_pair_cancel; int pairing_bda; int flags; } ;
typedef TYPE_1__ tSMP_CB ;
typedef int UINT8 ;
typedef void* BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 void* VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;

BOOLEAN FUNC_4 (BD_ADDR VAR_7)
{
    tSMP_CB *VAR_8 = &VAR_6;
    UINT8 VAR_9 = VAR_3;
    BOOLEAN VAR_10 = VAR_1;

    FUNC_0 ("SMP_CancelPair state=%d flag=0x%x ", VAR_8->state, VAR_8->flags);
    if ( (VAR_8->state != VAR_4) &&
            (!FUNC_2 (VAR_8->pairing_bda, VAR_7, VAR_0)) ) {
        VAR_8->is_pair_cancel = VAR_5;
        FUNC_1("Cancel Pairing: set fail reason Unknown");
        FUNC_3(VAR_8, VAR_2, &VAR_9);
        VAR_10 = VAR_5;
    }

    return VAR_10;
}
