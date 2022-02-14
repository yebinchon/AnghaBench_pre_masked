
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* priv_data; } ;
struct TYPE_13__ {int flags; int ref; } ;
struct TYPE_12__ {int packets_buffered; } ;
struct TYPE_11__ {TYPE_4__* user_data; int cmd; } ;
struct TYPE_10__ {scalar_t__ userdata; } ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;
typedef TYPE_3__ MMALDecodeContext ;
typedef TYPE_4__ FFBufferEntry ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(MMAL_PORT_T *VAR_1, MMAL_BUFFER_HEADER_T *VAR_2)
{
    AVCodecContext *VAR_3 = (AVCodecContext*)VAR_1->userdata;
    MMALDecodeContext *VAR_4 = VAR_3->priv_data;

    if (!VAR_2->cmd) {
        FFBufferEntry *VAR_5 = VAR_2->user_data;
        FUNC_1(&VAR_5->ref);
        if (VAR_5->flags & VAR_0)
            FUNC_0(&VAR_4->packets_buffered, -1);
        FUNC_2(VAR_5);
    }
    FUNC_3(VAR_2);
}
