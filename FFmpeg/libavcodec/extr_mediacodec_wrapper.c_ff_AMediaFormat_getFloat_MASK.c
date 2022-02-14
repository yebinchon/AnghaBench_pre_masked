
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int * jstring ;
typedef int jboolean ;
struct TYPE_14__ {int get_float_id; int contains_key_id; } ;
struct TYPE_16__ {TYPE_1__ jfields; int object; } ;
struct TYPE_15__ {float (* CallFloatMethod ) (TYPE_2__**,int ,int ,int *) ;int (* DeleteLocalRef ) (TYPE_2__**,int *) ;int (* CallBooleanMethod ) (TYPE_2__**,int ,int ,int *) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ FFAMediaFormat ;


 int FUNC_0 (TYPE_2__**,TYPE_3__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__**,int,TYPE_3__*) ;
 int * FUNC_3 (TYPE_2__**,char const*,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__**,int ,int ,int *) ;
 float FUNC_5 (TYPE_2__**,int ,int ,int *) ;
 int FUNC_6 (TYPE_2__**,int *) ;

int FUNC_7(FFAMediaFormat* VAR_0, const char *VAR_1, float *VAR_2)
{
    int VAR_3 = 1;

    JNIEnv *VAR_4 = ((void*)0);
    jstring VAR_5 = ((void*)0);
    jboolean VAR_6;

    FUNC_1(VAR_0 != ((void*)0));

    FUNC_0(VAR_4, VAR_0, 0);

    VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_0);
    if (!VAR_5) {
        VAR_3 = 0;
        goto fail;
    }

    VAR_6 = (*VAR_4)->CallBooleanMethod(VAR_4, VAR_0->object, VAR_0->jfields.contains_key_id, VAR_5);
    if (!VAR_6 || (VAR_3 = FUNC_2(VAR_4, 1, VAR_0)) < 0) {
        VAR_3 = 0;
        goto fail;
    }

    *VAR_2 = (*VAR_4)->CallFloatMethod(VAR_4, VAR_0->object, VAR_0->jfields.get_float_id, VAR_5);
    if ((VAR_3 = FUNC_2(VAR_4, 1, VAR_0)) < 0) {
        VAR_3 = 0;
        goto fail;
    }

    VAR_3 = 1;
fail:
    if (VAR_5) {
        (*VAR_4)->DeleteLocalRef(VAR_4, VAR_5);
    }

    return VAR_3;
}
