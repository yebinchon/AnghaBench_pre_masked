
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_6__ {int queue_decoded_frames; } ;
struct TYPE_5__ {scalar_t__ userdata; } ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef int MMAL_BUFFER_HEADER_T ;
typedef TYPE_2__ MMALDecodeContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
    AVCodecContext *VAR_2 = (AVCodecContext*)VAR_0->userdata;
    MMALDecodeContext *VAR_3 = VAR_2->priv_data;

    FUNC_0(VAR_3->queue_decoded_frames, VAR_1);
}
