
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {int size; int data; } ;
struct TYPE_7__ {int frame; int gb; } ;
typedef TYPE_1__ RpzaContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (void*,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_0,
                             void *VAR_1, int *VAR_2,
                             AVPacket *VAR_3)
{
    RpzaContext *VAR_4 = VAR_0->priv_data;
    int VAR_5;

    FUNC_1(&VAR_4->gb, VAR_3->data, VAR_3->size);

    VAR_5 = FUNC_2(VAR_4);
    if (VAR_5 < 0)
        return VAR_5;

    if ((VAR_5 = FUNC_0(VAR_1, VAR_4->frame)) < 0)
        return VAR_5;

    *VAR_2 = 1;


    return VAR_3->size;
}
