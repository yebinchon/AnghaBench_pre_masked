
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fps; int flags; scalar_t__ start; } ;
typedef TYPE_1__ AVTimecode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ,char*,char*,int,int,int,char,int) ;

char *FUNC_2(const AVTimecode *VAR_4, char *VAR_5, int VAR_6)
{
    int VAR_7 = VAR_4->fps;
    int VAR_8 = VAR_4->flags & VAR_2;
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0;

    VAR_6 += VAR_4->start;
    if (VAR_8)
        VAR_6 = FUNC_0(VAR_6, VAR_7);
    if (VAR_6 < 0) {
        VAR_6 = -VAR_6;
        VAR_13 = VAR_4->flags & VAR_1;
    }
    VAR_12 = VAR_6 % VAR_7;
    VAR_11 = VAR_6 / VAR_7 % 60;
    VAR_10 = VAR_6 / (VAR_7*60) % 60;
    VAR_9 = VAR_6 / (VAR_7*3600);
    if (VAR_4->flags & VAR_0)
        VAR_9 = VAR_9 % 24;
    FUNC_1(VAR_5, VAR_3, "%s%02d:%02d:%02d%c%02d",
             VAR_13 ? "-" : "",
             VAR_9, VAR_10, VAR_11, VAR_8 ? ';' : ':', VAR_12);
    return VAR_5;
}
