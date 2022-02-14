
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ buffer; } ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_6__ {scalar_t__ bitstream_buffer; int bitstream_buffer_size; int allocated_bitstream_buffer_size; int avctx; TYPE_4__ gb; scalar_t__ divx_packed; } ;
struct TYPE_7__ {int showed_packed_warning; TYPE_1__ m; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ Mpeg4DecContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,int *,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (scalar_t__,int const*,int) ;

int FUNC_5(AVCodecContext *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    Mpeg4DecContext *VAR_5 = VAR_2->priv_data;
    MpegEncContext *VAR_6 = &VAR_5->m;




    if (VAR_6->divx_packed) {
        int VAR_7 = VAR_6->gb.buffer == VAR_6->bitstream_buffer ? 0 : (FUNC_3(&VAR_6->gb) >> 3);
        int VAR_8 = 0;

        if (VAR_4 - VAR_7 > 7) {

            int VAR_9;
            for (VAR_9 = VAR_7; VAR_9 < VAR_4 - 4; VAR_9++)

                if (VAR_3[VAR_9] == 0 &&
                    VAR_3[VAR_9 + 1] == 0 &&
                    VAR_3[VAR_9 + 2] == 1 &&
                    VAR_3[VAR_9 + 3] == 0xB6) {
                    VAR_8 = !(VAR_3[VAR_9 + 4] & 0x40);
                    break;
                }
        }

        if (VAR_8) {
            if (!VAR_5->showed_packed_warning) {
                FUNC_2(VAR_6->avctx, VAR_0, "Video uses a non-standard and "
                       "wasteful way to store B-frames ('packed B-frames'). "
                       "Consider using the mpeg4_unpack_bframes bitstream filter without encoding but stream copy to fix it.\n");
                VAR_5->showed_packed_warning = 1;
            }
            FUNC_1(&VAR_6->bitstream_buffer,
                           &VAR_6->allocated_bitstream_buffer_size,
                           VAR_4 - VAR_7);
            if (!VAR_6->bitstream_buffer) {
                VAR_6->bitstream_buffer_size = 0;
                return FUNC_0(VAR_1);
            }
            FUNC_4(VAR_6->bitstream_buffer, VAR_3 + VAR_7,
                   VAR_4 - VAR_7);
            VAR_6->bitstream_buffer_size = VAR_4 - VAR_7;
        }
    }

    return 0;
}
