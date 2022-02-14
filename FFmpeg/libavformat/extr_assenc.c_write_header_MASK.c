
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_10__ {TYPE_2__* codecpar; } ;
struct TYPE_9__ {size_t trailer_size; char* trailer; int ssa_mode; } ;
struct TYPE_8__ {scalar_t__ codec_id; size_t extradata_size; char* extradata; } ;
struct TYPE_7__ {int nb_streams; int pb; TYPE_5__** streams; TYPE_3__* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVCodecParameters ;
typedef TYPE_3__ ASSContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_5__*,int,int,int) ;
 char* FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_3)
{
    ASSContext *VAR_4 = VAR_3->priv_data;
    AVCodecParameters *VAR_5 = VAR_3->streams[0]->codecpar;

    if (VAR_3->nb_streams != 1 || VAR_5->codec_id != VAR_0) {
        FUNC_1(VAR_3, VAR_1, "Exactly one ASS/SSA stream is needed.\n");
        return FUNC_0(VAR_2);
    }
    FUNC_5(VAR_3->streams[0], 64, 1, 100);
    if (VAR_5->extradata_size > 0) {
        size_t VAR_6 = VAR_5->extradata_size;
        uint8_t *VAR_7 = FUNC_6(VAR_5->extradata, "\n[Events]");

        if (VAR_7)
            VAR_7 = FUNC_6(VAR_7, "Format:");
        if (VAR_7)
            VAR_7 = FUNC_6(VAR_7, "\n");

        if (VAR_7++) {
            VAR_6 = (VAR_7 - VAR_5->extradata);
            VAR_4->trailer_size = VAR_5->extradata_size - VAR_6;
            if (VAR_4->trailer_size)
                VAR_4->trailer = VAR_7;
        }

        FUNC_4(VAR_3->pb, VAR_5->extradata, VAR_6);
        if (VAR_5->extradata[VAR_6 - 1] != '\n')
            FUNC_4(VAR_3->pb, "\r\n", 2);
        VAR_4->ssa_mode = !FUNC_6(VAR_5->extradata, "\n[V4+ Styles]");
        if (!FUNC_6(VAR_5->extradata, "\n[Events]"))
            FUNC_3(VAR_3->pb, "[Events]\r\nFormat: %s, Start, End, Style, Name, MarginL, MarginR, MarginV, Effect, Text\r\n",
                        VAR_4->ssa_mode ? "Marked" : "Layer");
    }
    FUNC_2(VAR_3->pb);

    return 0;
}
