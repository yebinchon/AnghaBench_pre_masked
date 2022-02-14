
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* priv_data; } ;
struct TYPE_11__ {int size; int data; } ;
struct TYPE_10__ {char version; int frame_num; int * last; int swap_planes; scalar_t__ has_alpha; } ;
typedef int GetBitContext ;
typedef TYPE_1__ BinkContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__* const,int *,int *,int,int) ;
 int FUNC_3 (TYPE_1__* const,int *,int *,int,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,int *,int ) ;
 int FUNC_6 (TYPE_3__*,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_1, void *VAR_2, int *VAR_3, AVPacket *VAR_4)
{
    BinkContext * const VAR_5 = VAR_1->priv_data;
    AVFrame *VAR_6 = VAR_2;
    GetBitContext VAR_7;
    int VAR_8, VAR_9, VAR_10;
    int VAR_11 = VAR_4->size << 3;

    if (VAR_5->version > 'b') {
        if ((VAR_10 = FUNC_5(VAR_1, VAR_6, VAR_0)) < 0)
            return VAR_10;
    } else {
        if ((VAR_10 = FUNC_6(VAR_1, VAR_5->last, 0)) < 0)
            return VAR_10;
        if ((VAR_10 = FUNC_0(VAR_6, VAR_5->last)) < 0)
            return VAR_10;
    }

    FUNC_8(&VAR_7, VAR_4->data, VAR_11);
    if (VAR_5->has_alpha) {
        if (VAR_5->version >= 'i')
            FUNC_9(&VAR_7, 32);
        if ((VAR_10 = FUNC_2(VAR_5, VAR_6, &VAR_7, 3, 0)) < 0)
            return VAR_10;
    }
    if (VAR_5->version >= 'i')
        FUNC_9(&VAR_7, 32);

    VAR_5->frame_num++;

    for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
        VAR_9 = (!VAR_8 || !VAR_5->swap_planes) ? VAR_8 : (VAR_8 ^ 3);

        if (VAR_5->version > 'b') {
            if ((VAR_10 = FUNC_2(VAR_5, VAR_6, &VAR_7, VAR_9, !!VAR_8)) < 0)
                return VAR_10;
        } else {
            if ((VAR_10 = FUNC_3(VAR_5, VAR_6, &VAR_7, VAR_9,
                                          VAR_5->frame_num == 1, !!VAR_8)) < 0)
                return VAR_10;
        }
        if (FUNC_7(&VAR_7) >= VAR_11)
            break;
    }
    FUNC_4();

    if (VAR_5->version > 'b') {
        FUNC_1(VAR_5->last);
        if ((VAR_10 = FUNC_0(VAR_5->last, VAR_6)) < 0)
            return VAR_10;
    }

    *VAR_3 = 1;


    return VAR_4->size;
}
