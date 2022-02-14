
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef int u16_t ;
struct TYPE_3__ {int bssid; int bAutoReconnect; int cmDisallowSsidLength; int cmMicFailureCount; } ;
struct TYPE_4__ {int addbaCount; int TKIP_Group_KeyChanging; TYPE_1__ sta; int addbaComplete; int (* zfcbConnectNotify ) (int *,int ,int ) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ) ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int const) ;
 int FUNC_11 (int *,int const,int) ;
 int FUNC_12 (size_t*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

void FUNC_20(zdev_t* VAR_9, u16_t* VAR_10, u8_t VAR_11)
{
    u8_t VAR_12, VAR_13, VAR_14 = VAR_0;
    u16_t VAR_15[32];
    u8_t VAR_16 = 0;

    FUNC_18(VAR_9);

    FUNC_16();

    FUNC_12((u8_t*) VAR_15, 64);

    for( VAR_12=0; VAR_12<VAR_11; VAR_12++ )
    {
        for( VAR_13=0; VAR_13<VAR_16; VAR_13++ )
        {
            if ( VAR_15[VAR_13] == VAR_10[VAR_12] )
            {
                VAR_14 = VAR_1;
                break;
            }
        }

        if ( VAR_14 )
        {
            continue;
        }

        switch( VAR_10[VAR_12] )
        {
            case 132:
                {
                    FUNC_5(VAR_9);
                    VAR_15[VAR_16++] = 133;
                    VAR_15[VAR_16++] = 128;
                }
                break;

            case 128:
                {
                    u8_t VAR_17;

                    VAR_17 = FUNC_6(VAR_9);
                    if ( VAR_17 == 0 )
                    {
                        VAR_15[VAR_16++] = 128;
                    }
                    else if ( VAR_17 == 1 )
                    {
                        VAR_15[VAR_16++] = 133;
                    }
                }
                break;

            case 134:
                {
                    FUNC_9(VAR_9, 0);
                }
                break;

            case 133:
                {
                    FUNC_4(VAR_9);
                }
                break;

            case 135:
                {
                    FUNC_15(VAR_2, "ZM_EVENT_CM_TIMER");

                    VAR_8->sta.cmMicFailureCount = 0;
                }
                break;

            case 136:
                {
                    FUNC_15(VAR_2, "ZM_EVENT_CM_DISCONNECT");

                    FUNC_2(VAR_9, VAR_5);

                    FUNC_17(VAR_9);





                    FUNC_11(VAR_9, 137,
                                         VAR_6 - VAR_7);

                    FUNC_19(VAR_9);
                    VAR_8->sta.cmMicFailureCount = 0;

                    FUNC_3(VAR_9);
                    if (VAR_8->zfcbConnectNotify != ((void*)0))
                    {
                        VAR_8->zfcbConnectNotify(VAR_9, VAR_4,
                             VAR_8->sta.bssid);
                    }
                }
                break;

            case 137:
                {
                    FUNC_15(VAR_2, "ZM_EVENT_CM_BLOCK_TIMER");


                    VAR_8->sta.cmDisallowSsidLength = 0;
                    if ( VAR_8->sta.bAutoReconnect )
                    {
                        FUNC_15(VAR_2, "ZM_EVENT_CM_BLOCK_TIMER:bAutoReconnect!=0");
                        FUNC_8(VAR_9, VAR_3);
                        FUNC_7(VAR_9, VAR_3);
                    }

                }
                break;

            case 130:
                {
                    if (!VAR_8->addbaComplete && (VAR_8->addbaCount < 5))
                    {
                        FUNC_1(VAR_9, VAR_8->sta.bssid, 0, 0);
                        VAR_8->addbaCount++;
                        FUNC_11(VAR_9, 130, 100);
                    }
                    else
                    {
                        FUNC_10(VAR_9, 130);
                    }
                }
                break;
            case 131:

    {
     FUNC_14("Countermeasure : Enable MIC Check ");
     VAR_8->TKIP_Group_KeyChanging = 0x0;
    }
    break;

            default:
                break;
        }
    }
}
