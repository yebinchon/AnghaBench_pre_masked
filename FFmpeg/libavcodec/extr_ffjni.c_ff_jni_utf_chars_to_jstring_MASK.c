
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int * jstring ;
struct TYPE_6__ {int (* ExceptionClear ) (TYPE_1__**) ;scalar_t__ (* ExceptionCheck ) (TYPE_1__**) ;int * (* NewStringUTF ) (TYPE_1__**,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*) ;
 int * FUNC_1 (TYPE_1__**,char const*) ;
 scalar_t__ FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (TYPE_1__**) ;

jstring FUNC_4(JNIEnv *VAR_1, const char *VAR_2, void *VAR_3)
{
    jstring VAR_4;

    VAR_4 = (*VAR_1)->NewStringUTF(VAR_1, VAR_2);
    if ((*VAR_1)->ExceptionCheck(VAR_1)) {
        (*VAR_1)->ExceptionClear(VAR_1);
        FUNC_0(VAR_3, VAR_0, "NewStringUTF() threw an exception\n");
        return ((void*)0);
    }

    return VAR_4;
}
