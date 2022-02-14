
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nb_streams; scalar_t__ start_time; scalar_t__ duration; TYPE_1__** streams; } ;
struct TYPE_5__ {scalar_t__ start_time; int time_base; void* duration; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_2)
{
    int VAR_3;
    AVStream *VAR_4;

    FUNC_1(VAR_2);
    for (VAR_3 = 0; VAR_3 < VAR_2->nb_streams; VAR_3++) {
        VAR_4 = VAR_2->streams[VAR_3];
        if (VAR_4->start_time == VAR_0) {
            if (VAR_2->start_time != VAR_0)
                VAR_4->start_time = FUNC_0(VAR_2->start_time, VAR_1,
                                              VAR_4->time_base);
            if (VAR_2->duration != VAR_0)
                VAR_4->duration = FUNC_0(VAR_2->duration, VAR_1,
                                            VAR_4->time_base);
        }
    }
}
