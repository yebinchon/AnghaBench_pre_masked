
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {int num; int den; } ;
struct TYPE_11__ {TYPE_3__* stream; TYPE_2__* avf; } ;
struct TYPE_10__ {TYPE_1__* time_base; int last_pts; } ;
struct TYPE_9__ {int nb_streams; } ;
struct TYPE_8__ {scalar_t__ num; scalar_t__ den; } ;
typedef TYPE_4__ NUTContext ;
typedef TYPE_5__ AVRational ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int ) ;

void FUNC_1(NUTContext *VAR_1, AVRational VAR_2, int64_t VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_1->avf->nb_streams; VAR_4++)
        VAR_1->stream[VAR_4].last_pts =
            FUNC_0(VAR_3,
                           VAR_2.num * (int64_t)VAR_1->stream[VAR_4].time_base->den,
                           VAR_2.den * (int64_t)VAR_1->stream[VAR_4].time_base->num,
                           VAR_0);
}
