
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * output_buffers; int has_get_i_o_buffer; } ;
struct TYPE_7__ {int (* DeleteGlobalRef ) (TYPE_1__**,int *) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef TYPE_2__ FFAMediaCodec ;


 int VAR_0 ;
 TYPE_1__** FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__**,int *) ;

int FUNC_2(FFAMediaCodec *VAR_1)
{
    int VAR_2 = 0;

    if (!VAR_1->has_get_i_o_buffer) {
        if (VAR_1->output_buffers) {
            JNIEnv *VAR_3 = ((void*)0);

            VAR_3 = FUNC_0(VAR_1);
            if (!VAR_3) {
                VAR_2 = VAR_0;
                goto fail;
            }

            (*VAR_3)->DeleteGlobalRef(VAR_3, VAR_1->output_buffers);
            VAR_1->output_buffers = ((void*)0);
        }
    }

fail:
    return VAR_2;
}
