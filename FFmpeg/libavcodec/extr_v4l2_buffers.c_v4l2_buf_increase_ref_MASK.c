
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int refcount; int self_ref; } ;
typedef TYPE_1__ V4L2m2mContext ;
struct TYPE_7__ {int context_refcount; int status; int context_ref; } ;
typedef TYPE_2__ V4L2Buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(V4L2Buffer *VAR_3)
{
    V4L2m2mContext *VAR_4 = FUNC_4(VAR_3);

    if (VAR_3->context_ref)
        FUNC_1(&VAR_3->context_refcount, 1);
    else {
        VAR_3->context_ref = FUNC_3(VAR_4->self_ref);
        if (!VAR_3->context_ref)
            return FUNC_0(VAR_0);

        VAR_3->context_refcount = 1;
    }

    VAR_3->status = VAR_1;
    FUNC_2(&VAR_4->refcount, 1, VAR_2);

    return 0;
}
