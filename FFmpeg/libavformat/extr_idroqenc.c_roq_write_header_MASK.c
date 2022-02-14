
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct AVFormatContext {int nb_streams; int pb; TYPE_3__** streams; } ;
struct TYPE_5__ {int den; unsigned int num; } ;
struct TYPE_6__ {TYPE_2__ avg_frame_rate; TYPE_1__* codecpar; } ;
struct TYPE_4__ {scalar_t__ codec_type; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct AVFormatContext*,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct AVFormatContext *VAR_4)
{
    uint8_t VAR_5[] = {
        0x84, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x00
    };
    int VAR_6;


    for(VAR_6=0;VAR_6<VAR_4->nb_streams;VAR_6++) {
        if (VAR_4->streams[VAR_6]->codecpar->codec_type == VAR_0) {
            unsigned int VAR_7;

            if (VAR_4->streams[VAR_6]->avg_frame_rate.den != 1) {
                FUNC_1(VAR_4, VAR_1, "Frame rate must be integer\n");
                return FUNC_0(VAR_3);
            }

            if ((VAR_7=VAR_4->streams[VAR_6]->avg_frame_rate.num) > 255) {
                FUNC_1(VAR_4, VAR_1, "Frame rate may not exceed 255fps\n");
                return FUNC_0(VAR_3);
            }

            if (VAR_7 != 30) {
                FUNC_1(VAR_4, VAR_2, "For vintage compatibility fps must be 30\n");
            }

            VAR_5[6] = VAR_7;
            break;
        }
    }

    FUNC_3(VAR_4->pb, VAR_5, 8);
    FUNC_2(VAR_4->pb);

    return 0;
}
