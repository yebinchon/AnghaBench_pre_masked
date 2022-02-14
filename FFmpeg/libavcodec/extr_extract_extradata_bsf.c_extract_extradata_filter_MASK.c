
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int (* extract ) (TYPE_2__*,int *,int **,int*) ;} ;
typedef TYPE_1__ ExtractExtradataContext ;
typedef int AVPacket ;
typedef TYPE_2__ AVBSFContext ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *,int ,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *,int **,int*) ;

__attribute__((used)) static int FUNC_5(AVBSFContext *VAR_1, AVPacket *VAR_2)
{
    ExtractExtradataContext *VAR_3 = VAR_1->priv_data;
    uint8_t *VAR_4 = ((void*)0);
    int VAR_5;
    int VAR_6 = 0;

    VAR_6 = FUNC_3(VAR_1, VAR_2);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_6 = VAR_3->extract(VAR_1, VAR_2, &VAR_4, &VAR_5);
    if (VAR_6 < 0)
        goto fail;

    if (VAR_4) {
        VAR_6 = FUNC_1(VAR_2, VAR_0,
                                      VAR_4, VAR_5);
        if (VAR_6 < 0) {
            FUNC_0(&VAR_4);
            goto fail;
        }
    }

    return 0;

fail:
    FUNC_2(VAR_2);
    return VAR_6;
}
