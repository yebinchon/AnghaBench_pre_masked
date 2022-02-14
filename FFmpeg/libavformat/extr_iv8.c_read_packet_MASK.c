
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {int pts; int pos; scalar_t__ stream_index; int flags; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9 = 0;
    int VAR_10 = 0;

    while (!VAR_10) {

        VAR_7 = FUNC_4(VAR_2->pb);
        VAR_5 = FUNC_4(VAR_2->pb);
        VAR_8 = FUNC_4(VAR_2->pb);
                FUNC_4(VAR_2->pb);
        VAR_6 = FUNC_5(VAR_2->pb);
                FUNC_5(VAR_2->pb);

        VAR_10 = VAR_8 & 0x80;

        VAR_5 -= 12;
        if (VAR_5 < 1)
            return -1;

        if (VAR_7 == 258) {
            FUNC_6(VAR_2->pb, VAR_5);
            VAR_10 = 0;
            continue;
        }

        if (!VAR_9) {
            VAR_4 = FUNC_1(VAR_2->pb, VAR_3, VAR_5);
            if (VAR_4 < 0)
                return VAR_4;
            VAR_9 = 1;
            VAR_3->pts = VAR_6;
            VAR_3->pos -= 16;
        } else {
            VAR_4 = FUNC_0(VAR_2->pb, VAR_3, VAR_5);
            if (VAR_4 < 0) {
                FUNC_2(VAR_2, VAR_0, "failed to grow packet\n");
                FUNC_3(VAR_3);
                return VAR_4;
            }
        }
        if (VAR_4 < VAR_5) {
            FUNC_2(VAR_2, VAR_0, "Truncated packet! Read %d of %d bytes\n",
                   VAR_4, VAR_5);
            VAR_3->flags |= VAR_1;
            break;
        }
    }
    VAR_3->stream_index = 0;

    return 0;
}
