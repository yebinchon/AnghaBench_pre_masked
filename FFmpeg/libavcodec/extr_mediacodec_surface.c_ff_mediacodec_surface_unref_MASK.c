
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* DeleteGlobalRef ) (TYPE_1__**,int *) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef int FFANativeWindow ;


 int VAR_0 ;
 TYPE_1__** FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__**,int *) ;

int FUNC_2(FFANativeWindow *VAR_1, void *VAR_2)
{
    JNIEnv *VAR_3 = ((void*)0);

    VAR_3 = FUNC_0(VAR_2);
    if (!VAR_3) {
        return VAR_0;
    }

    (*VAR_3)->DeleteGlobalRef(VAR_3, VAR_1);

    return 0;
}
