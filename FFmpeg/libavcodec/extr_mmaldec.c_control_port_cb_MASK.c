
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__ cmd; scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ userdata; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(MMAL_PORT_T *VAR_3, MMAL_BUFFER_HEADER_T *VAR_4)
{
    AVCodecContext *VAR_5 = (AVCodecContext*)VAR_3->userdata;
    MMAL_STATUS_T VAR_6;

    if (VAR_4->cmd == VAR_2) {
        VAR_6 = *(uint32_t *)VAR_4->data;
        FUNC_1(VAR_5, VAR_0, "MMAL error %d on control port\n", (int)VAR_6);
    } else {
        FUNC_1(VAR_5, VAR_1, "Unknown MMAL event %s on control port\n",
               FUNC_0(VAR_4->cmd));
    }

    FUNC_2(VAR_4);
}
