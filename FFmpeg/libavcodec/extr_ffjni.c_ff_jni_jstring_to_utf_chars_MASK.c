
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int jstring ;
typedef int jboolean ;
struct TYPE_9__ {char* (* GetStringUTFChars ) (TYPE_1__**,int ,int *) ;int (* ExceptionClear ) (TYPE_1__**) ;scalar_t__ (* ExceptionCheck ) (TYPE_1__**) ;int (* ReleaseStringUTFChars ) (TYPE_1__**,int ,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (TYPE_1__**,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_1__**) ;
 int FUNC_5 (TYPE_1__**,int ,char const*) ;
 scalar_t__ FUNC_6 (TYPE_1__**) ;
 int FUNC_7 (TYPE_1__**) ;

char *FUNC_8(JNIEnv *VAR_1, jstring VAR_2, void *VAR_3)
{
    char *VAR_4 = ((void*)0);
    const char *VAR_5 = ((void*)0);

    jboolean VAR_6 = 0;

    if (!VAR_2) {
        return ((void*)0);
    }

    VAR_5 = (*VAR_1)->GetStringUTFChars(VAR_1, VAR_2, &VAR_6);
    if ((*VAR_1)->ExceptionCheck(VAR_1)) {
        (*VAR_1)->ExceptionClear(VAR_1);
        FUNC_0(VAR_3, VAR_0, "String.getStringUTFChars() threw an exception\n");
        return ((void*)0);
    }

    VAR_4 = FUNC_1(VAR_5);

    (*VAR_1)->ReleaseStringUTFChars(VAR_1, VAR_2, VAR_5);
    if ((*VAR_1)->ExceptionCheck(VAR_1)) {
        (*VAR_1)->ExceptionClear(VAR_1);
        FUNC_0(VAR_3, VAR_0, "String.releaseStringUTFChars() threw an exception\n");
        return ((void*)0);
    }

    return VAR_4;
}
