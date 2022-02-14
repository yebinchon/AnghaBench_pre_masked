
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_1__ ;


typedef int * jthrowable ;
typedef int * jstring ;
typedef int * jmethodID ;
typedef int * jclass ;
struct TYPE_27__ {int (* DeleteLocalRef ) (TYPE_1__**,int *) ;int (* ExceptionClear ) (TYPE_1__**) ;scalar_t__ (* ExceptionCheck ) (TYPE_1__**) ;int * (* CallObjectMethod ) (TYPE_1__**,int *,int *) ;int * (* GetMethodID ) (TYPE_1__**,int *,char*,char*) ;int * (* GetObjectClass ) (TYPE_1__**,int *) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef int AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char**) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (void*,int ,char*) ;
 char* FUNC_5 (TYPE_1__**,int *,void*) ;
 int * FUNC_6 (TYPE_1__**,int *) ;
 int * FUNC_7 (TYPE_1__**,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__**) ;
 int FUNC_9 (TYPE_1__**) ;
 int FUNC_10 (TYPE_1__**,int *) ;
 int * FUNC_11 (TYPE_1__**,int *,char*,char*) ;
 scalar_t__ FUNC_12 (TYPE_1__**) ;
 int FUNC_13 (TYPE_1__**) ;
 int * FUNC_14 (TYPE_1__**,int *,int *) ;
 scalar_t__ FUNC_15 (TYPE_1__**) ;
 int FUNC_16 (TYPE_1__**) ;
 scalar_t__ FUNC_17 (TYPE_1__**) ;
 int FUNC_18 (TYPE_1__**,int *) ;
 int FUNC_19 (TYPE_1__**,int *) ;
 int FUNC_20 (TYPE_1__**,int *) ;
 int FUNC_21 (TYPE_1__**,int *) ;
 int FUNC_22 (TYPE_1__**) ;
 int * FUNC_23 (TYPE_1__**,int *) ;
 scalar_t__ FUNC_24 (TYPE_1__**) ;
 int FUNC_25 (TYPE_1__**) ;
 int * FUNC_26 (TYPE_1__**,int *,char*,char*) ;
 scalar_t__ FUNC_27 (TYPE_1__**) ;
 int FUNC_28 (TYPE_1__**) ;

int FUNC_29(JNIEnv *VAR_4, jthrowable VAR_5, char **VAR_6, void *VAR_7)
{
    int VAR_8 = 0;

    AVBPrint VAR_9;

    char *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);

    jclass VAR_12 = ((void*)0);
    jmethodID VAR_13 = ((void*)0);

    jclass VAR_14 = ((void*)0);
    jmethodID VAR_15 = ((void*)0);

    jstring VAR_16 = ((void*)0);

    FUNC_1(&VAR_9, 0, VAR_1);

    VAR_14 = (*VAR_4)->GetObjectClass(VAR_4, VAR_5);
    if ((*VAR_4)->ExceptionCheck(VAR_4)) {
        (*VAR_4)->ExceptionClear(VAR_4);
        FUNC_4(VAR_7, VAR_2, "Could not find Throwable class\n");
        VAR_8 = VAR_0;
        goto done;
    }

    VAR_12 = (*VAR_4)->GetObjectClass(VAR_4, VAR_14);
    if ((*VAR_4)->ExceptionCheck(VAR_4)) {
        (*VAR_4)->ExceptionClear(VAR_4);
        FUNC_4(VAR_7, VAR_2, "Could not find Throwable class's class\n");
        VAR_8 = VAR_0;
        goto done;
    }

    VAR_13 = (*VAR_4)->GetMethodID(VAR_4, VAR_12, "getName", "()Ljava/lang/String;");
    if ((*VAR_4)->ExceptionCheck(VAR_4)) {
        (*VAR_4)->ExceptionClear(VAR_4);
        FUNC_4(VAR_7, VAR_2, "Could not find method Class.getName()\n");
        VAR_8 = VAR_0;
        goto done;
    }

    VAR_16 = (*VAR_4)->CallObjectMethod(VAR_4, VAR_14, VAR_13);
    if ((*VAR_4)->ExceptionCheck(VAR_4)) {
        (*VAR_4)->ExceptionClear(VAR_4);
        FUNC_4(VAR_7, VAR_2, "Class.getName() threw an exception\n");
        VAR_8 = VAR_0;
        goto done;
    }

    if (VAR_16) {
        VAR_10 = FUNC_5(VAR_4, VAR_16, VAR_7);
        (*VAR_4)->DeleteLocalRef(VAR_4, VAR_16);
        VAR_16 = ((void*)0);
    }

    VAR_15 = (*VAR_4)->GetMethodID(VAR_4, VAR_14, "getMessage", "()Ljava/lang/String;");
    if ((*VAR_4)->ExceptionCheck(VAR_4)) {
        (*VAR_4)->ExceptionClear(VAR_4);
        FUNC_4(VAR_7, VAR_2, "Could not find method java/lang/Throwable.getMessage()\n");
        VAR_8 = VAR_0;
        goto done;
    }

    VAR_16 = (*VAR_4)->CallObjectMethod(VAR_4, VAR_5, VAR_15);
    if ((*VAR_4)->ExceptionCheck(VAR_4)) {
        (*VAR_4)->ExceptionClear(VAR_4);
        FUNC_4(VAR_7, VAR_2, "Throwable.getMessage() threw an exception\n");
        VAR_8 = VAR_0;
        goto done;
    }

    if (VAR_16) {
        VAR_11 = FUNC_5(VAR_4, VAR_16, VAR_7);
        (*VAR_4)->DeleteLocalRef(VAR_4, VAR_16);
        VAR_16 = ((void*)0);
    }

    if (VAR_10 && VAR_11) {
        FUNC_2(&VAR_9, "%s: %s", VAR_10, VAR_11);
    } else if (VAR_10 && !VAR_11) {
        FUNC_2(&VAR_9, "%s occurred", VAR_10);
    } else if (!VAR_10 && VAR_11) {
        FUNC_2(&VAR_9, "Exception: %s", VAR_11);
    } else {
        FUNC_4(VAR_7, VAR_3, "Could not retrieve exception name and message\n");
        FUNC_2(&VAR_9, "Exception occurred");
    }

    VAR_8 = FUNC_0(&VAR_9, VAR_6);
done:

    FUNC_3(VAR_10);
    FUNC_3(VAR_11);

    if (VAR_12) {
        (*VAR_4)->DeleteLocalRef(VAR_4, VAR_12);
    }

    if (VAR_14) {
        (*VAR_4)->DeleteLocalRef(VAR_4, VAR_14);
    }

    if (VAR_16) {
        (*VAR_4)->DeleteLocalRef(VAR_4, VAR_16);
    }

    return VAR_8;
}
