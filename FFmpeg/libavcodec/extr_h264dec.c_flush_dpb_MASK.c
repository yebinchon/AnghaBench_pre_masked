
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {scalar_t__ context_initialized; scalar_t__ mb_y; int cur_pic; int * cur_pic_ptr; int * DPB; int sei; int delayed_pic; } ;
typedef TYPE_1__ H264Context ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(AVCodecContext *VAR_1)
{
    H264Context *VAR_2 = VAR_1->priv_data;
    int VAR_3;

    FUNC_4(VAR_2->delayed_pic, 0, sizeof(VAR_2->delayed_pic));

    FUNC_0(VAR_2);
    FUNC_2(&VAR_2->sei);

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        FUNC_3(VAR_2, &VAR_2->DPB[VAR_3]);
    VAR_2->cur_pic_ptr = ((void*)0);
    FUNC_3(VAR_2, &VAR_2->cur_pic);

    VAR_2->mb_y = 0;

    FUNC_1(VAR_2);
    VAR_2->context_initialized = 0;
}
