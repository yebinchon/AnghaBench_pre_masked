
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int hb_work_private_t ;
struct TYPE_4__ {int* data; } ;
typedef TYPE_1__ hb_buffer_t ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static hb_buffer_t * FUNC_1(hb_work_private_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    int VAR_3[4] = {0,};
    int VAR_4;
    hb_buffer_t *VAR_5 = ((void*)0);

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += 3)
    {
        if ((VAR_1[VAR_4] & 0x04) == 0)
            continue;
        if ((VAR_1[VAR_4+1] & 0x7f) == 0 && (VAR_1[VAR_4+2] & 0x7f) == 0)
            continue;
        int VAR_6 = VAR_1[VAR_4] & 0x03;
        VAR_3[VAR_6]++;
    }


    if (VAR_3[0] > 0)
    {
        VAR_5 = FUNC_0(VAR_3[0] * 2);
        int VAR_7 = 0;
        for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += 3)
        {
            if ((VAR_1[VAR_4] & 0x04) == 0)
                continue;
            if ((VAR_1[VAR_4+1] & 0x7f) == 0 && (VAR_1[VAR_4+2] & 0x7f) == 0)
                continue;
            int VAR_8 = VAR_1[VAR_4] & 0x03;
            if (VAR_8 == 0)
            {
                VAR_5->data[VAR_7++] = VAR_1[VAR_4+1];
                VAR_5->data[VAR_7++] = VAR_1[VAR_4+2];
            }
        }
    }
    return VAR_5;
}
