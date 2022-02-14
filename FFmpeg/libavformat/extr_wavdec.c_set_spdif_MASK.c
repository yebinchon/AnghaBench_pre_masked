
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_10__ {int spdif; } ;
typedef TYPE_3__ WAVDemuxContext ;
struct TYPE_11__ {int pb; TYPE_2__** streams; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int codec_tag; int codec_id; } ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int,int*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(AVFormatContext *VAR_5, WAVDemuxContext *VAR_6)
{
    if (VAR_2 && VAR_5->streams[0]->codecpar->codec_tag == 1) {
        enum AVCodecID VAR_7;
        int VAR_8 = 1<<16;
        int VAR_9 = FUNC_8(VAR_5->pb, VAR_8);

        if (VAR_9 >= 0) {
            uint8_t *VAR_10 = FUNC_3(VAR_8);
            if (!VAR_10) {
                VAR_9 = FUNC_0(VAR_3);
            } else {
                int64_t VAR_11 = FUNC_6(VAR_5->pb);
                VAR_8 = VAR_9 = FUNC_4(VAR_5->pb, VAR_10, VAR_8);
                if (VAR_8 >= 0) {
                    VAR_9 = FUNC_7(VAR_10, VAR_8, &VAR_7);
                    if (VAR_9 > VAR_0) {
                        VAR_5->streams[0]->codecpar->codec_id = VAR_7;
                        VAR_6->spdif = 1;
                    }
                }
                FUNC_5(VAR_5->pb, VAR_11, VAR_4);
                FUNC_1(VAR_10);
            }
        }

        if (VAR_9 < 0)
            FUNC_2(VAR_5, VAR_1, "Cannot check for SPDIF\n");
    }
}
