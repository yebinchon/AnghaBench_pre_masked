
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int * linesize; int ** data; } ;
struct TYPE_6__ {int height; int width; int * processed; } ;
typedef TYPE_1__ Hnm4VideoContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0, AVFrame *VAR_1)
{
    Hnm4VideoContext *VAR_2 = VAR_0->priv_data;
    uint8_t *VAR_3 = VAR_2->processed;
    uint8_t *VAR_4 = VAR_1->data[0];
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2->height; VAR_5++) {
        FUNC_0(VAR_4, VAR_3, VAR_2->width);
        VAR_3 += VAR_2->width;
        VAR_4 += VAR_1->linesize[0];
    }
}
