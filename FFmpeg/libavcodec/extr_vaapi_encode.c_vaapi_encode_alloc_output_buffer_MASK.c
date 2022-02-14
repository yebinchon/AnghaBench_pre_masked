
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int buffer_id ;
typedef scalar_t__ VAStatus ;
typedef scalar_t__ VABufferID ;
struct TYPE_7__ {int surface_width; int surface_height; TYPE_1__* hwctx; int va_context; } ;
typedef TYPE_2__ VAAPIEncodeContext ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_6__ {int display; } ;
typedef TYPE_3__ AVCodecContext ;
typedef int AVBufferRef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int *,int,int *,TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,char*,scalar_t__,...) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,int,int ,scalar_t__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static AVBufferRef *FUNC_5(void *VAR_6,
                                                     int VAR_7)
{
    AVCodecContext *VAR_8 = VAR_6;
    VAAPIEncodeContext *VAR_9 = VAR_8->priv_data;
    VABufferID VAR_10;
    VAStatus VAR_11;
    AVBufferRef *VAR_12;





    VAR_11 = FUNC_2(VAR_9->hwctx->display, VAR_9->va_context,
                         VAR_3,
                         3 * VAR_9->surface_width * VAR_9->surface_height +
                         (1 << 16), 1, 0, &VAR_10);
    if (VAR_11 != VAR_4) {
        FUNC_1(VAR_8, VAR_2, "Failed to create bitstream "
               "output buffer: %d (%s).\n", VAR_11, FUNC_4(VAR_11));
        return ((void*)0);
    }

    FUNC_1(VAR_8, VAR_1, "Allocated output buffer %#x\n", VAR_10);

    VAR_12 = FUNC_0((uint8_t*)(uintptr_t)VAR_10,
                           sizeof(VAR_10),
                           &VAR_5,
                           VAR_8, VAR_0);
    if (!VAR_12) {
        FUNC_3(VAR_9->hwctx->display, VAR_10);
        return ((void*)0);
    }

    return VAR_12;
}
