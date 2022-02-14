
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int str; } ;
struct TYPE_15__ {TYPE_1__* priv_data; } ;
struct TYPE_14__ {char* data; scalar_t__ size; } ;
struct TYPE_13__ {scalar_t__ num_rects; } ;
struct TYPE_12__ {int readorder; } ;
typedef TYPE_1__ FFASSDecoderContext ;
typedef TYPE_2__ AVSubtitle ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ AVBPrint ;


 int FUNC_0 (TYPE_5__*,int *) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int *,int *) ;
 int FUNC_3 (TYPE_5__*,char const*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_0,
                                 void *VAR_1, int *VAR_2, AVPacket *VAR_3)
{
    int VAR_4 = 0;
    AVSubtitle *VAR_5 = VAR_1;
    const char *VAR_6 = VAR_3->data;
    FFASSDecoderContext *VAR_7 = VAR_0->priv_data;
    AVBPrint VAR_8;

    FUNC_1(&VAR_8, 0, 4096);
    if (VAR_6 && VAR_3->size > 0 && !FUNC_3(&VAR_8, VAR_6))
        VAR_4 = FUNC_2(VAR_5, VAR_8.str, VAR_7->readorder++, 0, ((void*)0), ((void*)0));
    FUNC_0(&VAR_8, ((void*)0));
    if (VAR_4 < 0)
        return VAR_4;
    *VAR_2 = VAR_5->num_rects > 0;
    return VAR_3->size;
}
