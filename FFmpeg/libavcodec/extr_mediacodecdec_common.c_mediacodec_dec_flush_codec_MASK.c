
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int current_input_buffer; int hw_buffer_count; int serial; scalar_t__ eos; scalar_t__ flushing; scalar_t__ draining; scalar_t__ output_buffer_count; int * codec; } ;
typedef TYPE_1__ MediaCodecDecContext ;
typedef int FFAMediaCodec ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2, MediaCodecDecContext *VAR_3)
{
    FFAMediaCodec *VAR_4 = VAR_3->codec;
    int VAR_5;

    VAR_3->output_buffer_count = 0;

    VAR_3->draining = 0;
    VAR_3->flushing = 0;
    VAR_3->eos = 0;
    FUNC_0(&VAR_3->serial, 1);
    FUNC_1(&VAR_3->hw_buffer_count, 0);
    VAR_3->current_input_buffer = -1;

    VAR_5 = FUNC_3(VAR_4);
    if (VAR_5 < 0) {
        FUNC_2(VAR_2, VAR_1, "Failed to flush codec\n");
        return VAR_0;
    }

    return 0;
}
