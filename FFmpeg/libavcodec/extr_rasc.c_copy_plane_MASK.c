
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int height; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int * linesize; int ** data; } ;
struct TYPE_7__ {int stride; } ;
typedef TYPE_1__ RASCContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0, AVFrame *VAR_1, AVFrame *VAR_2)
{
    RASCContext *VAR_3 = VAR_0->priv_data;
    uint8_t *VAR_4 = VAR_1->data[0];
    uint8_t *VAR_5 = VAR_2->data[0];

    for (int VAR_6 = 0; VAR_6 < VAR_0->height; VAR_6++) {
        FUNC_0(VAR_5, VAR_4, VAR_3->stride);
        VAR_4 += VAR_1->linesize[0];
        VAR_5 += VAR_2->linesize[0];
    }
}
