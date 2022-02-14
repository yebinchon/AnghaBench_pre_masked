
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_15__ {TYPE_1__* priv_data; } ;
struct TYPE_14__ {scalar_t__* data; } ;
struct TYPE_13__ {int size; scalar_t__ data; } ;
struct TYPE_11__ {int no_of_bytes; } ;
struct TYPE_12__ {TYPE_10__ encoder; } ;
typedef TYPE_1__ ILBCEncContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int *,int const*,TYPE_10__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*,int,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0, AVPacket *VAR_1,
                             const AVFrame *VAR_2, int *VAR_3)
{
    ILBCEncContext *VAR_4 = VAR_0->priv_data;
    int VAR_5;

    if ((VAR_5 = FUNC_1(VAR_0, VAR_1, 50, 0)) < 0)
        return VAR_5;

    FUNC_0((uint16_t *) VAR_1->data, (const int16_t *) VAR_2->data[0], &VAR_4->encoder);

    VAR_1->size = VAR_4->encoder.no_of_bytes;
    *VAR_3 = 1;
    return 0;
}
