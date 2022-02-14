
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int pic; int gb; } ;
typedef TYPE_1__ XanContext ;
struct TYPE_12__ {TYPE_1__* priv_data; } ;
struct TYPE_11__ {int size; int data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_2,
                            void *VAR_3, int *VAR_4,
                            AVPacket *VAR_5)
{
    XanContext *VAR_6 = VAR_2->priv_data;
    int VAR_7;
    int VAR_8;

    if ((VAR_8 = FUNC_4(VAR_2, VAR_6->pic, 0)) < 0)
        return VAR_8;

    FUNC_3(&VAR_6->gb, VAR_5->data, VAR_5->size);
    VAR_7 = FUNC_2(&VAR_6->gb);
    switch (VAR_7) {
    case 0:
        VAR_8 = FUNC_5(VAR_2);
        break;
    case 1:
        VAR_8 = FUNC_6(VAR_2);
        break;
    default:
        FUNC_1(VAR_2, VAR_1, "Unknown frame type %d\n", VAR_7);
        return VAR_0;
    }
    if (VAR_8)
        return VAR_8;

    if ((VAR_8 = FUNC_0(VAR_3, VAR_6->pic)) < 0)
        return VAR_8;

    *VAR_4 = 1;

    return VAR_5->size;
}
