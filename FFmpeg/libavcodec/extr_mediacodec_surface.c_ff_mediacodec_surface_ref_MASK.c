
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * (* NewGlobalRef ) (TYPE_1__**,void*) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef int FFANativeWindow ;


 TYPE_1__** FUNC_0 (void*) ;
 int * FUNC_1 (TYPE_1__**,void*) ;

FFANativeWindow *FUNC_2(void *VAR_0, void *VAR_1)
{
    JNIEnv *VAR_2 = ((void*)0);

    VAR_2 = FUNC_0(VAR_1);
    if (!VAR_2) {
        return ((void*)0);
    }

    return (*VAR_2)->NewGlobalRef(VAR_2, VAR_0);
}
