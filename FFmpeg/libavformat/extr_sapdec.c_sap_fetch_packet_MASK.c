
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct pollfd {int member_0; int member_1; int revents; int member_2; } ;
struct SAPState {int eof; scalar_t__ hash; TYPE_7__* sdp_ctx; int ann_fd; } ;
typedef int recvbuf ;
struct TYPE_11__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_10__ {int ctx_flags; int nb_streams; struct SAPState* priv_data; } ;
struct TYPE_9__ {int id; int time_base; int codecpar; } ;
struct TYPE_8__ {int time_base; int codecpar; } ;
typedef TYPE_2__ AVStream ;
typedef int AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_7__*,int *) ;
 int FUNC_4 (int ,int ) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int*,int) ;
 int FUNC_8 (struct pollfd*,int,int ) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    struct SAPState *VAR_7 = VAR_5->priv_data;
    int VAR_8 = FUNC_6(VAR_7->ann_fd);
    int VAR_9, VAR_10;
    struct pollfd VAR_11 = {VAR_8, VAR_3, 0};
    uint8_t VAR_12[VAR_4];

    if (VAR_7->eof)
        return VAR_0;

    while (1) {
        VAR_9 = FUNC_8(&VAR_11, 1, 0);
        if (VAR_9 <= 0 || !(VAR_11.revents & VAR_3))
            break;
        VAR_10 = FUNC_7(VAR_7->ann_fd, VAR_12, sizeof(VAR_12));
        if (VAR_10 >= 8) {
            uint16_t VAR_13 = FUNC_1(&VAR_12[2]);

            if (VAR_12[0] & 0x04 && VAR_13 == VAR_7->hash) {

                VAR_7->eof = 1;
                return VAR_0;
            }
        }
    }
    VAR_10 = FUNC_3(VAR_7->sdp_ctx, VAR_6);
    if (VAR_10 < 0)
        return VAR_10;
    if (VAR_5->ctx_flags & VAR_1) {
        while (VAR_7->sdp_ctx->nb_streams > VAR_5->nb_streams) {
            int VAR_14 = VAR_5->nb_streams;
            AVStream *VAR_15 = FUNC_5(VAR_5, ((void*)0));
            if (!VAR_15) {
                FUNC_2(VAR_6);
                return FUNC_0(VAR_2);
            }
            VAR_15->id = VAR_14;
            FUNC_4(VAR_15->codecpar, VAR_7->sdp_ctx->streams[VAR_14]->codecpar);
            VAR_15->time_base = VAR_7->sdp_ctx->streams[VAR_14]->time_base;
        }
    }
    return VAR_10;
}
