
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
typedef int buf ;
struct TYPE_6__ {int b_flags; int nb_packets; int duration; int preroll; void* packet_size; } ;
struct TYPE_5__ {int metadata; int * pb; TYPE_2__* priv_data; } ;
typedef int GUIDParseTable ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 struct tm* FUNC_5 (int*,struct tm*) ;
 int FUNC_6 (char*,int,char*,struct tm*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_2, const GUIDParseTable *VAR_3)
{
    ASFContext *VAR_4 = VAR_2->priv_data;
    AVIOContext *VAR_5 = VAR_2->pb;
    time_t VAR_6;

    FUNC_3(VAR_5);
    FUNC_4(VAR_5, 16);
    FUNC_4(VAR_5, 8);
    VAR_6 = FUNC_3(VAR_5);
    if (!(VAR_4->b_flags & VAR_0)) {
        struct tm VAR_7;
        struct tm *VAR_8;
        char VAR_9[64];


        VAR_6 /= 10000000;

        VAR_6 -= 11644473600;
        VAR_8 = FUNC_5(&VAR_6, &VAR_7);
        if (VAR_8) {
            if (!FUNC_6(VAR_9, sizeof(VAR_9), "%Y-%m-%d %H:%M:%S", VAR_8))
                VAR_9[0] = '\0';
        } else
            VAR_9[0] = '\0';
        if (VAR_9[0]) {
            if (FUNC_0(&VAR_2->metadata, "creation_time", VAR_9, 0) < 0)
                FUNC_1(VAR_2, VAR_1, "av_dict_set failed.\n");
        }
    }
    VAR_4->nb_packets = FUNC_3(VAR_5);
    VAR_4->duration = FUNC_3(VAR_5) / 10000;
    FUNC_4(VAR_5, 8);
    VAR_4->preroll = FUNC_3(VAR_5);
    VAR_4->duration -= VAR_4->preroll;
    VAR_4->b_flags = FUNC_2(VAR_5);
    FUNC_4(VAR_5, 4);
    VAR_4->packet_size = FUNC_2(VAR_5);
    FUNC_4(VAR_5, 4);

    return 0;
}
