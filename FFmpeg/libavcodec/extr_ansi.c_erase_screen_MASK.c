
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int height; int width; TYPE_2__* priv_data; } ;
struct TYPE_6__ {scalar_t__ y; scalar_t__ x; TYPE_1__* frame; } ;
struct TYPE_5__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_2__ AnsiContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_1)
{
    AnsiContext *VAR_2 = VAR_1->priv_data;
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1->height; VAR_3++)
        FUNC_0(VAR_2->frame->data[0] + VAR_3 * VAR_2->frame->linesize[0], VAR_0, VAR_1->width);
    VAR_2->x = VAR_2->y = 0;
}
