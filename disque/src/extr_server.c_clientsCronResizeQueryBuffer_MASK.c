
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {int lastinteraction; int querybuf_peak; int querybuf; } ;
typedef TYPE_1__ client ;
struct TYPE_5__ {int unixtime; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_1 ;

int FUNC_3(client *VAR_2) {
    size_t VAR_3 = FUNC_0(VAR_2->querybuf);
    time_t VAR_4 = VAR_1.unixtime - VAR_2->lastinteraction;




    if (((VAR_3 > VAR_0) &&
         (VAR_3/(VAR_2->querybuf_peak+1)) > 2) ||
         (VAR_3 > 1024 && VAR_4 > 2))
    {

        if (FUNC_2(VAR_2->querybuf) > 1024) {
            VAR_2->querybuf = FUNC_1(VAR_2->querybuf);
        }
    }


    VAR_2->querybuf_peak = 0;
    return 0;
}
