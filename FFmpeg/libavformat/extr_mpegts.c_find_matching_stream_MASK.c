
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_10__ {unsigned int program_num; int stream_identifier; int pmt_stream_idx; int id; TYPE_1__* codecpar; } ;
struct TYPE_9__ {TYPE_4__* stream; } ;
struct TYPE_8__ {int codec_type; } ;
typedef TYPE_2__ MpegTSContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int ,char*,int ,int,int ,int) ;

__attribute__((used)) static AVStream *FUNC_2(MpegTSContext *VAR_1, int VAR_2, unsigned int VAR_3,
                                      int VAR_4, int VAR_5)
{
    AVFormatContext *VAR_6 = VAR_1->stream;
    int VAR_7;
    AVStream *VAR_8 = ((void*)0);

    for (VAR_7 = 0; VAR_7 < VAR_6->nb_streams; VAR_7++) {
        AVStream *VAR_9 = VAR_6->streams[VAR_7];
        if (VAR_9->program_num != VAR_3)
            continue;
        if (VAR_4 != -1) {
            if (VAR_9->stream_identifier == VAR_4+1) {
                VAR_8 = VAR_9;
                break;
            }
        } else if (VAR_9->pmt_stream_idx == VAR_5) {
            VAR_8 = VAR_9;
            break;
        }
    }

    if (VAR_8) {
        FUNC_1(VAR_1->stream, VAR_0,
               "re-using existing %s stream %d (pid=0x%x) for new pid=0x%x\n",
               FUNC_0(VAR_8->codecpar->codec_type),
               VAR_7, VAR_8->id, VAR_2);
    }

    return VAR_8;
}
