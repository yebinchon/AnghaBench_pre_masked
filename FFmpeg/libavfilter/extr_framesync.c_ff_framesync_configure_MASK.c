
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int num; int den; } ;
struct TYPE_9__ {scalar_t__ opt_eof_action; int opt_shortest; unsigned int nb_in; int sync_level; TYPE_2__* in; TYPE_1__ time_base; scalar_t__ opt_repeatlast; } ;
struct TYPE_8__ {int pts_next; int pts; TYPE_1__ time_base; scalar_t__ sync; int after; } ;
typedef TYPE_3__ FFFrameSync ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 int FUNC_3 (TYPE_3__*) ;

int FUNC_4(FFFrameSync *VAR_10)
{
    unsigned VAR_11;
    int64_t VAR_12, VAR_13;

    if (!VAR_10->opt_repeatlast || VAR_10->opt_eof_action == VAR_6) {
        VAR_10->opt_repeatlast = 0;
        VAR_10->opt_eof_action = VAR_6;
    }
    if (VAR_10->opt_shortest || VAR_10->opt_eof_action == VAR_5) {
        VAR_10->opt_shortest = 1;
        VAR_10->opt_eof_action = VAR_5;
    }
    if (!VAR_10->opt_repeatlast) {
        for (VAR_11 = 1; VAR_11 < VAR_10->nb_in; VAR_11++) {
            VAR_10->in[VAR_11].after = VAR_7;
            VAR_10->in[VAR_11].sync = 0;
        }
    }
    if (VAR_10->opt_shortest) {
        for (VAR_11 = 0; VAR_11 < VAR_10->nb_in; VAR_11++)
            VAR_10->in[VAR_11].after = VAR_8;
    }

    if (!VAR_10->time_base.num) {
        for (VAR_11 = 0; VAR_11 < VAR_10->nb_in; VAR_11++) {
            if (VAR_10->in[VAR_11].sync) {
                if (VAR_10->time_base.num) {
                    VAR_12 = FUNC_1(VAR_10->time_base.den, VAR_10->in[VAR_11].time_base.den);
                    VAR_13 = (VAR_10->time_base.den / VAR_12) * VAR_10->in[VAR_11].time_base.den;
                    if (VAR_13 < VAR_3 / 2) {
                        VAR_10->time_base.den = VAR_13;
                        VAR_10->time_base.num = FUNC_1(VAR_10->time_base.num,
                                                   VAR_10->in[VAR_11].time_base.num);
                    } else {
                        VAR_10->time_base.num = 1;
                        VAR_10->time_base.den = VAR_3;
                        break;
                    }
                } else {
                    VAR_10->time_base = VAR_10->in[VAR_11].time_base;
                }
            }
        }
        if (!VAR_10->time_base.num) {
            FUNC_2(VAR_10, VAR_0, "Impossible to set time base\n");
            return FUNC_0(VAR_4);
        }
        FUNC_2(VAR_10, VAR_1, "Selected %d/%d time base\n",
               VAR_10->time_base.num, VAR_10->time_base.den);
    }

    for (VAR_11 = 0; VAR_11 < VAR_10->nb_in; VAR_11++)
        VAR_10->in[VAR_11].pts = VAR_10->in[VAR_11].pts_next = VAR_2;
    VAR_10->sync_level = VAR_9;
    FUNC_3(VAR_10);

    return 0;
}
