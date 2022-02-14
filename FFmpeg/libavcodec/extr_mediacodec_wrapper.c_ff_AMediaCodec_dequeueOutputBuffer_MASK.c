
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ssize_t ;
typedef int int64_t ;
struct TYPE_16__ {int size_id; int presentation_time_us_id; int offset_id; int flags_id; int dequeue_output_buffer_id; } ;
struct TYPE_19__ {TYPE_1__ jfields; int buffer_info; int object; } ;
struct TYPE_18__ {int size; int presentationTimeUs; int offset; int flags; } ;
struct TYPE_17__ {int (* CallIntMethod ) (TYPE_2__**,int ,int ,int ,int ) ;int (* GetIntField ) (TYPE_2__**,int ,int ) ;int (* GetLongField ) (TYPE_2__**,int ,int ) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ FFAMediaCodecBufferInfo ;
typedef TYPE_4__ FFAMediaCodec ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**,TYPE_4__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__**,int,TYPE_4__*) ;
 int FUNC_2 (TYPE_2__**,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__**,int ,int ) ;
 int FUNC_4 (TYPE_2__**,int ,int ) ;
 int FUNC_5 (TYPE_2__**,int ,int ) ;
 int FUNC_6 (TYPE_2__**,int ,int ) ;

ssize_t FUNC_7(FFAMediaCodec* VAR_1, FFAMediaCodecBufferInfo *VAR_2, int64_t VAR_3)
{
    int VAR_4 = 0;
    JNIEnv *VAR_5 = ((void*)0);

    FUNC_0(VAR_5, VAR_1, VAR_0);

    VAR_4 = (*VAR_5)->CallIntMethod(VAR_5, VAR_1->object, VAR_1->jfields.dequeue_output_buffer_id, VAR_1->buffer_info, VAR_3);
    if (FUNC_1(VAR_5, 1, VAR_1) < 0) {
        return VAR_0;
    }

    VAR_2->flags = (*VAR_5)->GetIntField(VAR_5, VAR_1->buffer_info, VAR_1->jfields.flags_id);
    if (FUNC_1(VAR_5, 1, VAR_1) < 0) {
        return VAR_0;
    }

    VAR_2->offset = (*VAR_5)->GetIntField(VAR_5, VAR_1->buffer_info, VAR_1->jfields.offset_id);
    if (FUNC_1(VAR_5, 1, VAR_1) < 0) {
        return VAR_0;
    }

    VAR_2->presentationTimeUs = (*VAR_5)->GetLongField(VAR_5, VAR_1->buffer_info, VAR_1->jfields.presentation_time_us_id);
    if (FUNC_1(VAR_5, 1, VAR_1) < 0) {
        return VAR_0;
    }

    VAR_2->size = (*VAR_5)->GetIntField(VAR_5, VAR_1->buffer_info, VAR_1->jfields.size_id);
    if (FUNC_1(VAR_5, 1, VAR_1) < 0) {
        return VAR_0;
    }

    return VAR_4;
}
