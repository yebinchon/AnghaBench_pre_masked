
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {TYPE_1__* priv_data; } ;
struct TYPE_15__ {int palette_has_changed; int const** data; } ;
struct TYPE_14__ {int size; int * data; } ;
struct TYPE_13__ {int size; int const* pal; int const* buf; } ;
typedef TYPE_1__ IdcinContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,char*,int) ;
 int * FUNC_1 (TYPE_2__*,int ,int*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_4 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_4,
                              void *VAR_5, int *VAR_6,
                              AVPacket *VAR_7)
{
    const uint8_t *VAR_8 = VAR_7->data;
    int VAR_9 = VAR_7->size;
    IdcinContext *VAR_10 = VAR_4->priv_data;
    int VAR_11;
    const uint8_t *VAR_12 = FUNC_1(VAR_7, VAR_3, &VAR_11);
    AVFrame *VAR_13 = VAR_5;
    int VAR_14;

    VAR_10->buf = VAR_8;
    VAR_10->size = VAR_9;

    if ((VAR_14 = FUNC_2(VAR_4, VAR_13, 0)) < 0)
        return VAR_14;

    if (FUNC_3(VAR_10, VAR_13))
        return VAR_0;

    if (VAR_12 && VAR_11 == VAR_1) {
        VAR_13->palette_has_changed = 1;
        FUNC_4(VAR_10->pal, VAR_12, VAR_1);
    } else if (VAR_12) {
        FUNC_0(VAR_4, VAR_2, "Palette size %d is wrong\n", VAR_11);
    }

    FUNC_4(VAR_13->data[1], VAR_10->pal, VAR_1);

    *VAR_6 = 1;


    return VAR_9;
}
