
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int release_id; } ;
struct TYPE_16__ {TYPE_7__ jfields; int * buffer_info; int * object; } ;
struct TYPE_15__ {int (* DeleteGlobalRef ) (TYPE_1__**,int *) ;int (* CallVoidMethod ) (TYPE_1__**,int *,int ) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef TYPE_2__ FFAMediaCodec ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__**) ;
 scalar_t__ FUNC_2 (TYPE_1__**,int,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__**,TYPE_7__*,int ,int,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__**,int *,int ) ;
 int FUNC_5 (TYPE_1__**,int *) ;
 int FUNC_6 (TYPE_1__**,int *) ;

int FUNC_7(FFAMediaCodec* VAR_2)
{
    int VAR_3 = 0;

    JNIEnv *VAR_4 = ((void*)0);

    if (!VAR_2) {
        return 0;
    }

    FUNC_0(VAR_4, VAR_2, VAR_0);

    (*VAR_4)->CallVoidMethod(VAR_4, VAR_2->object, VAR_2->jfields.release_id);
    if (FUNC_2(VAR_4, 1, VAR_2) < 0) {
        VAR_3 = VAR_0;
    }

    (*VAR_4)->DeleteGlobalRef(VAR_4, VAR_2->object);
    VAR_2->object = ((void*)0);

    (*VAR_4)->DeleteGlobalRef(VAR_4, VAR_2->buffer_info);
    VAR_2->buffer_info = ((void*)0);

    FUNC_3(VAR_4, &VAR_2->jfields, VAR_1, 1, VAR_2);

    FUNC_1(&VAR_2);

    return VAR_3;
}
