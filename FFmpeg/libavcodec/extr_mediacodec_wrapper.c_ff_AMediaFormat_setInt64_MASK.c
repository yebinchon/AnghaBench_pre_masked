
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int * jstring ;
typedef int int64_t ;
struct TYPE_13__ {int set_long_id; } ;
struct TYPE_15__ {TYPE_1__ jfields; int object; } ;
struct TYPE_14__ {int (* DeleteLocalRef ) (TYPE_2__**,int *) ;int (* CallVoidMethod ) (TYPE_2__**,int ,int ,int *,int ) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ FFAMediaFormat ;


 int FUNC_0 (TYPE_2__**,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__**,int,TYPE_3__*) ;
 int * FUNC_3 (TYPE_2__**,char const*,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__**,int ,int ,int *,int ) ;
 int FUNC_5 (TYPE_2__**,int *) ;

void FUNC_6(FFAMediaFormat* VAR_0, const char* VAR_1, int64_t VAR_2)
{
    JNIEnv *VAR_3 = ((void*)0);
    jstring VAR_4 = ((void*)0);

    FUNC_1(VAR_0 != ((void*)0));

    FUNC_0(VAR_3, VAR_0);

    VAR_4 = FUNC_3(VAR_3, VAR_1, VAR_0);
    if (!VAR_4) {
        goto fail;
    }

    (*VAR_3)->CallVoidMethod(VAR_3, VAR_0->object, VAR_0->jfields.set_long_id, VAR_4, VAR_2);
    if (FUNC_2(VAR_3, 1, VAR_0) < 0) {
        goto fail;
    }

fail:
    if (VAR_4) {
        (*VAR_3)->DeleteLocalRef(VAR_3, VAR_4);
    }
}
