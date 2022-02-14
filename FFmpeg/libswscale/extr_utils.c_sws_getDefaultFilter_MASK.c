
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * chrV; int * chrH; int * lumV; int * lumH; } ;
typedef int SwsVector ;
typedef TYPE_1__ SwsFilter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (float,double) ;
 void* FUNC_6 () ;
 int FUNC_7 (int *,double) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,float) ;
 int FUNC_10 (int *,int) ;

SwsFilter *FUNC_11(float VAR_1, float VAR_2,
                                float VAR_3, float VAR_4,
                                float VAR_5, float VAR_6,
                                int VAR_7)
{
    SwsFilter *VAR_8 = FUNC_1(sizeof(SwsFilter));
    if (!VAR_8)
        return ((void*)0);

    if (VAR_1 != 0.0) {
        VAR_8->lumH = FUNC_5(VAR_1, 3.0);
        VAR_8->lumV = FUNC_5(VAR_1, 3.0);
    } else {
        VAR_8->lumH = FUNC_6();
        VAR_8->lumV = FUNC_6();
    }

    if (VAR_2 != 0.0) {
        VAR_8->chrH = FUNC_5(VAR_2, 3.0);
        VAR_8->chrV = FUNC_5(VAR_2, 3.0);
    } else {
        VAR_8->chrH = FUNC_6();
        VAR_8->chrV = FUNC_6();
    }

    if (!VAR_8->lumH || !VAR_8->lumV || !VAR_8->chrH || !VAR_8->chrV)
        goto fail;

    if (VAR_4 != 0.0) {
        SwsVector *VAR_9 = FUNC_6();
        if (!VAR_9)
            goto fail;
        FUNC_9(VAR_8->chrH, -VAR_4);
        FUNC_9(VAR_8->chrV, -VAR_4);
        FUNC_3(VAR_8->chrH, VAR_9);
        FUNC_3(VAR_8->chrV, VAR_9);
        FUNC_4(VAR_9);
    }

    if (VAR_3 != 0.0) {
        SwsVector *VAR_10 = FUNC_6();
        if (!VAR_10)
            goto fail;
        FUNC_9(VAR_8->lumH, -VAR_3);
        FUNC_9(VAR_8->lumV, -VAR_3);
        FUNC_3(VAR_8->lumH, VAR_10);
        FUNC_3(VAR_8->lumV, VAR_10);
        FUNC_4(VAR_10);
    }

    if (VAR_5 != 0.0)
        FUNC_10(VAR_8->chrH, (int)(VAR_5 + 0.5));

    if (VAR_6 != 0.0)
        FUNC_10(VAR_8->chrV, (int)(VAR_6 + 0.5));

    FUNC_7(VAR_8->chrH, 1.0);
    FUNC_7(VAR_8->chrV, 1.0);
    FUNC_7(VAR_8->lumH, 1.0);
    FUNC_7(VAR_8->lumV, 1.0);

    if (FUNC_2(VAR_8->chrH) ||
        FUNC_2(VAR_8->chrV) ||
        FUNC_2(VAR_8->lumH) ||
        FUNC_2(VAR_8->lumV))
        goto fail;

    if (VAR_7)
        FUNC_8(VAR_8->chrH, ((void*)0), VAR_0);
    if (VAR_7)
        FUNC_8(VAR_8->lumH, ((void*)0), VAR_0);

    return VAR_8;

fail:
    FUNC_4(VAR_8->lumH);
    FUNC_4(VAR_8->lumV);
    FUNC_4(VAR_8->chrH);
    FUNC_4(VAR_8->chrV);
    FUNC_0(&VAR_8);
    return ((void*)0);
}
