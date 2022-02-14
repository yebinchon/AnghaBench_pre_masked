
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct TYPE_2__ {scalar_t__ wlanMode; int tick; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int *,int,int ,int ) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int *) ;

u16_t FUNC_13(zdev_t* VAR_10, zbuf_t* VAR_11, u16_t VAR_12)
{
    u16_t VAR_13, VAR_14;

    FUNC_12(VAR_10);

    FUNC_0(VAR_10, VAR_9->tick);
    FUNC_10(VAR_3, "zfiTxSendEth(), port=", VAR_12);

    if ((VAR_13 = FUNC_7(VAR_10, VAR_11, VAR_12)) == VAR_7)
    {
        VAR_13 = VAR_0;
        goto zlError;
    }


    if ((VAR_9->wlanMode == VAR_4) && (VAR_12 < 0x20))
    {

        if ((VAR_14 = FUNC_1(VAR_10, VAR_11, VAR_12)) == 1)
        {
            return VAR_8;
        }
    }
    else

    if (VAR_9->wlanMode == VAR_6)
    {
        if ( FUNC_2(VAR_10) )
        {

            FUNC_3(VAR_10);
        }
    }
    if (1)
    {

        VAR_14 = FUNC_5(VAR_10, VAR_11);


        FUNC_4(VAR_10);
    }
    else
    {
        VAR_14 = FUNC_8(VAR_10, VAR_11, VAR_12, VAR_1, 0);
    }

    return VAR_14;




zlError:
    FUNC_11(VAR_2, "Tx Comp err=", VAR_13);

    FUNC_9(VAR_10, VAR_11, VAR_13);
    return VAR_13;
}
