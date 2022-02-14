
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; scalar_t__* data; } ;
typedef TYPE_1__ hb_buffer_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__**) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (char*,char*,...) ;
 char* FUNC_6 (char*,int*) ;
 int FUNC_7 (char*) ;

void FUNC_8(hb_buffer_t *VAR_0, int VAR_1)
{
    if (VAR_0->size == 0)
        return;


    if (VAR_0->data[VAR_0->size-1] != 0)
    {
        FUNC_3(VAR_0, ++VAR_0->size);
        VAR_0->data[VAR_0->size - 1] = 0;
    }
    char * VAR_2 = (char*)VAR_0->data;


    hb_buffer_t * VAR_3 = FUNC_2(VAR_0->size + 80);
    char * VAR_4, *VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9;



    FUNC_4(VAR_0, VAR_3);
    VAR_4 = (char*)VAR_0->data;

    FUNC_5((char*)VAR_0->data, "%d,,Default,,0,0,0,,", VAR_1);
    VAR_8 = FUNC_7((char*)VAR_0->data);

    VAR_9 = 0;
    while (VAR_2[VAR_9] != '\0')
    {
        if ((VAR_5 = FUNC_6(VAR_2 + VAR_9, &VAR_6)) != ((void*)0))
        {
            VAR_7 = FUNC_7(VAR_5);
            FUNC_3(VAR_0, VAR_8 + VAR_7 + 1);

            VAR_4 = (char*)VAR_0->data;
            FUNC_5(VAR_4 + VAR_8, "%s", VAR_5);
            FUNC_0(VAR_5);
            VAR_8 += VAR_7;
            VAR_9 += VAR_6;
        }
        else
        {
            FUNC_3(VAR_0, VAR_8 + 4);

            VAR_4 = (char*)VAR_0->data;
            if (VAR_2[VAR_9] == '\r')
            {
                if (VAR_2[VAR_9 + 1] == '\n')
                {
                    VAR_9++;
                }
                if (VAR_2[VAR_9 + 1] != 0)
                {
                    VAR_4[VAR_8++] = '\\';
                    VAR_4[VAR_8++] = 'N';
                }
                VAR_9++;
            }
            else if (VAR_2[VAR_9] == '\n')
            {
                if (VAR_2[VAR_9 + 1] != 0)
                {
                    VAR_4[VAR_8++] = '\\';
                    VAR_4[VAR_8++] = 'N';
                }
                VAR_9++;
            }
            else
            {
                VAR_4[VAR_8++] = VAR_2[VAR_9++];
            }
        }
    }
    VAR_4[VAR_8] = '\0';
    VAR_0->size = VAR_8 + 1;
    FUNC_1(&VAR_3);
}
