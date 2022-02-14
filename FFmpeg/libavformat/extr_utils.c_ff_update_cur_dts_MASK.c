
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int nb_streams; TYPE_2__** streams; } ;
struct TYPE_6__ {int den; int num; } ;
struct TYPE_7__ {TYPE_1__ time_base; int cur_dts; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int,int,int) ;

void FUNC_1(AVFormatContext *VAR_0, AVStream *VAR_1, int64_t VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0->nb_streams; VAR_3++) {
        AVStream *VAR_4 = VAR_0->streams[VAR_3];

        VAR_4->cur_dts =
            FUNC_0(VAR_2,
                       VAR_4->time_base.den * (int64_t) VAR_1->time_base.num,
                       VAR_4->time_base.num * (int64_t) VAR_1->time_base.den);
    }
}
