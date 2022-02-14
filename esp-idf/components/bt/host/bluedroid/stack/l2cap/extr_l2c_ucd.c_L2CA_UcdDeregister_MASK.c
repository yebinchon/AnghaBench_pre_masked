
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ state; } ;
struct TYPE_9__ {TYPE_1__ ucd; scalar_t__ in_use; } ;
typedef TYPE_2__ tL2C_RCB ;
struct TYPE_10__ {scalar_t__ local_cid; scalar_t__ in_use; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef scalar_t__ UINT16 ;
struct TYPE_11__ {TYPE_3__* ccb_pool; TYPE_2__* rcb_pool; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_7__ VAR_7 ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;

BOOLEAN FUNC_5 ( UINT16 VAR_8 )
{
    tL2C_CCB *VAR_9;
    tL2C_RCB *VAR_10;
    UINT16 VAR_11;

    FUNC_0 ("L2CA_UcdDeregister()  PSM: 0x%04x", VAR_8);

    if ((VAR_10 = FUNC_2 (VAR_8)) == ((void*)0)) {
        FUNC_1 ("L2CAP - no RCB for L2CA_UcdDeregister, PSM: 0x%04x", VAR_8);
        return (VAR_0);
    }

    VAR_10->ucd.state = VAR_3;


    VAR_10 = &VAR_7.rcb_pool[0];

    for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++, VAR_10++) {
        if ((VAR_10->in_use) && (VAR_10->ucd.state != VAR_3)) {
            return (VAR_6);
        }
    }


    if ((VAR_10 = FUNC_2 (VAR_2)) != ((void*)0)) {
        FUNC_4 (VAR_10);
    }


    VAR_9 = VAR_7.ccb_pool;
    for ( VAR_11 = 0; VAR_11 < VAR_4; VAR_11++ ) {
        if (( VAR_9->in_use )
                && ( VAR_9->local_cid == VAR_1 )) {
            FUNC_3 (VAR_9);
        }
        VAR_9++;
    }

    return (VAR_6);
}
