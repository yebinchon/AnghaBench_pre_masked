
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int height; int width; TYPE_2__* priv_data; } ;
struct TYPE_6__ {int y; int font_height; TYPE_1__* frame; } ;
struct TYPE_5__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_2__ AnsiContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_1)
{
    AnsiContext *VAR_2 = VAR_1->priv_data;
    int VAR_3;

    if (VAR_2->y <= VAR_1->height - 2*VAR_2->font_height) {
        VAR_2->y += VAR_2->font_height;
        return;
    }

    VAR_3 = 0;
    for (; VAR_3 < VAR_1->height - VAR_2->font_height; VAR_3++)
        FUNC_0(VAR_2->frame->data[0] + VAR_3 * VAR_2->frame->linesize[0],
               VAR_2->frame->data[0] + (VAR_3 + VAR_2->font_height) * VAR_2->frame->linesize[0],
               VAR_1->width);
    for (; VAR_3 < VAR_1->height; VAR_3++)
        FUNC_1(VAR_2->frame->data[0] + VAR_3 * VAR_2->frame->linesize[0],
            VAR_0, VAR_1->width);
}
