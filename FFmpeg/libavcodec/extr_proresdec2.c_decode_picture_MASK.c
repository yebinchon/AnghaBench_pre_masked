
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int (* execute2 ) (TYPE_4__*,int ,int *,int *,int) ;TYPE_3__* priv_data; } ;
struct TYPE_9__ {int slice_count; TYPE_2__* slices; TYPE_1__* frame; } ;
struct TYPE_8__ {scalar_t__ ret; } ;
struct TYPE_7__ {int decode_error_flags; } ;
typedef TYPE_3__ ProresContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,int *,int *,int) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_2)
{
    ProresContext *VAR_3 = VAR_2->priv_data;
    int VAR_4;
    int VAR_5 = 0;

    VAR_2->execute2(VAR_2, VAR_1, ((void*)0), ((void*)0), VAR_3->slice_count);

    for (VAR_4 = 0; VAR_4 < VAR_3->slice_count; VAR_4++)
        VAR_5 += VAR_3->slices[VAR_4].ret < 0;

    if (VAR_5)
        VAR_3->frame->decode_error_flags = VAR_0;
    if (VAR_5 < VAR_3->slice_count)
        return 0;

    return VAR_3->slices[0].ret;
}
