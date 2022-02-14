
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_5__ {int* lossless_check_data; int frame_index; int num_substreams; int* inout_buffer; int* frame_size; int * max_output_bits; TYPE_1__* restart_header; } ;
struct TYPE_4__ {unsigned int max_channel; } ;
typedef TYPE_1__ RestartHeader ;
typedef TYPE_2__ MLPEncodeContext ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(MLPEncodeContext *VAR_0, const uint8_t *VAR_1,
                                int VAR_2)
{
    int32_t *VAR_3 = VAR_0->lossless_check_data;
    const int32_t *VAR_4 = (const int32_t *) VAR_1;
    const int16_t *VAR_5 = (const int16_t *) VAR_1;
    unsigned int VAR_6;

    VAR_3 += VAR_0->frame_index * VAR_0->num_substreams;

    for (VAR_6 = 0; VAR_6 < VAR_0->num_substreams; VAR_6++) {
        RestartHeader *VAR_7 = &VAR_0->restart_header [VAR_6];
        int32_t *VAR_8 = VAR_0->inout_buffer;
        int32_t VAR_9 = 0;
        uint32_t VAR_10 = 0;
        unsigned int VAR_11;
        int VAR_12;

        for (VAR_12 = 0; VAR_12 < VAR_0->frame_size[VAR_0->frame_index]; VAR_12++) {
            for (VAR_11 = 0; VAR_11 <= VAR_7->max_channel; VAR_11++) {
                uint32_t VAR_13;
                int32_t VAR_14;

                VAR_14 = VAR_2 ? *VAR_4++ >> 8 : *VAR_5++ << 8;


                VAR_13 = FUNC_0(VAR_14);
                if (VAR_10 < VAR_13)
                    VAR_10 = VAR_13;

                VAR_9 ^= (VAR_14 & 0x00ffffff) << VAR_11;
                *VAR_8++ = VAR_14;
            }

            VAR_8 += 2;
        }

        VAR_0->max_output_bits[VAR_0->frame_index] = FUNC_1(VAR_10);

        *VAR_3++ = VAR_9;
    }
}
