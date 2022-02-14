
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {int size; char* data; scalar_t__ pts; scalar_t__ duration; } ;
struct TYPE_8__ {int wrote_webp_header; int frame_count; TYPE_6__ last_pkt; int loop; } ;
typedef TYPE_2__ WebpContext ;
struct TYPE_10__ {int pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3)
{
    WebpContext *VAR_4 = VAR_1->priv_data;
    AVStream *VAR_5 = VAR_1->streams[0];

    if (VAR_4->last_pkt.size) {
        int VAR_6 = 0;
        unsigned VAR_7 = 0;
        int VAR_8 = 0;

        if (VAR_4->last_pkt.size < 4)
            return 0;
        if (FUNC_0(VAR_4->last_pkt.data) == FUNC_0("RIFF"))
            VAR_6 = 12;

        if (VAR_4->last_pkt.size < VAR_6 + 4)
            return 0;
        if (FUNC_0(VAR_4->last_pkt.data + VAR_6) == FUNC_0("VP8X")) {
            VAR_7 |= VAR_4->last_pkt.data[VAR_6 + 4 + 4];
            VAR_8 = 1;
            VAR_6 += FUNC_0(VAR_4->last_pkt.data + VAR_6 + 4) + 8;
        }

        if (!VAR_4->wrote_webp_header) {
            FUNC_6(VAR_1->pb, "RIFF\0\0\0\0WEBP", 12);
            VAR_4->wrote_webp_header = 1;
            if (VAR_4->frame_count > 1)
                VAR_4->frame_count = 1;
        }

        if (VAR_4->frame_count == 1) {
            if (!VAR_2) {
                VAR_8 = 1;
                VAR_7 |= 2 + 16;
            }

            if (VAR_8) {
                FUNC_6(VAR_1->pb, "VP8X", 4);
                FUNC_5(VAR_1->pb, 10);
                FUNC_2(VAR_1->pb, VAR_7);
                FUNC_4(VAR_1->pb, 0);
                FUNC_4(VAR_1->pb, VAR_5->codecpar->width - 1);
                FUNC_4(VAR_1->pb, VAR_5->codecpar->height - 1);
            }
            if (!VAR_2) {
                FUNC_6(VAR_1->pb, "ANIM", 4);
                FUNC_5(VAR_1->pb, 6);
                FUNC_5(VAR_1->pb, 0xFFFFFFFF);
                FUNC_3(VAR_1->pb, VAR_4->loop);
            }
        }

        if (VAR_4->frame_count > VAR_2) {
            FUNC_6(VAR_1->pb, "ANMF", 4);
            FUNC_5(VAR_1->pb, 16 + VAR_4->last_pkt.size - VAR_6);
            FUNC_4(VAR_1->pb, 0);
            FUNC_4(VAR_1->pb, 0);
            FUNC_4(VAR_1->pb, VAR_5->codecpar->width - 1);
            FUNC_4(VAR_1->pb, VAR_5->codecpar->height - 1);
            if (VAR_4->last_pkt.pts != VAR_0 && VAR_3 != VAR_0) {
                FUNC_4(VAR_1->pb, VAR_3 - VAR_4->last_pkt.pts);
            } else
                FUNC_4(VAR_1->pb, VAR_4->last_pkt.duration);
            FUNC_2(VAR_1->pb, 0);
        }
        FUNC_6(VAR_1->pb, VAR_4->last_pkt.data + VAR_6, VAR_4->last_pkt.size - VAR_6);
        FUNC_1(&VAR_4->last_pkt);
    }

    return 0;
}
