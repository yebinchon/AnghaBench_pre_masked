
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int y; int font_height; scalar_t__ x; int font; TYPE_1__* frame; } ;
typedef TYPE_2__ XbinContext ;
struct TYPE_7__ {int height; scalar_t__ width; TYPE_2__* priv_data; } ;
struct TYPE_5__ {scalar_t__* data; int* linesize; } ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int,int ,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_1, int VAR_2, int VAR_3)
{
    XbinContext *VAR_4 = VAR_1->priv_data;
    if (VAR_4->y > VAR_1->height - VAR_4->font_height)
        return;
    FUNC_0(VAR_4->frame->data[0] + VAR_4->y * VAR_4->frame->linesize[0] + VAR_4->x,
                    VAR_4->frame->linesize[0], VAR_4->font, VAR_4->font_height, VAR_2,
                    VAR_3 & 0x0F, VAR_3 >> 4);
    VAR_4->x += VAR_0;
    if (VAR_4->x > VAR_1->width - VAR_0) {
        VAR_4->x = 0;
        VAR_4->y += VAR_4->font_height;
    }
}
