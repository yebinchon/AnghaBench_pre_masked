
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int palette; int gb; } ;
typedef TYPE_1__ VqaContext ;
struct TYPE_14__ {TYPE_1__* priv_data; } ;
struct TYPE_13__ {int palette_has_changed; int * data; } ;
struct TYPE_12__ {int size; int data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_1,
                            void *VAR_2, int *VAR_3,
                            AVPacket *VAR_4)
{
    VqaContext *VAR_5 = VAR_1->priv_data;
    AVFrame *VAR_6 = VAR_2;
    int VAR_7;

    if ((VAR_7 = FUNC_1(VAR_1, VAR_6, 0)) < 0)
        return VAR_7;

    FUNC_0(&VAR_5->gb, VAR_4->data, VAR_4->size);
    if ((VAR_7 = FUNC_3(VAR_5, VAR_6)) < 0)
        return VAR_7;


    FUNC_2(VAR_6->data[1], VAR_5->palette, VAR_0 * 4);
    VAR_6->palette_has_changed = 1;

    *VAR_3 = 1;


    return VAR_4->size;
}
