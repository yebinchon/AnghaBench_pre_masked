
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nb_streams; scalar_t__ duration; TYPE_1__** streams; } ;
struct TYPE_4__ {scalar_t__ duration; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(AVFormatContext *VAR_1)
{
    int VAR_2;
    AVStream *VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_1->nb_streams; VAR_2++) {
        VAR_3 = VAR_1->streams[VAR_2];
        if (VAR_3->duration != VAR_0)
            return 1;
    }
    if (VAR_1->duration != VAR_0)
        return 1;
    return 0;
}
