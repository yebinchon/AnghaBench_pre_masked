
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_6__ {int font_height; int y; TYPE_1__* frame; } ;
struct TYPE_5__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_2__ AnsiContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_1(AVCodecContext * VAR_1, int VAR_2, int VAR_3)
{
    AnsiContext *VAR_4 = VAR_1->priv_data;
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_4->font_height; VAR_5++)
        FUNC_0(VAR_4->frame->data[0] + (VAR_4->y + VAR_5)*VAR_4->frame->linesize[0] + VAR_2,
            VAR_0, VAR_3);
}
