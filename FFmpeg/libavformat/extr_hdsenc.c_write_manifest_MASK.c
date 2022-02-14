
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int temp_filename ;
typedef int filename ;
struct TYPE_13__ {char* url; int (* io_open ) (TYPE_4__*,int **,char*,int ,int *) ;TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_12__ {int nb_streams; TYPE_2__* streams; } ;
struct TYPE_11__ {double last_ts; int bitrate; int metadata_size; int metadata; } ;
struct TYPE_10__ {int time_base; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ HDSContext ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_4__*,int ,char*,char*) ;
 char* FUNC_6 (int) ;
 double FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (TYPE_4__*,int **) ;
 int FUNC_11 (char*,char*,TYPE_4__*) ;
 int FUNC_12 (char*,int,char*,char*) ;
 int FUNC_13 (TYPE_4__*,int **,char*,int ,int *) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_3, int VAR_4)
{
    HDSContext *VAR_5 = VAR_3->priv_data;
    AVIOContext *VAR_6;
    char VAR_7[1024], VAR_8[1024];
    int VAR_9, VAR_10;
    double VAR_11 = 0;

    if (VAR_5->nb_streams > 0)
        VAR_11 = VAR_5->streams[0].last_ts * FUNC_7(VAR_3->streams[0]->time_base);

    FUNC_12(VAR_7, sizeof(VAR_7), "%s/index.f4m", VAR_3->url);
    FUNC_12(VAR_8, sizeof(VAR_8), "%s/index.f4m.tmp", VAR_3->url);
    VAR_9 = VAR_3->io_open(VAR_3, &VAR_6, VAR_8, VAR_0, ((void*)0));
    if (VAR_9 < 0) {
        FUNC_5(VAR_3, VAR_1, "Unable to open %s for writing\n", VAR_8);
        return VAR_9;
    }
    FUNC_9(VAR_6, "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n");
    FUNC_9(VAR_6, "<manifest xmlns=\"http://ns.adobe.com/f4m/1.0\">\n");
    FUNC_9(VAR_6, "\t<id>%s</id>\n", FUNC_3(VAR_3->url));
    FUNC_9(VAR_6, "\t<streamType>%s</streamType>\n",
                     VAR_4 ? "recorded" : "live");
    FUNC_9(VAR_6, "\t<deliveryType>streaming</deliveryType>\n");
    if (VAR_4)
        FUNC_9(VAR_6, "\t<duration>%f</duration>\n", VAR_11);
    for (VAR_10 = 0; VAR_10 < VAR_5->nb_streams; VAR_10++) {
        OutputStream *VAR_12 = &VAR_5->streams[VAR_10];
        int VAR_13 = FUNC_1(VAR_12->metadata_size);
        char *VAR_14 = FUNC_6(VAR_13);
        if (!VAR_14) {
            FUNC_10(VAR_3, &VAR_6);
            return FUNC_0(VAR_2);
        }
        FUNC_2(VAR_14, VAR_13, VAR_12->metadata, VAR_12->metadata_size);

        FUNC_9(VAR_6, "\t<bootstrapInfo profile=\"named\" url=\"stream%d.abst\" id=\"bootstrap%d\" />\n", VAR_10, VAR_10);
        FUNC_9(VAR_6, "\t<media bitrate=\"%d\" url=\"stream%d\" bootstrapInfoId=\"bootstrap%d\">\n", VAR_12->bitrate/1000, VAR_10, VAR_10);
        FUNC_9(VAR_6, "\t\t<metadata>%s</metadata>\n", VAR_14);
        FUNC_9(VAR_6, "\t</media>\n");
        FUNC_4(VAR_14);
    }
    FUNC_9(VAR_6, "</manifest>\n");
    FUNC_8(VAR_6);
    FUNC_10(VAR_3, &VAR_6);
    return FUNC_11(VAR_8, VAR_7, VAR_3);
}
