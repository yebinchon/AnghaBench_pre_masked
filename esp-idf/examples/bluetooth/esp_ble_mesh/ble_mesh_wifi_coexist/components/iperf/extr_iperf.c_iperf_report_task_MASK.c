
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int TickType_t ;
struct TYPE_3__ {int interval; int time; } ;
struct TYPE_4__ {int finish; int total_len; TYPE_1__ cfg; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

void FUNC_3(void *VAR_2)
{
    TickType_t VAR_3 = (VAR_1.cfg.interval * 1000) / VAR_0;
    uint32_t VAR_4 = VAR_1.cfg.interval;
    uint32_t VAR_5 = VAR_1.cfg.time;
    uint32_t VAR_6 = 0;
    uint32_t VAR_7 = 0;

    FUNC_0("\n%16s %s\n", "Interval", "Bandwidth");
    while (!VAR_1.finish) {
        FUNC_1(VAR_3);
        FUNC_0("%4d-%4d sec       %.2f Mbits/sec\n", VAR_7, VAR_7 + VAR_4, (double)((VAR_1.total_len - VAR_6) * 8) / VAR_4 / 1e6);
        VAR_7 += VAR_4;
        VAR_6 = VAR_1.total_len;
        if (VAR_7 == VAR_5) {
            break;
        }
    }

    if (VAR_7 != 0) {
        FUNC_0("%4d-%4d sec       %.2f Mbits/sec\n", 0, VAR_5, (double)(VAR_1.total_len * 8) / VAR_7 / 1e6);
    }

    VAR_1.finish = 1;
    FUNC_2(((void*)0));
}
