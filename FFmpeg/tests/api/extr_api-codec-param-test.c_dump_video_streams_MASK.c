
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_9__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_8__ {scalar_t__ type; char* name; } ;
struct TYPE_7__ {int * codec; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVOption ;
typedef TYPE_3__ AVFormatContext ;
typedef int AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char*,int ,char**) ;
 TYPE_2__* FUNC_2 (int *,TYPE_2__ const*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(const AVFormatContext *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->nb_streams; VAR_3++) {
        const AVOption *VAR_4 = ((void*)0);
        const AVStream *VAR_5 = VAR_1->streams[VAR_3];
        AVCodecContext *VAR_6 = VAR_5->codec;

        FUNC_3("stream=%d, decode=%d\n", VAR_3, VAR_2);
        while ((VAR_4 = FUNC_2(VAR_6, VAR_4))) {
            uint8_t *VAR_7;

            if (VAR_4->type == VAR_0)
                continue;

            if (!FUNC_4(VAR_4->name, "frame_number"))
                continue;

            if (FUNC_1(VAR_6, VAR_4->name, 0, &VAR_7) >= 0) {
                FUNC_3("    %s=%s\n", VAR_4->name, VAR_7);
                FUNC_0(VAR_7);
            }
        }
    }
}
