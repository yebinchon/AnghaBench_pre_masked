
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ height; scalar_t__ width; int pix_fmt; } ;
struct TYPE_7__ {int* linesize; scalar_t__ height; scalar_t__ width; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1, AVFrame *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    int VAR_6, VAR_7;
    VAR_4 = FUNC_0(VAR_1->pix_fmt, &VAR_6,
                                           &VAR_7);
    if (VAR_4 < 0)
        return VAR_4;

    VAR_2->width = VAR_1->width + 2 * VAR_0;
    VAR_2->height = VAR_1->height + 2 * VAR_0 + 2;
    VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
    if (VAR_4 < 0)
        return VAR_4;

    for (VAR_5 = 0; VAR_2->data[VAR_5]; VAR_5++) {
        int VAR_8 = (VAR_0 >> (VAR_5 && VAR_5<3 ? VAR_7 : 0)) *
                     VAR_2->linesize[VAR_5] + 32;
        VAR_2->data[VAR_5] += VAR_8;
    }
    VAR_2->width = VAR_1->width;
    VAR_2->height = VAR_1->height;

    return 0;
}
