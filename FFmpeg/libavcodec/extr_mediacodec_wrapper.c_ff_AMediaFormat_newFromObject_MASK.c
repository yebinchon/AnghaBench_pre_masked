
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int jfields; int object; int * class; } ;
struct TYPE_13__ {int (* NewGlobalRef ) (TYPE_1__**,void*) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef TYPE_2__ FFAMediaFormat ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**) ;
 TYPE_2__* FUNC_1 (int) ;
 TYPE_1__** FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__**,int *,int ,int,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__**,int *,int ,int,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__**,void*) ;

__attribute__((used)) static FFAMediaFormat *FUNC_6(void *VAR_2)
{
    JNIEnv *VAR_3 = ((void*)0);
    FFAMediaFormat *VAR_4 = ((void*)0);

    VAR_4 = FUNC_1(sizeof(FFAMediaFormat));
    if (!VAR_4) {
        return ((void*)0);
    }
    VAR_4->class = &VAR_0;

    VAR_3 = FUNC_2(VAR_4);
    if (!VAR_3) {
        FUNC_0(&VAR_4);
        return ((void*)0);
    }

    if (FUNC_3(VAR_3, &VAR_4->jfields, VAR_1, 1, VAR_4) < 0) {
        goto fail;
    }

    VAR_4->object = (*VAR_3)->NewGlobalRef(VAR_3, VAR_2);
    if (!VAR_4->object) {
        goto fail;
    }

    return VAR_4;
fail:
    FUNC_4(VAR_3, &VAR_4->jfields, VAR_1, 1, VAR_4);

    FUNC_0(&VAR_4);

    return ((void*)0);
}
