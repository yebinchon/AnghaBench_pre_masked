
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_15__ {char* url; TYPE_2__** streams; int pb; int nb_streams; TYPE_4__* priv_data; } ;
struct TYPE_11__ {TYPE_3__* elem; } ;
struct TYPE_14__ {scalar_t__ bandwidth; int is_live; TYPE_1__ tracks; int duration; } ;
struct TYPE_13__ {scalar_t__ num; } ;
struct TYPE_12__ {int metadata; } ;
typedef TYPE_3__ MatroskaTrack ;
typedef TYPE_4__ MatroskaDemuxContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int ,char*,int ) ;
 int FUNC_3 (int *,int ,scalar_t__,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_5__*,int ,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (TYPE_5__*,scalar_t__) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_8)
{
    char *VAR_9;
    int VAR_10 = FUNC_8(VAR_8);
    int64_t VAR_11;
    MatroskaTrack *VAR_12;
    MatroskaDemuxContext *VAR_13 = VAR_8->priv_data;
    if (VAR_10) {
        FUNC_5(VAR_8, VAR_1, "Failed to read file headers\n");
        return -1;
    }
    if (!VAR_8->nb_streams) {
        FUNC_7(VAR_8);
        FUNC_5(VAR_8, VAR_1, "No streams found\n");
        return VAR_0;
    }

    if (!VAR_13->is_live) {
        VAR_9 = FUNC_1("%g", VAR_13->duration);
        if (!VAR_9) return FUNC_0(VAR_4);
        FUNC_2(&VAR_8->streams[0]->metadata, VAR_3, VAR_9, 0);
        FUNC_4(VAR_9);



        VAR_11 = FUNC_6(VAR_8->pb) - 5;
        FUNC_3(&VAR_8->streams[0]->metadata, VAR_6, VAR_11, 0);
    }


    VAR_9 = FUNC_9(VAR_8->url, '/');
    FUNC_2(&VAR_8->streams[0]->metadata, VAR_5, VAR_9 ? ++VAR_9 : VAR_8->url, 0);


    VAR_12 = VAR_13->tracks.elem;
    FUNC_3(&VAR_8->streams[0]->metadata, VAR_7, VAR_12[0].num, 0);


    if (!VAR_13->is_live) {
        VAR_10 = FUNC_10(VAR_8, VAR_11);
        if (VAR_10 < 0) {
            FUNC_5(VAR_8, VAR_1, "Error parsing Cues\n");
            return VAR_10;
        }
    }


    if (VAR_13->bandwidth > 0) {
        FUNC_3(&VAR_8->streams[0]->metadata, VAR_2,
                        VAR_13->bandwidth, 0);
    }
    return 0;
}
