
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* GetEnv ) (TYPE_1__**,void**,int ) ;int (* AttachCurrentThread ) (TYPE_1__**,int **,int *) ;} ;
typedef int JNIEnv ;


 int VAR_0 ;



 int VAR_1 ;
 TYPE_1__** FUNC_0 (void*) ;
 int FUNC_1 (void*,int ,char*) ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_1__**,void**,int ) ;
 int FUNC_8 (TYPE_1__**,int **,int *) ;

JNIEnv *FUNC_9(void *VAR_7)
{
    int VAR_8 = 0;
    JNIEnv *VAR_9 = ((void*)0);

    FUNC_3(&VAR_5);
    if (VAR_3 == ((void*)0)) {
        VAR_3 = FUNC_0(VAR_7);
    }

    if (!VAR_3) {
        FUNC_1(VAR_7, VAR_0, "No Java virtual machine has been registered\n");
        goto done;
    }

    FUNC_5(&VAR_6, VAR_4);

    if ((VAR_9 = FUNC_2(VAR_2)) != ((void*)0)) {
        goto done;
    }

    VAR_8 = (*VAR_3)->GetEnv(VAR_3, (void **)&VAR_9, VAR_1);
    switch(VAR_8) {
    case 130:
        if ((*VAR_3)->AttachCurrentThread(VAR_3, &VAR_9, ((void*)0)) != 0) {
            FUNC_1(VAR_7, VAR_0, "Failed to attach the JNI environment to the current thread\n");
            VAR_9 = ((void*)0);
        } else {
            FUNC_6(VAR_2, VAR_9);
        }
        break;
    case 128:
        break;
    case 129:
        FUNC_1(VAR_7, VAR_0, "The specified JNI version is not supported\n");
        break;
    default:
        FUNC_1(VAR_7, VAR_0, "Failed to get the JNI environment attached to this thread\n");
        break;
    }

done:
    FUNC_4(&VAR_5);
    return VAR_9;
}
