
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_14__ {scalar_t__ codec_type; } ;
struct TYPE_13__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_12__ {scalar_t__ type; char* name; } ;
struct TYPE_11__ {TYPE_4__* codec; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVOption ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,char*,char*,char*,char*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,char*,int ,char**) ;
 TYPE_2__* FUNC_5 (TYPE_4__*,TYPE_2__ const*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(const AVFormatContext *VAR_4, const AVFormatContext *VAR_5)
{
    int VAR_6;
    int VAR_7 = 0;

    FUNC_1(VAR_4->nb_streams == VAR_5->nb_streams);
    for (VAR_6 = 0; VAR_6 < VAR_4->nb_streams; VAR_6++) {
        const AVOption *VAR_8 = ((void*)0);
        const AVStream *VAR_9 = VAR_4->streams[VAR_6];
        const AVStream *VAR_10 = VAR_5->streams[VAR_6];
        AVCodecContext *VAR_11 = VAR_9->codec;
        AVCodecContext *VAR_12 = VAR_10->codec;

        if (VAR_11->codec_type != VAR_0)
            continue;

        while ((VAR_8 = FUNC_5(VAR_11, VAR_8))) {
            uint8_t *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);

            if (VAR_8->type == VAR_2)
                continue;

            if (!FUNC_6(VAR_8->name, "frame_number"))
                continue;

            FUNC_1(FUNC_4(VAR_11, VAR_8->name, 0, &VAR_13) >= 0);
            FUNC_1(FUNC_4(VAR_12, VAR_8->name, 0, &VAR_14) >= 0);
            if (FUNC_6(VAR_13, VAR_14)) {
                FUNC_3(((void*)0), VAR_1, "Field %s differs: %s %s", VAR_8->name, VAR_13, VAR_14);
                VAR_7 = FUNC_0(VAR_3);
            }
            FUNC_2(VAR_13);
            FUNC_2(VAR_14);
        }
    }

    return VAR_7;
}
