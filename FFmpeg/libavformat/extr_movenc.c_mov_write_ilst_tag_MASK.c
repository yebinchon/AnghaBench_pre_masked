
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int flags; } ;
typedef int MOVMuxContext ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,char*,char*,int) ;
 int FUNC_5 (TYPE_1__*,int *,char*,char*,int) ;
 int FUNC_6 (int *,char*,int ,int ,int) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,int *,TYPE_1__*,int) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(AVIOContext *VAR_2, MOVMuxContext *VAR_3,
                              AVFormatContext *VAR_4)
{
    int64_t VAR_5 = FUNC_0(VAR_2);
    FUNC_1(VAR_2, 0);
    FUNC_2(VAR_2, "ilst");
    FUNC_5(VAR_4, VAR_2, "\251nam", "title" , 1);
    FUNC_5(VAR_4, VAR_2, "\251ART", "artist" , 1);
    FUNC_5(VAR_4, VAR_2, "aART", "album_artist", 1);
    FUNC_5(VAR_4, VAR_2, "\251wrt", "composer" , 1);
    FUNC_5(VAR_4, VAR_2, "\251alb", "album" , 1);
    FUNC_5(VAR_4, VAR_2, "\251day", "date" , 1);
    if (!FUNC_5(VAR_4, VAR_2, "\251too", "encoding_tool", 1)) {
        if (!(VAR_4->flags & VAR_0))
            FUNC_6(VAR_2, "\251too", VAR_1, 0, 1);
    }
    FUNC_5(VAR_4, VAR_2, "\251cmt", "comment" , 1);
    FUNC_5(VAR_4, VAR_2, "\251gen", "genre" , 1);
    FUNC_5(VAR_4, VAR_2, "cprt", "copyright", 1);
    FUNC_5(VAR_4, VAR_2, "\251grp", "grouping" , 1);
    FUNC_5(VAR_4, VAR_2, "\251lyr", "lyrics" , 1);
    FUNC_5(VAR_4, VAR_2, "desc", "description",1);
    FUNC_5(VAR_4, VAR_2, "ldes", "synopsis" , 1);
    FUNC_5(VAR_4, VAR_2, "tvsh", "show" , 1);
    FUNC_5(VAR_4, VAR_2, "tven", "episode_id",1);
    FUNC_5(VAR_4, VAR_2, "tvnn", "network" , 1);
    FUNC_5(VAR_4, VAR_2, "keyw", "keywords" , 1);
    FUNC_4 (VAR_4, VAR_2, "tves", "episode_sort",4);
    FUNC_4 (VAR_4, VAR_2, "tvsn", "season_number",4);
    FUNC_4 (VAR_4, VAR_2, "stik", "media_type",1);
    FUNC_4 (VAR_4, VAR_2, "hdvd", "hd_video", 1);
    FUNC_4 (VAR_4, VAR_2, "pgap", "gapless_playback",1);
    FUNC_4 (VAR_4, VAR_2, "cpil", "compilation", 1);
    FUNC_3(VAR_2, VAR_4);
    FUNC_8(VAR_2, VAR_3, VAR_4, 0);
    FUNC_8(VAR_2, VAR_3, VAR_4, 1);
    FUNC_7(VAR_2, VAR_4);
    return FUNC_9(VAR_2, VAR_5);
}
