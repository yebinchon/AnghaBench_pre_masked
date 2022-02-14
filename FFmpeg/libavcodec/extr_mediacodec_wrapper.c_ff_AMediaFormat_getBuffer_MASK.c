
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int * jstring ;
typedef int * jobject ;
typedef int jboolean ;
struct TYPE_17__ {int get_bytebuffer_id; int contains_key_id; } ;
struct TYPE_19__ {TYPE_1__ jfields; int object; } ;
struct TYPE_18__ {size_t (* GetDirectBufferCapacity ) (TYPE_2__**,int *) ;int (* DeleteLocalRef ) (TYPE_2__**,int *) ;void* (* GetDirectBufferAddress ) (TYPE_2__**,int *) ;int * (* CallObjectMethod ) (TYPE_2__**,int ,int ,int *) ;int (* CallBooleanMethod ) (TYPE_2__**,int ,int ,int *) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ FFAMediaFormat ;


 int FUNC_0 (TYPE_2__**,TYPE_3__*,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_2__**,int,TYPE_3__*) ;
 int * FUNC_4 (TYPE_2__**,char const*,TYPE_3__*) ;
 int FUNC_5 (void*,void*,size_t) ;
 int FUNC_6 (TYPE_2__**,int ,int ,int *) ;
 int * FUNC_7 (TYPE_2__**,int ,int ,int *) ;
 void* FUNC_8 (TYPE_2__**,int *) ;
 size_t FUNC_9 (TYPE_2__**,int *) ;
 int FUNC_10 (TYPE_2__**,int *) ;
 int FUNC_11 (TYPE_2__**,int *) ;

int FUNC_12(FFAMediaFormat* VAR_0, const char *VAR_1, void** VAR_2, size_t *VAR_3)
{
    int VAR_4 = 1;

    JNIEnv *VAR_5 = ((void*)0);
    jstring VAR_6 = ((void*)0);
    jboolean VAR_7;
    jobject VAR_8 = ((void*)0);

    FUNC_1(VAR_0 != ((void*)0));

    FUNC_0(VAR_5, VAR_0, 0);

    VAR_6 = FUNC_4(VAR_5, VAR_1, VAR_0);
    if (!VAR_6) {
        VAR_4 = 0;
        goto fail;
    }

    VAR_7 = (*VAR_5)->CallBooleanMethod(VAR_5, VAR_0->object, VAR_0->jfields.contains_key_id, VAR_6);
    if (!VAR_7 || (VAR_4 = FUNC_3(VAR_5, 1, VAR_0)) < 0) {
        VAR_4 = 0;
        goto fail;
    }

    VAR_8 = (*VAR_5)->CallObjectMethod(VAR_5, VAR_0->object, VAR_0->jfields.get_bytebuffer_id, VAR_6);
    if ((VAR_4 = FUNC_3(VAR_5, 1, VAR_0)) < 0) {
        VAR_4 = 0;
        goto fail;
    }

    *VAR_2 = (*VAR_5)->GetDirectBufferAddress(VAR_5, VAR_8);
    *VAR_3 = (*VAR_5)->GetDirectBufferCapacity(VAR_5, VAR_8);

    if (*VAR_2 && *VAR_3) {
        void *VAR_9 = *VAR_2;
        *VAR_2 = FUNC_2(*VAR_3);
        if (!*VAR_2) {
            VAR_4 = 0;
            goto fail;
        }

        FUNC_5(*VAR_2, VAR_9, *VAR_3);
    }

    VAR_4 = 1;
fail:
    if (VAR_6) {
        (*VAR_5)->DeleteLocalRef(VAR_5, VAR_6);
    }

    if (VAR_8) {
        (*VAR_5)->DeleteLocalRef(VAR_5, VAR_8);
    }

    return VAR_4;
}
