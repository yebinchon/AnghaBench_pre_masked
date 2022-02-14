
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_5__ {int bd_addr; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_6__ {scalar_t__ pairing_state; int pairing_flags; int pairing_bda; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

tBTM_STATUS FUNC_4 (UINT16 VAR_7, UINT8 VAR_8)
{
    tBTM_SEC_DEV_REC *VAR_9 = FUNC_0 (VAR_7);


    if (!VAR_9) {
        FUNC_2 (VAR_7, VAR_8);
        return (VAR_5);
    }


    if ( (VAR_6.pairing_state != VAR_4)
            && (FUNC_3 (VAR_6.pairing_bda, VAR_9->bd_addr, VAR_0) == 0)
            && (VAR_6.pairing_flags & VAR_3) ) {

        VAR_6.pairing_flags |= VAR_2;
        return (VAR_1);
    }

    return (FUNC_1(VAR_9, VAR_8, VAR_7));
}
