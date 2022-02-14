
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int tmpl; int last_frame; scalar_t__ buf_size; int buf; int lzw; } ;
typedef TYPE_1__ GIFContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0)
{
    GIFContext *VAR_1 = VAR_0->priv_data;

    FUNC_1(&VAR_1->lzw);
    FUNC_1(&VAR_1->buf);
    VAR_1->buf_size = 0;
    FUNC_0(&VAR_1->last_frame);
    FUNC_1(&VAR_1->tmpl);
    return 0;
}
