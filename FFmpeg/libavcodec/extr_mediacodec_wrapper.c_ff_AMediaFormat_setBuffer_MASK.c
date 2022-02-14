
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int * jstring ;
typedef int * jobject ;
struct TYPE_15__ {int set_bytebuffer_id; } ;
struct TYPE_17__ {TYPE_1__ jfields; int object; } ;
struct TYPE_16__ {int (* DeleteLocalRef ) (TYPE_2__**,int *) ;int (* CallVoidMethod ) (TYPE_2__**,int ,int ,int *,int *) ;int * (* NewDirectByteBuffer ) (TYPE_2__**,void*,size_t) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ FFAMediaFormat ;


 int FUNC_0 (TYPE_2__**,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (TYPE_2__**,int,TYPE_3__*) ;
 int * FUNC_4 (TYPE_2__**,char const*,TYPE_3__*) ;
 int FUNC_5 (void*,void*,size_t) ;
 int * FUNC_6 (TYPE_2__**,void*,size_t) ;
 int FUNC_7 (TYPE_2__**,int ,int ,int *,int *) ;
 int FUNC_8 (TYPE_2__**,int *) ;
 int FUNC_9 (TYPE_2__**,int *) ;

void FUNC_10(FFAMediaFormat* VAR_0, const char* VAR_1, void* VAR_2, size_t VAR_3)
{
    JNIEnv *VAR_4 = ((void*)0);
    jstring VAR_5 = ((void*)0);
    jobject VAR_6 = ((void*)0);
    void *VAR_7 = ((void*)0);

    FUNC_1(VAR_0 != ((void*)0));

    FUNC_0(VAR_4, VAR_0);

    VAR_5 = FUNC_4(VAR_4, VAR_1, VAR_0);
    if (!VAR_5) {
        goto fail;
    }

    if (!VAR_2 || !VAR_3) {
        goto fail;
    }

    VAR_7 = FUNC_2(VAR_3);
    if (!VAR_7) {
        goto fail;
    }

    FUNC_5(VAR_7, VAR_2, VAR_3);

    VAR_6 = (*VAR_4)->NewDirectByteBuffer(VAR_4, VAR_7, VAR_3);
    if (!VAR_6) {
        goto fail;
    }

    (*VAR_4)->CallVoidMethod(VAR_4, VAR_0->object, VAR_0->jfields.set_bytebuffer_id, VAR_5, VAR_6);
    if (FUNC_3(VAR_4, 1, VAR_0) < 0) {
        goto fail;
    }

fail:
    if (VAR_5) {
        (*VAR_4)->DeleteLocalRef(VAR_4, VAR_5);
    }

    if (VAR_6) {
        (*VAR_4)->DeleteLocalRef(VAR_4, VAR_6);
    }
}
