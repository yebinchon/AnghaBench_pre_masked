
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int flush_id; } ;
struct TYPE_12__ {TYPE_1__ jfields; int object; } ;
struct TYPE_11__ {int (* CallVoidMethod ) (TYPE_2__**,int ,int ) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ FFAMediaCodec ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**,TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__**,int,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__**,int ,int ) ;

int FUNC_3(FFAMediaCodec* VAR_1)
{
    int VAR_2 = 0;
    JNIEnv *VAR_3 = ((void*)0);

    FUNC_0(VAR_3, VAR_1, VAR_0);

    (*VAR_3)->CallVoidMethod(VAR_3, VAR_1->object, VAR_1->jfields.flush_id);
    if (FUNC_1(VAR_3, 1, VAR_1) < 0) {
        VAR_2 = VAR_0;
        goto fail;
    }

fail:
    return VAR_2;
}
