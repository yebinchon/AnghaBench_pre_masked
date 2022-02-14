
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {int str; } ;
struct TYPE_17__ {TYPE_1__* priv_data; } ;
struct TYPE_16__ {int size; int data; } ;
struct TYPE_15__ {scalar_t__ num_rects; } ;
struct TYPE_14__ {int readorder; } ;
typedef TYPE_1__ FFASSDecoderContext ;
typedef TYPE_2__ AVSubtitle ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_5__*,int ,int ) ;
 int * FUNC_3 (TYPE_3__*,int ,int*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ,int *,int *) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_2,
                            void *VAR_3, int *VAR_4, AVPacket *VAR_5)
{
    AVSubtitle *VAR_6 = VAR_3;
    AVBPrint VAR_7;
    int VAR_8 = -1, VAR_9 = -1, VAR_10 = -1, VAR_11 = -1;
    int VAR_12, VAR_13;
    const uint8_t *VAR_14 = FUNC_3(VAR_5, VAR_1, &VAR_12);
    FFASSDecoderContext *VAR_15 = VAR_2->priv_data;

    if (VAR_14 && VAR_12 == 16) {
        VAR_8 = FUNC_0(VAR_14 );
        VAR_9 = FUNC_0(VAR_14 + 4);
        VAR_10 = FUNC_0(VAR_14 + 8);
        VAR_11 = FUNC_0(VAR_14 + 12);
    }

    if (VAR_5->size <= 0)
        return VAR_5->size;

    FUNC_2(&VAR_7, 0, VAR_0);

    VAR_13 = FUNC_5(VAR_2, &VAR_7, VAR_5->data, VAR_8, VAR_9, VAR_10, VAR_11);
    if (VAR_13 >= 0)
        VAR_13 = FUNC_4(VAR_6, VAR_7.str, VAR_15->readorder++, 0, ((void*)0), ((void*)0));
    FUNC_1(&VAR_7, ((void*)0));
    if (VAR_13 < 0)
        return VAR_13;

    *VAR_4 = VAR_6->num_rects > 0;
    return VAR_5->size;
}
