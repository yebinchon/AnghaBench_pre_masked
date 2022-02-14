
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Tracks {int nb_tracks; int member_0; } ;


 int FUNC_0 (struct Tracks*) ;
 scalar_t__ FUNC_1 (struct Tracks*,char*) ;
 int FUNC_2 (struct Tracks*,char const*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(int VAR_0, char **VAR_1)
{
    const char *VAR_2 = ((void*)0);
    struct Tracks VAR_3 = { 0 };
    int VAR_4;

    for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) {
        if (!FUNC_3(VAR_1[VAR_4], "-out")) {
            VAR_2 = VAR_1[VAR_4 + 1];
            VAR_4++;
        } else if (VAR_1[VAR_4][0] == '-') {
            return FUNC_4(VAR_1[0], 1);
        } else {
            if (FUNC_1(&VAR_3, VAR_1[VAR_4]))
                return 1;
        }
    }
    if (!VAR_3.nb_tracks || !VAR_2)
        return FUNC_4(VAR_1[0], 1);

    FUNC_2(&VAR_3, VAR_2);

    FUNC_0(&VAR_3);

    return 0;
}
