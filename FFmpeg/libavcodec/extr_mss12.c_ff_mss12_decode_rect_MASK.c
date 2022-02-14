
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ overread; int (* get_model_sym ) (TYPE_3__*,int *) ;} ;
struct TYPE_14__ {TYPE_1__* c; int split_mode; } ;
struct TYPE_13__ {int keyframe; } ;
typedef TYPE_2__ SliceContext ;
typedef TYPE_3__ ArithCoder ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int,int,int,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int,int,int,int) ;
 int FUNC_3 (TYPE_3__*,int *) ;

int FUNC_4(SliceContext *VAR_2, ArithCoder *VAR_3,
                         int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;
    if (VAR_3->overread > VAR_1)
        return VAR_0;

    VAR_8 = VAR_3->get_model_sym(VAR_3, &VAR_2->split_mode);

    switch (VAR_8) {
    case 128:
        if ((VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_7)) < 1)
            return -1;
        if (FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_9))
            return -1;
        if (FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5 + VAR_9, VAR_6, VAR_7 - VAR_9))
            return -1;
        break;
    case 130:
        if ((VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_6)) < 1)
            return -1;
        if (FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_9, VAR_7))
            return -1;
        if (FUNC_4(VAR_2, VAR_3, VAR_4 + VAR_9, VAR_5, VAR_6 - VAR_9, VAR_7))
            return -1;
        break;
    case 129:
        if (VAR_2->c->keyframe)
            return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
        else
            return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    default:
        return -1;
    }

    return 0;
}
