
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;
typedef int AVIOContext ;


 char const* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 (int **,char*,int ,int *,int *) ;
 char const* FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,char*,char const*,char*,char const*,...) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, const char *VAR_4, AVIOContext **VAR_5)
{
    int VAR_6, VAR_7 = -1;
    char VAR_8[1000];
    const char *VAR_9[3] = { FUNC_2("AVCONV_DATADIR"),
                            FUNC_2("HOME"),
                            VAR_0,
                            };

    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_9) && VAR_7 < 0; VAR_6++) {
        if (!VAR_9[VAR_6])
            continue;
        if (VAR_4) {
            FUNC_3(VAR_8, sizeof(VAR_8), "%s%s/%s-%s.avpreset", VAR_9[VAR_6],
                     VAR_6 != 1 ? "" : "/.avconv", VAR_4, VAR_3);
            VAR_7 = FUNC_1(VAR_5, VAR_8, VAR_1, &VAR_2, ((void*)0));
        }
        if (VAR_7 < 0) {
            FUNC_3(VAR_8, sizeof(VAR_8), "%s%s/%s.avpreset", VAR_9[VAR_6],
                     VAR_6 != 1 ? "" : "/.avconv", VAR_3);
            VAR_7 = FUNC_1(VAR_5, VAR_8, VAR_1, &VAR_2, ((void*)0));
        }
    }
    return VAR_7;
}
