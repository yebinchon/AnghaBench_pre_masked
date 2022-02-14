
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int * jobject ;
struct TYPE_19__ {int init_id; int mediaformat_class; } ;
struct TYPE_18__ {TYPE_7__ jfields; int object; int * class; } ;
struct TYPE_17__ {int (* DeleteLocalRef ) (TYPE_1__**,int *) ;int (* NewGlobalRef ) (TYPE_1__**,int *) ;int * (* NewObject ) (TYPE_1__**,int ,int ) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef TYPE_2__ FFAMediaFormat ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**) ;
 TYPE_2__* FUNC_1 (int) ;
 TYPE_1__** FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__**,TYPE_7__*,int ,int,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__**,TYPE_7__*,int ,int,TYPE_2__*) ;
 int VAR_1 ;
 int * FUNC_5 (TYPE_1__**,int ,int ) ;
 int FUNC_6 (TYPE_1__**,int *) ;
 int FUNC_7 (TYPE_1__**,int *) ;

FFAMediaFormat *FUNC_8(void)
{
    JNIEnv *VAR_2 = ((void*)0);
    FFAMediaFormat *VAR_3 = ((void*)0);
    jobject VAR_4 = ((void*)0);

    VAR_3 = FUNC_1(sizeof(FFAMediaFormat));
    if (!VAR_3) {
        return ((void*)0);
    }
    VAR_3->class = &VAR_0;

    VAR_2 = FUNC_2(VAR_3);
    if (!VAR_2) {
        FUNC_0(&VAR_3);
        return ((void*)0);
    }

    if (FUNC_3(VAR_2, &VAR_3->jfields, VAR_1, 1, VAR_3) < 0) {
        goto fail;
    }

    VAR_4 = (*VAR_2)->NewObject(VAR_2, VAR_3->jfields.mediaformat_class, VAR_3->jfields.init_id);
    if (!VAR_4) {
        goto fail;
    }

    VAR_3->object = (*VAR_2)->NewGlobalRef(VAR_2, VAR_4);
    if (!VAR_3->object) {
        goto fail;
    }

fail:
    if (VAR_4) {
        (*VAR_2)->DeleteLocalRef(VAR_2, VAR_4);
    }

    if (!VAR_3->object) {
        FUNC_4(VAR_2, &VAR_3->jfields, VAR_1, 1, VAR_3);
        FUNC_0(&VAR_3);
    }

    return VAR_3;
}
