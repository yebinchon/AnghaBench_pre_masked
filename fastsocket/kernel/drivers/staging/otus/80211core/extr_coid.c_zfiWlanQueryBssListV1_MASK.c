
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct zsBssListV1 {int bssCount; TYPE_1__* bssInfo; } ;
struct zsBssInfo {int* bssid; scalar_t__* ssid; scalar_t__ frequency; struct zsBssInfo* next; } ;
struct TYPE_6__ {int bssCount; struct zsBssInfo* head; } ;
struct TYPE_7__ {scalar_t__ ssidLen; int* ssid; TYPE_2__ bssList; int bssid; } ;
struct TYPE_8__ {scalar_t__ wlanMode; scalar_t__ frequency; TYPE_3__ sta; } ;
struct TYPE_5__ {int* ssid; } ;


 int FUNC_0 (int ,int*) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(zdev_t* VAR_2, struct zsBssListV1* VAR_3)
{
    struct zsBssInfo* VAR_4;

    u8_t VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
    u8_t VAR_10[6];


    FUNC_7(VAR_2);
    FUNC_5();

    FUNC_6(VAR_2);

    VAR_3->bssCount = VAR_1->sta.bssList.bssCount;

    VAR_4 = VAR_1->sta.bssList.head;
    FUNC_0(VAR_1->sta.bssid, VAR_10);

    for( VAR_5=0; VAR_5<VAR_1->sta.bssList.bssCount; VAR_5++ )
    {
        VAR_7 = 0;
        if ( FUNC_3(VAR_2)
             && (VAR_1->wlanMode == VAR_0 ) )
        {
   for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
            {
                if ( VAR_4->bssid[VAR_6] != VAR_10[VAR_6] )
                {
                    break;
                }
            }

            if ( (VAR_6 == 6)
                  &&((VAR_4->ssid[1] == VAR_1->sta.ssidLen) || (VAR_4->ssid[1] == 0) )&& (VAR_4->frequency == VAR_1->frequency) )
            {
    if(VAR_4->ssid[1] == 0)
     VAR_4->ssid[1] = VAR_1->sta.ssidLen;

    if(VAR_9 == 0)
    {
     VAR_9++;
    }
    else
    {
     VAR_7 = 1;
     VAR_3->bssCount--;
    }

            }
        }

        if (VAR_7 == 0)
        {
            FUNC_1((u8_t*)(&VAR_3->bssInfo[VAR_8]), (u8_t*)VAR_4,
                sizeof(struct zsBssInfo));

   if(VAR_9 == 1)
   {
    FUNC_1(&(VAR_3->bssInfo[VAR_8].ssid[2]), VAR_1->sta.ssid, VAR_1->sta.ssidLen);
    VAR_9++;
   }

   VAR_8++;
        }

        if ( VAR_4->next != ((void*)0) )
        {
            VAR_4 = VAR_4->next;
        }
        else
        {
            FUNC_4(VAR_5==(VAR_1->sta.bssList.bssCount-1));
        }
    }

    FUNC_8(VAR_2);

    FUNC_2(VAR_2);
}
