
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int* channel_order_map; } ;
typedef TYPE_1__ hb_chan_map_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ,int) ;

void FUNC_2(hb_chan_map_t *VAR_2,
                                hb_chan_map_t *VAR_3,
                                uint64_t VAR_4,
                                int *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    uint64_t *VAR_11, *VAR_12;

    if (VAR_4 == VAR_1)
    {

        VAR_4 = VAR_0;
    }
    VAR_8 = FUNC_0(VAR_4);


    FUNC_1(VAR_5, 0, VAR_8 * sizeof(int));

    VAR_9 = 0;
    VAR_11 = VAR_3 ->channel_order_map;
    VAR_12 = VAR_2->channel_order_map;
    for (VAR_6 = 0; VAR_12[VAR_6] && VAR_9 < VAR_8; VAR_6++)
    {
        if (VAR_4 & VAR_12[VAR_6])
        {
            VAR_10 = 0;
            for (VAR_7 = 0; VAR_11[VAR_7] && VAR_10 < VAR_8; VAR_7++)
            {
                if (VAR_12[VAR_6] == VAR_11[VAR_7])
                {
                    VAR_5[VAR_9++] = VAR_10++;
                    break;
                }
                else if (VAR_4 & VAR_11[VAR_7])
                {
                    VAR_10++;
                }
            }
        }
    }
}
