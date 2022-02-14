
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; char* data; int s; } ;
typedef TYPE_1__ hb_buffer_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,char*,char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static hb_buffer_t * FUNC_6(hb_buffer_t *VAR_0, hb_buffer_t *VAR_1)
{
    int VAR_2, VAR_3;
    char *VAR_4;
    hb_buffer_t *VAR_5;

    if (VAR_0 == ((void*)0) && VAR_1 == ((void*)0))
    {
        return ((void*)0);
    }
    if (VAR_0 == ((void*)0))
    {
        return FUNC_0(VAR_1);
    }
    if (VAR_1 == ((void*)0))
    {
        return FUNC_0(VAR_0);
    }

    VAR_5 = FUNC_1(VAR_0->size + VAR_1->size);
    VAR_5->s = VAR_0->s;


    VAR_4 = (char*)VAR_1->data;
    for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
    {
        VAR_4 = FUNC_4(VAR_4, ',');
        if (VAR_4 == ((void*)0))
            break;
        VAR_4++;
    }
    if (VAR_4 != ((void*)0))
    {

        VAR_2 = FUNC_5((char*)VAR_0->data);
        if (VAR_2 > 0 && VAR_0->data[VAR_2 - 1] == '\n')
        {
            VAR_0->data[VAR_2 - 1] = 0;
            VAR_2--;
            if (VAR_2 > 0 && VAR_0->data[VAR_2 - 1] == '\r')
            {
                VAR_0->data[VAR_2 - 1] = 0;
            }
        }


        VAR_2 = FUNC_3((char*)VAR_5->data, "%s\\N{\\r}%s", VAR_0->data, VAR_4);
        if (VAR_2 >= 0)
            VAR_5->size = VAR_2 + 1;
    }
    else
    {
        FUNC_2(VAR_5->data, VAR_0->data, VAR_0->size);
        VAR_5->size = VAR_0->size;
    }

    return VAR_5;
}
