
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u8_t ;
typedef int u16_t ;
struct TYPE_5__ {size_t allowChannelCnt; TYPE_1__* allowChannel; } ;
struct TYPE_6__ {TYPE_2__ regulationTable; } ;
struct TYPE_4__ {int channel; } ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,size_t) ;
 int FUNC_5 (int *,int *,int ,int) ;

u16_t FUNC_6(zdev_t* VAR_2, zbuf_t* VAR_3, u16_t VAR_4)
{

    u8_t VAR_5;
    u16_t VAR_6 = 0;
    u16_t VAR_7 = 0;
    u16_t VAR_8;
    u8_t VAR_9;

    FUNC_2(VAR_2);

    FUNC_0();
    FUNC_1(VAR_2);

    for (VAR_5 = 0; VAR_5 < VAR_1->regulationTable.allowChannelCnt; VAR_5++)
    {
        if (VAR_1->regulationTable.allowChannel[VAR_5].channel < 3000)
        {
            VAR_6++;
        }
        else
        {
            VAR_7++;
        }
    }

    VAR_9 = (u8_t)(VAR_7 * 2 + 2);


    FUNC_4(VAR_2, VAR_3, VAR_4++, VAR_0 );


    FUNC_4(VAR_2, VAR_3, VAR_4++, VAR_9);



    FUNC_5(VAR_2, VAR_3, VAR_4++, 1);

    FUNC_5(VAR_2, VAR_3, VAR_4++, VAR_6);

    for (VAR_5 = 0; VAR_5 < VAR_1->regulationTable.allowChannelCnt ; VAR_5++)
    {
        if (VAR_1->regulationTable.allowChannel[VAR_5].channel > 4000 && VAR_1->regulationTable.allowChannel[VAR_5].channel < 5000)
        {
            VAR_8 = (VAR_1->regulationTable.allowChannel[VAR_5].channel-4000)/5;

            FUNC_5(VAR_2, VAR_3, VAR_4++, VAR_8);

            FUNC_5(VAR_2, VAR_3, VAR_4++, 1);
        }
        else if (VAR_1->regulationTable.allowChannel[VAR_5].channel >= 5000)
        {
            VAR_8 = (VAR_1->regulationTable.allowChannel[VAR_5].channel-5000)/5;

            FUNC_5(VAR_2, VAR_3, VAR_4++, VAR_8);

            FUNC_5(VAR_2, VAR_3, VAR_4++, 1);
        }
    }
   FUNC_3(VAR_2);

    return VAR_4;
}
