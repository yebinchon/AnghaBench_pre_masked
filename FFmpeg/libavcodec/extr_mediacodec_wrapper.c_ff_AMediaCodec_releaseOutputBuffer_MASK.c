
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int jint ;
typedef int jboolean ;
struct TYPE_10__ {int release_output_buffer_id; } ;
struct TYPE_12__ {TYPE_1__ jfields; int object; } ;
struct TYPE_11__ {int (* CallVoidMethod ) (TYPE_2__**,int ,int ,int ,int ) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ FFAMediaCodec ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**,TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__**,int,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__**,int ,int ,int ,int ) ;

int FUNC_3(FFAMediaCodec* VAR_1, size_t VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    JNIEnv *VAR_5 = ((void*)0);

    FUNC_0(VAR_5, VAR_1, VAR_0);

    (*VAR_5)->CallVoidMethod(VAR_5, VAR_1->object, VAR_1->jfields.release_output_buffer_id, (jint)VAR_2, (jboolean)VAR_3);
    if (FUNC_1(VAR_5, 1, VAR_1) < 0) {
        VAR_4 = VAR_0;
        goto fail;
    }

fail:
    return VAR_4;
}
