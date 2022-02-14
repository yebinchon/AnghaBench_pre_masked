
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int ** data; int format; int * buf; } ;
struct TYPE_9__ {int * buffer; TYPE_1__* pool; } ;
struct TYPE_8__ {int refcount; } ;
typedef int MMAL_BUFFER_HEADER_T ;
typedef TYPE_1__ FFPoolRef ;
typedef TYPE_2__ FFBufferRef ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (void*,int,int ,int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(AVFrame *VAR_5, FFPoolRef *VAR_6,
                          MMAL_BUFFER_HEADER_T *VAR_7)
{
    FFBufferRef *VAR_8 = FUNC_4(sizeof(*VAR_8));
    if (!VAR_8)
        return FUNC_0(VAR_2);

    VAR_8->pool = VAR_6;
    VAR_8->buffer = VAR_7;

    VAR_5->buf[0] = FUNC_2((void *)VAR_8, sizeof(*VAR_8),
                                     VAR_3, ((void*)0),
                                     VAR_0);
    if (!VAR_5->buf[0]) {
        FUNC_3(VAR_8);
        return FUNC_0(VAR_2);
    }

    FUNC_1(&VAR_8->pool->refcount, 1, VAR_4);
    FUNC_5(VAR_7);

    VAR_5->format = VAR_1;
    VAR_5->data[3] = (uint8_t *)VAR_8->buffer;
    return 0;
}
