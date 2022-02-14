
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsBssInfo {int* rsnIe; int* wpaIe; int securityType; int * wscIe; } ;
struct TYPE_3__ {scalar_t__ ssidLen; int authMode; int currentAuthMode; void* wepStatus; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int *,struct zsBssInfo*) ;
 int FUNC_1 (int *) ;

u8_t FUNC_2(zdev_t* VAR_6, struct zsBssInfo* VAR_7)
{
    u8_t VAR_8=VAR_1;
    u16_t VAR_9;
    u16_t VAR_10;

    FUNC_1(VAR_6);


    if ( VAR_5->sta.ssidLen == 0 )
    {
        return VAR_8;
    }


 switch(VAR_5->sta.authMode)

    {
        case 129:
        case 130:
            VAR_9 = 0;
            if(VAR_7->rsnIe[1] != 0)
            {
                VAR_10 = (VAR_7->rsnIe[8]) +
                                   (VAR_7->rsnIe[9] << 8);


                if (VAR_10 == 1)
                {
                    VAR_9 = VAR_7->rsnIe[13];

                }
                else
                {
                    u16_t VAR_11;
                    u16_t VAR_12 = 0;
                    u16_t VAR_13 = 13;


                    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
                    {
                        if (VAR_7->rsnIe[VAR_13+VAR_11*4] > VAR_12)
                        {
                            VAR_12 = VAR_7->rsnIe[VAR_13+VAR_11*4];
                        }
                    }

                    VAR_9 = VAR_12;
                }

                if ( VAR_9 == 0x02 )
                {
           VAR_5->sta.wepStatus = VAR_3;

           if ( VAR_5->sta.authMode == 129 )
                    {
                        VAR_5->sta.currentAuthMode = 133;
                    }
                    else
                    {
                        VAR_5->sta.currentAuthMode = 132;
                    }
                }
                else if ( VAR_9 == 0x04 )
                {
                    VAR_5->sta.wepStatus = VAR_2;

                    if ( VAR_5->sta.authMode == 129 )
                    {
                        VAR_5->sta.currentAuthMode = 133;
                    }
                    else
                    {
                        VAR_5->sta.currentAuthMode = 132;
                    }
                }
                else
                {
                    VAR_8 = VAR_0;
                }
            }
            else if(VAR_7->wpaIe[1] != 0)
            {
                VAR_10 = (VAR_7->wpaIe[12]) +
                                   (VAR_7->wpaIe[13] << 8);


                if (VAR_10 == 1)
                {
                    VAR_9 = VAR_7->wpaIe[17];

                }
                else
                {
                    u16_t VAR_14;
                    u16_t VAR_15 = 0;
                    u16_t VAR_16 = 17;


                    for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
                    {
                        if (VAR_7->wpaIe[VAR_16+VAR_14*4] > VAR_15)
                        {
                            VAR_15 = VAR_7->wpaIe[VAR_16+VAR_14*4];
                        }
                    }

                    VAR_9 = VAR_15;
                }

                if ( VAR_9 == 0x02 )
                {
           VAR_5->sta.wepStatus = VAR_3;

           if ( VAR_5->sta.authMode == 129 )
                    {
                        VAR_5->sta.currentAuthMode = 134;
                    }
                    else
                    {
                        VAR_5->sta.currentAuthMode = 131;
                    }
                }
                else if ( VAR_9 == 0x04 )
                {
                    VAR_5->sta.wepStatus = VAR_2;

                    if ( VAR_5->sta.authMode == 129 )
                    {
                        VAR_5->sta.currentAuthMode = 134;
                    }
                    else
                    {
                        VAR_5->sta.currentAuthMode = 131;
                    }
                }
                else
                {
                    VAR_8 = VAR_0;
                }


            }
            else
            {
                VAR_8 = VAR_0;
            }

            break;

        case 134:
        case 131:
        case 128:
        case 133:
        case 132:
            {
                if ( VAR_7->securityType != VAR_4 )
                {
                    VAR_8 = VAR_0;
                }

                VAR_8 = FUNC_0(VAR_6, VAR_7);
            }
            break;

        case 136:
        case 135:
        case 137:
            {
                if ( VAR_7->wscIe[1] )
                {

                    break;
                }
                else if ( VAR_7->securityType == VAR_4 )
                {
                    VAR_8 = VAR_0;
                }
            }
            break;

        default:
            break;
    }

    return VAR_8;
}
