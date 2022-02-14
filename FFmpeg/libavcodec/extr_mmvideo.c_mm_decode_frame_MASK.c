
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_15__ {TYPE_1__* priv_data; } ;
struct TYPE_14__ {int size; int * data; } ;
struct TYPE_13__ {TYPE_10__* frame; int palette; int gb; } ;
struct TYPE_12__ {int * data; } ;
typedef TYPE_1__ MmContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int VAR_2 ;







 int FUNC_1 (void*,TYPE_10__*) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_10__*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_3,
                            void *VAR_4, int *VAR_5,
                            AVPacket *VAR_6)
{
    const uint8_t *VAR_7 = VAR_6->data;
    int VAR_8 = VAR_6->size;
    MmContext *VAR_9 = VAR_3->priv_data;
    int VAR_10, VAR_11;

    if (VAR_8 < VAR_2)
        return VAR_0;
    VAR_10 = FUNC_0(&VAR_7[0]);
    VAR_7 += VAR_2;
    VAR_8 -= VAR_2;
    FUNC_2(&VAR_9->gb, VAR_7, VAR_8);

    if ((VAR_11 = FUNC_3(VAR_3, VAR_9->frame, 0)) < 0)
        return VAR_11;

    switch(VAR_10) {
    case 128 : FUNC_7(VAR_9); return VAR_6->size;
    case 131 : VAR_11 = FUNC_6(VAR_9, 0, 0); break;
    case 130 : VAR_11 = FUNC_6(VAR_9, 1, 0); break;
    case 129 : VAR_11 = FUNC_6(VAR_9, 1, 1); break;
    case 134 : VAR_11 = FUNC_5(VAR_9, 0, 0); break;
    case 133 : VAR_11 = FUNC_5(VAR_9, 1, 0); break;
    case 132 : VAR_11 = FUNC_5(VAR_9, 1, 1); break;
    default:
        VAR_11 = VAR_0;
        break;
    }
    if (VAR_11 < 0)
        return VAR_11;

    FUNC_4(VAR_9->frame->data[1], VAR_9->palette, VAR_1);

    if ((VAR_11 = FUNC_1(VAR_4, VAR_9->frame)) < 0)
        return VAR_11;

    *VAR_5 = 1;

    return VAR_6->size;
}
