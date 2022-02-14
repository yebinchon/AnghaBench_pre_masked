
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * data; } ;
typedef TYPE_1__ hb_buffer_t ;


 int * FUNC_0 (int *,size_t*) ;
 TYPE_1__* FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int *,size_t) ;

hb_buffer_t* FUNC_4(const uint8_t *VAR_0,
                                            const size_t VAR_1)
{
    hb_buffer_t *VAR_2;
    uint8_t *VAR_3, *VAR_4;
    size_t VAR_5, VAR_6;

    VAR_5 = 0;
    VAR_6 = VAR_1;
    VAR_3 = (uint8_t*)VAR_0;
    VAR_4 = (uint8_t*)VAR_0 + VAR_1;

    while ((VAR_3 = FUNC_0(VAR_3, &VAR_6)) != ((void*)0))
    {
        VAR_5 += FUNC_3(((void*)0), VAR_3, VAR_6);
        VAR_6 = VAR_4 - VAR_3;
    }

    VAR_2 = FUNC_1(VAR_5);
    if (VAR_2 == ((void*)0))
    {
        FUNC_2("hb_nal_bitstream_annexb_to_mp4: hb_buffer_init failed");
        return ((void*)0);
    }

    VAR_5 = 0;
    VAR_6 = VAR_1;
    VAR_3 = (uint8_t*)VAR_0;
    VAR_4 = (uint8_t*)VAR_0 + VAR_1;

    while ((VAR_3 = FUNC_0(VAR_3, &VAR_6)) != ((void*)0))
    {
        VAR_5 += FUNC_3(VAR_2->data + VAR_5, VAR_3, VAR_6);
        VAR_6 = VAR_4 - VAR_3;
    }

    return VAR_2;
}
