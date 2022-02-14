
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {scalar_t__ skip_frame; int height; TYPE_1__* priv_data; } ;
struct TYPE_15__ {int * linesize; int * data; } ;
struct TYPE_14__ {int size; int * data; } ;
struct TYPE_13__ {int frame_flags; int buf_sel; int * planes; int v_data_size; int v_data_ptr; int u_data_size; int u_data_ptr; int y_data_size; int y_data_ptr; } ;
typedef TYPE_1__ Indeo3DecodeContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,TYPE_4__*,int const*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_4__*,int *,int ,int ,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_3 (int *,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_5, void *VAR_6, int *VAR_7,
                        AVPacket *VAR_8)
{
    Indeo3DecodeContext *VAR_9 = VAR_5->priv_data;
    const uint8_t *VAR_10 = VAR_8->data;
    int VAR_11 = VAR_8->size;
    AVFrame *VAR_12 = VAR_6;
    int VAR_13;

    VAR_13 = FUNC_0(VAR_9, VAR_5, VAR_10, VAR_11);
    if (VAR_13 < 0)
        return VAR_13;


    if (VAR_13) {

        *VAR_7 = 0;
        return VAR_11;
    }


    if (VAR_9->frame_flags & VAR_4 &&
       (VAR_5->skip_frame >= VAR_1))
        return 0;


    if (!(VAR_9->frame_flags & VAR_3) && VAR_5->skip_frame >= VAR_0)
        return 0;


    VAR_9->buf_sel = (VAR_9->frame_flags >> VAR_2) & 1;

    if ((VAR_13 = FUNC_2(VAR_5, VAR_12, 0)) < 0)
        return VAR_13;


    if ((VAR_13 = FUNC_1(VAR_9, VAR_5, VAR_9->planes, VAR_9->y_data_ptr, VAR_9->y_data_size, 40)))
        return VAR_13;


    if ((VAR_13 = FUNC_1(VAR_9, VAR_5, &VAR_9->planes[1], VAR_9->u_data_ptr, VAR_9->u_data_size, 10)))
        return VAR_13;

    if ((VAR_13 = FUNC_1(VAR_9, VAR_5, &VAR_9->planes[2], VAR_9->v_data_ptr, VAR_9->v_data_size, 10)))
        return VAR_13;

    FUNC_3(&VAR_9->planes[0], VAR_9->buf_sel,
                 VAR_12->data[0], VAR_12->linesize[0],
                 VAR_5->height);
    FUNC_3(&VAR_9->planes[1], VAR_9->buf_sel,
                 VAR_12->data[1], VAR_12->linesize[1],
                 (VAR_5->height + 3) >> 2);
    FUNC_3(&VAR_9->planes[2], VAR_9->buf_sel,
                 VAR_12->data[2], VAR_12->linesize[2],
                 (VAR_5->height + 3) >> 2);

    *VAR_7 = 1;

    return VAR_11;
}
