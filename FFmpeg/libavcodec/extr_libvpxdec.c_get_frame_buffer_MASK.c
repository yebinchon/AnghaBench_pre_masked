
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t size; int data; TYPE_3__* priv; } ;
typedef TYPE_1__ vpx_codec_frame_buffer_t ;
struct TYPE_7__ {size_t pool_size; int pool; } ;
typedef TYPE_2__ VPxContext ;
struct TYPE_8__ {int data; } ;
typedef TYPE_3__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, size_t VAR_3, vpx_codec_frame_buffer_t *VAR_4)
{
    VPxContext *VAR_5 = VAR_2;
    AVBufferRef *VAR_6;

    if (VAR_3 > VAR_5->pool_size) {
        FUNC_3(&VAR_5->pool);

        VAR_5->pool = FUNC_2(VAR_3, VAR_1);
        if (!VAR_5->pool) {
            VAR_5->pool_size = 0;
            return FUNC_0(VAR_0);
        }
        VAR_5->pool_size = VAR_3;
    }

    VAR_6 = FUNC_1(VAR_5->pool);
    if (!VAR_6)
        return FUNC_0(VAR_0);

    VAR_4->priv = VAR_6;
    VAR_4->size = VAR_5->pool_size;
    VAR_4->data = VAR_6->data;

    return 0;
}
