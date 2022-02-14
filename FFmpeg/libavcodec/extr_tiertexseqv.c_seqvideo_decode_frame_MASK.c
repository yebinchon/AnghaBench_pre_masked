
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int size; int * data; } ;
struct TYPE_8__ {int frame; } ;
typedef TYPE_1__ SeqVideoContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int const*,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_1,
                                 void *VAR_2, int *VAR_3,
                                 AVPacket *VAR_4)
{
    const uint8_t *VAR_5 = VAR_4->data;
    int VAR_6 = VAR_4->size;
    int VAR_7;

    SeqVideoContext *VAR_8 = VAR_1->priv_data;

    if ((VAR_7 = FUNC_1(VAR_1, VAR_8->frame, 0)) < 0)
        return VAR_7;

    if (FUNC_2(VAR_8, VAR_5, VAR_6))
        return VAR_0;

    if ((VAR_7 = FUNC_0(VAR_2, VAR_8->frame)) < 0)
        return VAR_7;
    *VAR_3 = 1;

    return VAR_6;
}
