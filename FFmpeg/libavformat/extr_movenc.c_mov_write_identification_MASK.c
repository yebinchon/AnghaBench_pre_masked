
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int nb_streams; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_12__ {TYPE_1__* codecpar; } ;
struct TYPE_11__ {scalar_t__ mode; } ;
struct TYPE_10__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ MOVMuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (int *,TYPE_4__*) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_5, AVFormatContext *VAR_6)
{
    MOVMuxContext *VAR_7 = VAR_6->priv_data;
    int VAR_8;

    FUNC_3(VAR_5,VAR_6);
    if (VAR_7->mode == VAR_4) {
        int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
        for (VAR_8 = 0; VAR_8 < VAR_6->nb_streams; VAR_8++) {
            AVStream *VAR_12 = VAR_6->streams[VAR_8];
            if (FUNC_2(VAR_12))
                continue;
            if (VAR_12->codecpar->codec_type == VAR_1)
                VAR_9++;
            else if (VAR_12->codecpar->codec_type == VAR_0)
                VAR_10++;
            else
                VAR_11++;
            }

        if (VAR_9 != 1 || VAR_10 != 1 || VAR_11) {
            FUNC_1(VAR_6, VAR_2, "PSP mode need one video and one audio stream\n");
            return FUNC_0(VAR_3);
        }
        return FUNC_4(VAR_5, VAR_6);
    }
    return 0;
}
