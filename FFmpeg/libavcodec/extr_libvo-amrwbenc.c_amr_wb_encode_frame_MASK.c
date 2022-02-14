
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_16__ {scalar_t__ last_bitrate; int allow_dtx; int mode; int state; } ;
struct TYPE_15__ {scalar_t__ bit_rate; int initial_padding; TYPE_4__* priv_data; } ;
struct TYPE_14__ {scalar_t__ pts; scalar_t__* data; } ;
struct TYPE_13__ {scalar_t__ pts; int size; int data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ AMRWBContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int const*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (scalar_t__,TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_4, AVPacket *VAR_5,
                               const AVFrame *VAR_6, int *VAR_7)
{
    AMRWBContext *VAR_8 = VAR_4->priv_data;
    const int16_t *VAR_9 = (const int16_t *)VAR_6->data[0];
    int VAR_10, VAR_11;

    if ((VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_3, 0)) < 0)
        return VAR_11;

    if (VAR_8->last_bitrate != VAR_4->bit_rate) {
        VAR_8->mode = FUNC_5(VAR_4->bit_rate, VAR_4);
        VAR_8->last_bitrate = VAR_4->bit_rate;
    }
    VAR_10 = FUNC_1(VAR_8->state, VAR_8->mode, VAR_9, VAR_5->data, VAR_8->allow_dtx);
    if (VAR_10 <= 0 || VAR_10 > VAR_3) {
        FUNC_2(VAR_4, VAR_0, "Error encoding frame\n");
        return FUNC_0(VAR_2);
    }

    if (VAR_6->pts != VAR_1)
        VAR_5->pts = VAR_6->pts - FUNC_4(VAR_4, VAR_4->initial_padding);

    VAR_5->size = VAR_10;
    *VAR_7 = 1;
    return 0;
}
