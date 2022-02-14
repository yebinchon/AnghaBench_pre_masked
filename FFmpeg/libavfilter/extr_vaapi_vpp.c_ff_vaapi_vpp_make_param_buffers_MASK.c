
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ VAStatus ;
typedef int VABufferID ;
struct TYPE_7__ {scalar_t__ nb_filter_buffers; int * filter_buffers; int va_context; TYPE_1__* hwctx; } ;
typedef TYPE_2__ VAAPIVPPContext ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_6__ {int display; } ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,char*,int,size_t,int,...) ;
 scalar_t__ FUNC_3 (int ,int ,int,size_t,int,void*,int *) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(AVFilterContext *VAR_5,
                                    int VAR_6,
                                    const void *VAR_7,
                                    size_t VAR_8,
                                    int VAR_9)
{
    VAStatus VAR_10;
    VABufferID VAR_11;
    VAAPIVPPContext *VAR_12 = VAR_5->priv;

    FUNC_1(VAR_12->nb_filter_buffers + 1 <= VAR_3);

    VAR_10 = FUNC_3(VAR_12->hwctx->display, VAR_12->va_context,
                         VAR_6, VAR_8, VAR_9, (void*)VAR_7, &VAR_11);
    if (VAR_10 != VAR_4) {
        FUNC_2(VAR_5, VAR_1, "Failed to create parameter "
               "buffer (type %d): %d (%s).\n",
               VAR_6, VAR_10, FUNC_4(VAR_10));
        return FUNC_0(VAR_2);
    }

    VAR_12->filter_buffers[VAR_12->nb_filter_buffers++] = VAR_11;

    FUNC_2(VAR_5, VAR_0, "Param buffer (type %d, %zu bytes, count %d) "
           "is %#x.\n", VAR_6, VAR_8, VAR_9, VAR_11);
    return 0;
}
