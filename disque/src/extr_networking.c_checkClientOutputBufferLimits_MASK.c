
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_8__ {scalar_t__ obuf_soft_limit_reached_time; } ;
typedef TYPE_2__ client ;
struct TYPE_9__ {scalar_t__ unixtime; TYPE_1__* client_obuf_limits; } ;
struct TYPE_7__ {unsigned long hard_limit_bytes; unsigned long soft_limit_bytes; scalar_t__ soft_limit_seconds; } ;


 unsigned long FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__ VAR_0 ;

int FUNC_2(client *VAR_1) {
    int VAR_2 = 0, VAR_3 = 0, VAR_4;
    unsigned long VAR_5 = FUNC_0(VAR_1);

    VAR_4 = FUNC_1(VAR_1);
    if (VAR_0.client_obuf_limits[VAR_4].hard_limit_bytes &&
        VAR_5 >= VAR_0.client_obuf_limits[VAR_4].hard_limit_bytes)
        VAR_3 = 1;
    if (VAR_0.client_obuf_limits[VAR_4].soft_limit_bytes &&
        VAR_5 >= VAR_0.client_obuf_limits[VAR_4].soft_limit_bytes)
        VAR_2 = 1;



    if (VAR_2) {
        if (VAR_1->obuf_soft_limit_reached_time == 0) {
            VAR_1->obuf_soft_limit_reached_time = VAR_0.unixtime;
            VAR_2 = 0;
        } else {
            time_t VAR_6 = VAR_0.unixtime - VAR_1->obuf_soft_limit_reached_time;

            if (VAR_6 <=
                VAR_0.client_obuf_limits[VAR_4].soft_limit_seconds) {
                VAR_2 = 0;


            }
        }
    } else {
        VAR_1->obuf_soft_limit_reached_time = 0;
    }
    return VAR_2 || VAR_3;
}
