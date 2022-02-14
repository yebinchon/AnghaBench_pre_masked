
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int fps; int start; int rate; } ;
typedef TYPE_1__ AVTimecode ;
typedef int AVRational ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,char*) ;
 int FUNC_1 (void*,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (char const*,char*,int*,int*,int*,char*,int*) ;

int FUNC_5(AVTimecode *VAR_3, AVRational VAR_4, const char *VAR_5, void *VAR_6)
{
    char VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

    if (FUNC_4(VAR_5, "%d:%d:%d%c%d", &VAR_8, &VAR_9, &VAR_10, &VAR_7, &VAR_11) != 5) {
        FUNC_0(VAR_6, VAR_1, "Unable to parse timecode, "
                                      "syntax: hh:mm:ss[:;.]ff\n");
        return VAR_0;
    }

    FUNC_3(VAR_3, 0, sizeof(*VAR_3));
    VAR_3->flags = VAR_7 != ':' ? VAR_2 : 0;
    VAR_3->rate = VAR_4;
    VAR_3->fps = FUNC_2(VAR_4);

    VAR_12 = FUNC_1(VAR_6, VAR_3);
    if (VAR_12 < 0)
        return VAR_12;

    VAR_3->start = (VAR_8*3600 + VAR_9*60 + VAR_10) * VAR_3->fps + VAR_11;
    if (VAR_3->flags & VAR_2) {
        int VAR_13 = 60*VAR_8 + VAR_9;
        VAR_3->start -= (VAR_3->fps == 30 ? 2 : 4) * (VAR_13 - VAR_13/10);
    }
    return 0;
}
