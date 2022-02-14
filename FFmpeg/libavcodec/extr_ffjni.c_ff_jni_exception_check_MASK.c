
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int jthrowable ;
struct TYPE_10__ {int (* DeleteLocalRef ) (TYPE_1__**,int ) ;int (* ExceptionClear ) (TYPE_1__**) ;int (* ExceptionOccurred ) (TYPE_1__**) ;int (* ExceptionCheck ) (TYPE_1__**) ;} ;
typedef TYPE_1__* JNIEnv ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (void*,int ,char*,char*) ;
 int FUNC_2 (TYPE_1__**,int ,char**,void*) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_1__**) ;
 int FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (TYPE_1__**) ;
 int FUNC_7 (TYPE_1__**,int ) ;
 int FUNC_8 (TYPE_1__**,int ) ;

int FUNC_9(JNIEnv *VAR_1, int VAR_2, void *VAR_3)
{
    int VAR_4;

    jthrowable VAR_5;

    char *VAR_6 = ((void*)0);

    if (!(*(VAR_1))->ExceptionCheck((VAR_1))) {
        return 0;
    }

    if (!VAR_2) {
        (*(VAR_1))->ExceptionClear((VAR_1));
        return -1;
    }

    VAR_5 = (*VAR_1)->ExceptionOccurred(VAR_1);
    (*(VAR_1))->ExceptionClear((VAR_1));

    if ((VAR_4 = FUNC_2(VAR_1, VAR_5, &VAR_6, VAR_3)) < 0) {
        (*VAR_1)->DeleteLocalRef(VAR_1, VAR_5);
        return VAR_4;
    }

    (*VAR_1)->DeleteLocalRef(VAR_1, VAR_5);

    FUNC_1(VAR_3, VAR_0, "%s\n", VAR_6);
    FUNC_0(VAR_6);

    return -1;
}
