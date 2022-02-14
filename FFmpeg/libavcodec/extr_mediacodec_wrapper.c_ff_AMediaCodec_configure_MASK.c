
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int configure_id; } ;
struct TYPE_15__ {TYPE_1__ jfields; int object; } ;
struct TYPE_14__ {int object; } ;
struct TYPE_13__ {int (* CallVoidMethod ) (TYPE_2__**,int ,int ,int ,void*,int *,int ) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ FFAMediaFormat ;
typedef TYPE_4__ FFAMediaCodec ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**,TYPE_4__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__**,int,TYPE_4__*) ;
 int FUNC_2 (TYPE_2__**,int ,int ,int ,void*,int *,int ) ;

int FUNC_3(FFAMediaCodec* VAR_1, const FFAMediaFormat* VAR_2, void* VAR_3, void *VAR_4, uint32_t VAR_5)
{
    int VAR_6 = 0;
    JNIEnv *VAR_7 = ((void*)0);

    FUNC_0(VAR_7, VAR_1, VAR_0);

    (*VAR_7)->CallVoidMethod(VAR_7, VAR_1->object, VAR_1->jfields.configure_id, VAR_2->object, VAR_3, ((void*)0), VAR_5);
    if (FUNC_1(VAR_7, 1, VAR_1) < 0) {
        VAR_6 = VAR_0;
        goto fail;
    }

fail:
    return VAR_6;
}
