
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ff; int drop; scalar_t__ color; int ss; int mm; int hh; } ;
typedef TYPE_1__ GXFTimecode ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (char const*,char*,int *,int *,int *,char*,int*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, GXFTimecode *VAR_2, const char *VAR_3, int VAR_4)
{
    char VAR_5;

    if (FUNC_1(VAR_3, "%d:%d:%d%c%d", &VAR_2->hh, &VAR_2->mm, &VAR_2->ss, &VAR_5, &VAR_2->ff) != 5) {
        FUNC_0(VAR_1, VAR_0, "unable to parse timecode, "
                                "syntax: hh:mm:ss[:;.]ff\n");
        return -1;
    }

    VAR_2->color = 0;
    VAR_2->drop = VAR_5 != ':';

    if (VAR_4 == 2)
        VAR_2->ff = VAR_2->ff * 2;

    return 0;
}
