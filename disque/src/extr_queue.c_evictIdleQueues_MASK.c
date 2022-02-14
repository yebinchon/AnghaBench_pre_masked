
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
typedef int queue ;
typedef int mstime_t ;
typedef int dictEntry ;
struct TYPE_2__ {int queues; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__ VAR_2 ;

int FUNC_6(void) {
    mstime_t VAR_3 = FUNC_5();
    time_t VAR_4 = VAR_1;
    long VAR_5 = 0, VAR_6 = 0;

    if (FUNC_4() > 0) VAR_4 /= 30;
    if (FUNC_4() > 1) VAR_4 = 2;
    while (FUNC_3(VAR_2.queues) != 0) {
        dictEntry *VAR_7 = FUNC_1(VAR_2.queues);
        queue *VAR_8 = FUNC_2(VAR_7);

        VAR_5++;
        if (FUNC_0(VAR_8,VAR_4) == VAR_0) VAR_6++;



        if (VAR_5 > 10 && (VAR_6 * 10) < VAR_5) break;



        if (((VAR_5+1) % 1000) == 0 && FUNC_5()-VAR_3 > 1) break;
    }
    return VAR_6;
}
