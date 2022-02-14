
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__**) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_8(AVBSFContext *VAR_2, AVPacket *VAR_3)
{
    AVPacket *VAR_4;
    int VAR_5 = 0;

    VAR_5 = FUNC_6(VAR_2, &VAR_4);
    if (VAR_5 < 0)
        return VAR_5;

    if (VAR_4->size > 0xffff) {
        VAR_5 = VAR_0;
        goto fail;
    }

    VAR_5 = FUNC_2(VAR_3, VAR_4->size + 2);
    if (VAR_5 < 0) {
        VAR_5 = FUNC_0(VAR_1);
        goto fail;
    }

    VAR_5 = FUNC_3(VAR_3, VAR_4);
    if (VAR_5 < 0)
        goto fail;

    FUNC_1(VAR_3->data, VAR_4->size);
    FUNC_7(VAR_3->data + 2, VAR_4->data, VAR_4->size);

fail:
    if (VAR_5 < 0)
        FUNC_5(VAR_3);
    FUNC_4(&VAR_4);
    return VAR_5;
}
