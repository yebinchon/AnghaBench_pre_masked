
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int size; int* data; struct TYPE_3__* next; } ;
typedef TYPE_1__ hb_buffer_t ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static void FUNC_1( hb_buffer_t * VAR_0 )
{
    hb_buffer_t * VAR_1 = VAR_0;
    uint8_t VAR_2 = 0;
    while ( VAR_1 && !VAR_2 )
    {
        int VAR_3 = 0;

        while (VAR_3 + 3 <= VAR_1->size)
        {
            uint8_t VAR_4;
            int VAR_5;
            int VAR_6;

            VAR_4 = VAR_1->data[VAR_3++];
            VAR_6 = VAR_3;
            VAR_5 = ((int)VAR_1->data[VAR_3] << 8) + VAR_1->data[VAR_3+1];
            VAR_3 += 2;

            if (VAR_4 == 0x16 && VAR_3 + VAR_5 <= VAR_1->size)
            {
                int VAR_7;
                int VAR_8, VAR_9 = VAR_3;
                int VAR_10;






                VAR_9 += 10;


                VAR_7 = VAR_1->data[VAR_9];
                VAR_1->data[VAR_9] = 0;
                VAR_9++;
                VAR_10 = VAR_9;


                for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
                {
                    uint8_t VAR_11;

                    VAR_11 = VAR_1->data[VAR_9 + 3];






                    VAR_9 += 8;
                    if (VAR_11 & 0x80)
                    {





                        VAR_9 += 8;
                    }
                }
                if (VAR_9 < VAR_1->size)
                {
                    FUNC_0(VAR_1->data + VAR_10, VAR_1->data + VAR_9, VAR_1->size - VAR_9);
                }
                VAR_1->size = VAR_10 + ( VAR_1->size - VAR_9 );
                VAR_2 = 1;
                VAR_5 = VAR_10 - (VAR_6 + 2);
                VAR_1->data[VAR_6] = VAR_5 >> 8;
                VAR_1->data[VAR_6+1] = VAR_5 & 0xff;
                break;
            }
            VAR_3 += VAR_5;
        }
        VAR_1 = VAR_1->next;
    }
}
