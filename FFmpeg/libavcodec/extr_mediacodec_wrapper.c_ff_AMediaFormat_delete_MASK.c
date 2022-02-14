
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int jfields; int * object; } ;
struct TYPE_10__ {int (* DeleteGlobalRef ) (TYPE_1__**,int *) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef TYPE_2__ FFAMediaFormat ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (TYPE_1__**,int *,int ,int,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__**,int *) ;

int FUNC_4(FFAMediaFormat* VAR_2)
{
    int VAR_3 = 0;

    JNIEnv *VAR_4 = ((void*)0);

    if (!VAR_2) {
        return 0;
    }

    FUNC_0(VAR_4, VAR_2, VAR_0);

    (*VAR_4)->DeleteGlobalRef(VAR_4, VAR_2->object);
    VAR_2->object = ((void*)0);

    FUNC_2(VAR_4, &VAR_2->jfields, VAR_1, 1, VAR_2);

    FUNC_1(&VAR_2);

    return VAR_3;
}
