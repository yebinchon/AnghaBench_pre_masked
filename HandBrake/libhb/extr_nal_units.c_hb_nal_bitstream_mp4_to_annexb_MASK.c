
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * data; } ;
typedef TYPE_1__ hb_buffer_t ;


 TYPE_1__* FUNC_0 (size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,size_t) ;
 scalar_t__ FUNC_3 (int *,int*,size_t) ;
 int FUNC_4 (int*,int const,size_t*) ;

hb_buffer_t* FUNC_5(const uint8_t *VAR_0,
                                            const size_t VAR_1,
                                            const uint8_t VAR_2)
{
    hb_buffer_t *VAR_3;
    uint8_t *VAR_4, *VAR_5;
    size_t VAR_6, VAR_7;

    VAR_6 = 0;
    VAR_4 = (uint8_t*)VAR_0;
    VAR_5 = (uint8_t*)VAR_0 + VAR_1;

    while (VAR_5 - VAR_4 > VAR_2)
    {
        VAR_4 += FUNC_4(VAR_4, VAR_2, &VAR_7);
        if (VAR_5 - VAR_4 < VAR_7)
        {
            FUNC_2("hb_nal_bitstream_mp4_to_annexb: truncated bitstream"
                   " (remaining: %lu, expected: %lu)", VAR_5 - VAR_4, VAR_7);
            return ((void*)0);
        }

        VAR_6 += FUNC_3(((void*)0), VAR_4, VAR_7);
        VAR_4 += VAR_7;
    }

    VAR_3 = FUNC_0(VAR_6);
    if (VAR_3 == ((void*)0))
    {
        FUNC_1("hb_nal_bitstream_mp4_to_annexb: hb_buffer_init failed");
        return ((void*)0);
    }

    VAR_6 = 0;
    VAR_4 = (uint8_t*)VAR_0;
    VAR_5 = (uint8_t*)VAR_0 + VAR_1;

    while (VAR_5 - VAR_4 > VAR_2)
    {
        VAR_4 += FUNC_4(VAR_4, VAR_2, &VAR_7);
        VAR_6 += FUNC_3(VAR_3->data + VAR_6, VAR_4, VAR_7);
        VAR_4 += VAR_7;
    }

    return VAR_3;
}
