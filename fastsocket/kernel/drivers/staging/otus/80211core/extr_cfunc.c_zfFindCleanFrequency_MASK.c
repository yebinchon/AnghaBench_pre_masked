
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef scalar_t__ u32_t ;
typedef size_t u16_t ;
struct zsBssInfo {size_t frequency; int channel; struct zsBssInfo* next; } ;
struct TYPE_9__ {size_t allowChannelCnt; TYPE_3__* allowChannel; } ;
struct TYPE_6__ {struct zsBssInfo* head; } ;
struct TYPE_7__ {TYPE_1__ bssList; } ;
struct TYPE_10__ {TYPE_4__ regulationTable; TYPE_2__ sta; } ;
struct TYPE_8__ {int channel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,size_t,size_t) ;
 TYPE_5__* VAR_5 ;
 size_t FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 size_t FUNC_3 (int *,size_t*,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

u16_t FUNC_8(zdev_t* VAR_6, u32_t VAR_7)
{
    u8_t VAR_8, VAR_9;
    u16_t VAR_10;
    u16_t VAR_11 = 0, VAR_12 = 0;
    u16_t VAR_13 = 0, VAR_14 = 0;
    u16_t VAR_15[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    u16_t VAR_16[17] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    u16_t VAR_17[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    u16_t VAR_18[31] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    u16_t VAR_19[31] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    struct zsBssInfo* VAR_20;

    FUNC_6(VAR_6);

    if ((VAR_20 = VAR_5->sta.bssList.head) == ((void*)0))
    {
        if( VAR_7 == VAR_2 || VAR_7 == VAR_4 ||
            VAR_7 == VAR_3 || VAR_7 == VAR_1 )
        {
            VAR_10 = FUNC_1(VAR_6);
        }
        else
        {
            VAR_10 = FUNC_2(VAR_6);
        }

        return VAR_10;
    }


    FUNC_4();
    FUNC_5(VAR_6);
    for (VAR_8 = 0; VAR_8 < VAR_5->regulationTable.allowChannelCnt; VAR_8++)
    {
        if (VAR_5->regulationTable.allowChannel[VAR_8].channel < 3000)
        {
            VAR_17[VAR_11] = VAR_5->regulationTable.allowChannel[VAR_8].channel;
            VAR_11++;
        }
        else
        {
            VAR_13++;
            VAR_19[VAR_8] = VAR_5->regulationTable.allowChannel[VAR_8].channel;
        }
    }
    FUNC_7(VAR_6);

    while( VAR_20 != ((void*)0) )
    {

        if( VAR_7 == VAR_2 || VAR_7 == VAR_4 ||
            VAR_7 == VAR_3 || VAR_7 == VAR_1 )
        {
            for( VAR_8=0; VAR_8<=(VAR_11+3); VAR_8++ )
            {
                if( VAR_20->frequency == VAR_17[VAR_8] )
                {
                    VAR_16[VAR_20->channel+1]++;
                }
            }
        }


        if( VAR_7 == VAR_0 || VAR_7 == VAR_1 )
        {
            for( VAR_8=0; VAR_8<VAR_13; VAR_8++ )
            {
                if( VAR_20->frequency == VAR_19[VAR_8] )
                {
                    VAR_18[VAR_8]++;
                }
            }
        }

        VAR_20 = VAR_20->next;
    }
    if( VAR_7 == VAR_2 || VAR_7 == VAR_4 ||
        VAR_7 == VAR_3 || VAR_7 == VAR_1 )
    {

        for( VAR_9=0; VAR_9<VAR_11; VAR_9++ )
        {
            VAR_15[VAR_9] = VAR_16[VAR_9] + VAR_16[VAR_9+1] +
                                           VAR_16[VAR_9+2] + VAR_16[VAR_9+3] +
                                           VAR_16[VAR_9+4];


        }


        VAR_12 = FUNC_3(VAR_6, VAR_15, VAR_11);
    }


    if( VAR_7 == VAR_0 || VAR_7 == VAR_1 )
    {
        VAR_14 = FUNC_3(VAR_6, VAR_18, VAR_13);
    }

    if( VAR_7 == VAR_2 || VAR_7 == VAR_4 || VAR_7 == VAR_3 )
    {
        return VAR_17[VAR_12];
    }
    else if( VAR_7 == VAR_0 )
    {
        return VAR_19[VAR_14];
    }
    else if( VAR_7 == VAR_1 )
    {
        if ( VAR_15[VAR_12] <= VAR_18[VAR_14] )
            return VAR_17[VAR_12];
        else
            return VAR_19[VAR_14];
    }
    else
        return 2412;
}
