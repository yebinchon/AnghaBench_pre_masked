
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int datadir ;
typedef int FILE ;


 char const* VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (char*,char const*,size_t) ;
 int * FUNC_3 (char*,char*) ;
 char const* FUNC_4 (char*) ;
 int FUNC_5 (char*,size_t,char*,char const*,char*,char const*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char*,char) ;

FILE *FUNC_9(char *VAR_2, size_t VAR_3,
                      const char *VAR_4, int VAR_5,
                      const char *VAR_6)
{
    FILE *VAR_7 = ((void*)0);
    int VAR_8;
    const char *VAR_9[3] = { FUNC_4("FFMPEG_DATADIR"),
                            FUNC_4("HOME"),
                            VAR_0, };

    if (VAR_5) {
        FUNC_2(VAR_2, VAR_4, VAR_3);
        VAR_7 = FUNC_3(VAR_2, "r");
    } else {
        for (VAR_8 = 0; VAR_8 < 3 && !VAR_7; VAR_8++) {
            if (!VAR_9[VAR_8])
                continue;
            FUNC_5(VAR_2, VAR_3, "%s%s/%s.ffpreset", VAR_9[VAR_8],
                     VAR_8 != 1 ? "" : "/.ffmpeg", VAR_4);
            VAR_7 = FUNC_3(VAR_2, "r");
            if (!VAR_7 && VAR_6) {
                FUNC_5(VAR_2, VAR_3,
                         "%s%s/%s-%s.ffpreset",
                         VAR_9[VAR_8], VAR_8 != 1 ? "" : "/.ffmpeg", VAR_6,
                         VAR_4);
                VAR_7 = FUNC_3(VAR_2, "r");
            }
        }
    }

    return VAR_7;
}
