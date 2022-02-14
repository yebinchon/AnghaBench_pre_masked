
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int jobject ;
struct TYPE_13__ {int get_name_id; } ;
struct TYPE_15__ {TYPE_1__ jfields; int object; } ;
struct TYPE_14__ {int (* DeleteLocalRef ) (TYPE_2__**,int *) ;int * (* CallObjectMethod ) (TYPE_2__**,int ,int ) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ FFAMediaCodec ;


 int FUNC_0 (TYPE_2__**,TYPE_3__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__**,int,TYPE_3__*) ;
 char* FUNC_2 (TYPE_2__**,int *,TYPE_3__*) ;
 int * FUNC_3 (TYPE_2__**,int ,int ) ;
 int FUNC_4 (TYPE_2__**,int *) ;

char *FUNC_5(FFAMediaCodec *VAR_0)
{
    char *VAR_1 = ((void*)0);
    JNIEnv *VAR_2 = ((void*)0);
    jobject *VAR_3 = ((void*)0);

    FUNC_0(VAR_2, VAR_0, ((void*)0));

    VAR_3 = (*VAR_2)->CallObjectMethod(VAR_2, VAR_0->object, VAR_0->jfields.get_name_id);
    if (FUNC_1(VAR_2, 1, VAR_0) < 0) {
        goto fail;
    }

    VAR_1 = FUNC_2(VAR_2, VAR_3, VAR_0);

fail:
    if (VAR_3) {
        (*VAR_2)->DeleteLocalRef(VAR_2, VAR_3);
    }

    return VAR_1;
}
