
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct vdpau_picture_context {int bitstream_buffers_used; TYPE_1__* bitstream_buffers; int bitstream_buffers_allocated; } ;
struct TYPE_4__ {int bitstream_bytes; int const* bitstream; int struct_version; } ;
typedef TYPE_1__ VdpBitstreamBuffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int *,int) ;

int FUNC_2(struct vdpau_picture_context *VAR_2,
                        const uint8_t *VAR_3, uint32_t VAR_4)
{
    VdpBitstreamBuffer *VAR_5 = VAR_2->bitstream_buffers;

    VAR_5 = FUNC_1(VAR_5, &VAR_2->bitstream_buffers_allocated,
                              (VAR_2->bitstream_buffers_used + 1) * sizeof(*VAR_5));
    if (!VAR_5)
        return FUNC_0(VAR_0);

    VAR_2->bitstream_buffers = VAR_5;
    VAR_5 += VAR_2->bitstream_buffers_used++;

    VAR_5->struct_version = VAR_1;
    VAR_5->bitstream = VAR_3;
    VAR_5->bitstream_bytes = VAR_4;
    return 0;
}
