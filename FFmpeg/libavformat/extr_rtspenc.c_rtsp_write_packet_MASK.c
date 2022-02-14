
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct pollfd {int member_1; int revents; int member_2; int member_0; } ;
struct TYPE_17__ {TYPE_2__* priv_data; } ;
struct TYPE_16__ {size_t stream_index; } ;
struct TYPE_15__ {scalar_t__ state; size_t nb_rtsp_streams; scalar_t__ lower_transport; TYPE_1__** rtsp_streams; int rtsp_hd; } ;
struct TYPE_14__ {TYPE_4__* transport_priv; } ;
typedef TYPE_1__ RTSPStream ;
typedef TYPE_2__ RTSPState ;
typedef int RTSPMessageHeader ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_4__*,int *,int *,int,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_4__*,int ,TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pollfd*,int,int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    RTSPState *VAR_7 = VAR_5->priv_data;
    RTSPStream *VAR_8;
    int VAR_9;
    struct pollfd VAR_10 = {FUNC_5(VAR_7->rtsp_hd), VAR_2, 0};
    AVFormatContext *VAR_11;
    int VAR_12;

    while (1) {
        VAR_9 = FUNC_6(&VAR_10, 1, 0);
        if (VAR_9 <= 0)
            break;
        if (VAR_10.revents & VAR_2) {
            RTSPMessageHeader VAR_13;





            VAR_12 = FUNC_1(VAR_5, &VAR_13, ((void*)0), 1, ((void*)0));
            if (VAR_12 < 0)
                return FUNC_0(VAR_1);
            if (VAR_12 == 1)
                FUNC_2(VAR_5);

            if (VAR_7->state != VAR_4)
                return FUNC_0(VAR_1);
        }
    }

    if (VAR_6->stream_index < 0 || VAR_6->stream_index >= VAR_7->nb_rtsp_streams)
        return VAR_0;
    VAR_8 = VAR_7->rtsp_streams[VAR_6->stream_index];
    VAR_11 = VAR_8->transport_priv;

    VAR_12 = FUNC_4(VAR_11, 0, VAR_6, VAR_5, 0);




    if (!VAR_12 && VAR_7->lower_transport == VAR_3)
        VAR_12 = FUNC_3(VAR_5, VAR_8);
    return VAR_12;
}
