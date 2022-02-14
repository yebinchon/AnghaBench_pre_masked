
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_12__ {int size; size_t compression; int frame; int const* buf; } ;
typedef TYPE_1__ TrueMotion1Context ;
struct TYPE_14__ {TYPE_1__* priv_data; } ;
struct TYPE_13__ {int size; int * data; } ;
struct TYPE_11__ {scalar_t__ algorithm; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,int ) ;
 TYPE_10__* VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_3,
                                    void *VAR_4, int *VAR_5,
                                    AVPacket *VAR_6)
{
    const uint8_t *VAR_7 = VAR_6->data;
    int VAR_8, VAR_9 = VAR_6->size;
    TrueMotion1Context *VAR_10 = VAR_3->priv_data;

    VAR_10->buf = VAR_7;
    VAR_10->size = VAR_9;

    if ((VAR_8 = FUNC_4(VAR_10)) < 0)
        return VAR_8;

    if ((VAR_8 = FUNC_1(VAR_3, VAR_10->frame, 0)) < 0)
        return VAR_8;

    if (VAR_2[VAR_10->compression].algorithm == VAR_1) {
        FUNC_3(VAR_10);
    } else if (VAR_2[VAR_10->compression].algorithm != VAR_0) {
        FUNC_2(VAR_10);
    }

    if ((VAR_8 = FUNC_0(VAR_4, VAR_10->frame)) < 0)
        return VAR_8;

    *VAR_5 = 1;


    return VAR_9;
}
