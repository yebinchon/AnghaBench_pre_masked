
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_1__* internal; } ;
struct TYPE_9__ {int buf_end; int buf; } ;
struct TYPE_8__ {int slice_context_count; int ptr_lastgob; int vbv_delay_ptr; TYPE_3__ pb; TYPE_6__* avctx; } ;
struct TYPE_7__ {scalar_t__ byte_buffer; size_t byte_buffer_size; } ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **,int*,size_t) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_6__*,int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,scalar_t__,size_t) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int *,int) ;

int FUNC_8(MpegEncContext *VAR_4, size_t VAR_5, size_t VAR_6)
{
    if ( VAR_4->pb.buf_end - VAR_4->pb.buf - (FUNC_6(&VAR_4->pb)>>3) < VAR_5
        && VAR_4->slice_context_count == 1
        && VAR_4->pb.buf == VAR_4->avctx->internal->byte_buffer) {
        int VAR_7 = VAR_4->ptr_lastgob - VAR_4->pb.buf;
        int VAR_8 = VAR_4->vbv_delay_ptr - VAR_4->pb.buf;

        uint8_t *VAR_9 = ((void*)0);
        int VAR_10 = 0;

        if ((VAR_4->avctx->internal->byte_buffer_size + VAR_6) >= VAR_3/8) {
            FUNC_3(VAR_4->avctx, VAR_0, "Cannot reallocate putbit buffer\n");
            return FUNC_0(VAR_2);
        }

        FUNC_4();

        FUNC_1(&VAR_9, &VAR_10,
                              VAR_4->avctx->internal->byte_buffer_size + VAR_6);
        if (!VAR_9)
            return FUNC_0(VAR_2);

        FUNC_5(VAR_9, VAR_4->avctx->internal->byte_buffer, VAR_4->avctx->internal->byte_buffer_size);
        FUNC_2(VAR_4->avctx->internal->byte_buffer);
        VAR_4->avctx->internal->byte_buffer = VAR_9;
        VAR_4->avctx->internal->byte_buffer_size = VAR_10;
        FUNC_7(&VAR_4->pb, VAR_9, VAR_10);
        VAR_4->ptr_lastgob = VAR_4->pb.buf + VAR_7;
        VAR_4->vbv_delay_ptr = VAR_4->pb.buf + VAR_8;
    }
    if (VAR_4->pb.buf_end - VAR_4->pb.buf - (FUNC_6(&VAR_4->pb)>>3) < VAR_5)
        return FUNC_0(VAR_1);
    return 0;
}
