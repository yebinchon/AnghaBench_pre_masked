
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ off_t ;
typedef int jint ;
struct TYPE_10__ {int queue_input_buffer_id; } ;
struct TYPE_12__ {TYPE_1__ jfields; int object; } ;
struct TYPE_11__ {int (* CallVoidMethod ) (TYPE_2__**,int ,int ,int ,int ,int ,int ,int ) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ FFAMediaCodec ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_2__**,int,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__**,int ,int ,int ,int ,int ,int ,int ) ;

int FUNC_3(FFAMediaCodec* VAR_1, size_t VAR_2, off_t VAR_3, size_t VAR_4, uint64_t VAR_5, uint32_t VAR_6)
{
    int VAR_7 = 0;
    JNIEnv *VAR_8 = ((void*)0);

    FUNC_0(VAR_8, VAR_1, VAR_0);

    (*VAR_8)->CallVoidMethod(VAR_8, VAR_1->object, VAR_1->jfields.queue_input_buffer_id, (jint)VAR_2, (jint)VAR_3, (jint)VAR_4, VAR_5, VAR_6);
    if ((VAR_7 = FUNC_1(VAR_8, 1, VAR_1)) < 0) {
        VAR_7 = VAR_0;
        goto fail;
    }

fail:
    return VAR_7;
}
