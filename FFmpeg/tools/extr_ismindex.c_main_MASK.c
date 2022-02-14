
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Tracks {int video_track; int audio_track; int nb_tracks; int member_0; } ;
typedef int output_prefix_buf ;


 int FUNC_0 (struct Tracks*) ;
 scalar_t__ FUNC_1 (struct Tracks*,char*,int,int,char const*,char const*) ;
 int FUNC_2 (struct Tracks*,char const*,char const*,int) ;
 int FUNC_3 (struct Tracks*,char const*,char const*,char const*,char const*) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,int) ;

int FUNC_8(int VAR_0, char **VAR_1)
{
    const char *VAR_2 = ((void*)0);
    const char *VAR_3 = "", *VAR_4 = "";
    const char *VAR_5 = "";
    char VAR_6[2048];
    int VAR_7 = 0, VAR_8 = 0, VAR_9;
    struct Tracks VAR_10 = { 0, .video_track = -1, .audio_track = -1 };

    for (VAR_9 = 1; VAR_9 < VAR_0; VAR_9++) {
        if (!FUNC_5(VAR_1[VAR_9], "-n")) {
            VAR_2 = VAR_1[VAR_9 + 1];
            VAR_9++;
        } else if (!FUNC_5(VAR_1[VAR_9], "-path-prefix")) {
            VAR_3 = VAR_1[VAR_9 + 1];
            VAR_9++;
        } else if (!FUNC_5(VAR_1[VAR_9], "-ismc-prefix")) {
            VAR_4 = VAR_1[VAR_9 + 1];
            VAR_9++;
        } else if (!FUNC_5(VAR_1[VAR_9], "-output")) {
            VAR_5 = VAR_1[VAR_9 + 1];
            VAR_9++;
            if (VAR_5[FUNC_6(VAR_5) - 1] != '/') {
                FUNC_4(VAR_6, sizeof(VAR_6),
                         "%s/", VAR_5);
                VAR_5 = VAR_6;
            }
        } else if (!FUNC_5(VAR_1[VAR_9], "-split")) {
            VAR_7 = 1;
        } else if (!FUNC_5(VAR_1[VAR_9], "-ismf")) {
            VAR_8 = 1;
        } else if (VAR_1[VAR_9][0] == '-') {
            return FUNC_7(VAR_1[0], 1);
        } else {
            if (!VAR_2)
                VAR_8 = 0;
            if (FUNC_1(&VAR_10, VAR_1[VAR_9], VAR_7, VAR_8,
                            VAR_2, VAR_5))
                return 1;
        }
    }
    if (!VAR_10.nb_tracks || (!VAR_2 && !VAR_7))
        return FUNC_7(VAR_1[0], 1);

    if (!VAR_7)
        FUNC_3(&VAR_10, VAR_2, VAR_5,
                               VAR_3, VAR_4);
    FUNC_2(&VAR_10, VAR_2, VAR_5, VAR_7);

    FUNC_0(&VAR_10);

    return 0;
}
