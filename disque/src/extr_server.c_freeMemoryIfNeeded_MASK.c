
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mstime_t ;
struct TYPE_6__ {scalar_t__ state; scalar_t__ retry; int flags; } ;
typedef TYPE_1__ job ;
typedef int dictEntry ;
struct TYPE_7__ {scalar_t__ maxmemory_policy; int maxmemory; int jobs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 TYPE_3__ VAR_6 ;
 int FUNC_9 (TYPE_1__*) ;
 size_t FUNC_10 () ;

int FUNC_11(void) {
    size_t VAR_7, VAR_8, VAR_9, VAR_10;
    mstime_t VAR_11;



    if (FUNC_4() < 2) return VAR_1;

    if (VAR_6.maxmemory_policy == VAR_5)
        return VAR_0;


    VAR_7 = FUNC_10();
    VAR_10 = VAR_6.maxmemory / 100 * 95;





    if (VAR_7 <= VAR_10) return VAR_1;



    VAR_8 = VAR_7 - VAR_10;
    VAR_9 = 0;
    FUNC_7(VAR_11);

    int VAR_12 = 0;
    while (VAR_9 < VAR_8) {
        long long VAR_13;
        dictEntry *VAR_14;







        VAR_14 = FUNC_1(VAR_6.jobs);
        VAR_13 = (long long) FUNC_10();



        if (VAR_14 == ((void*)0)) {
            if (FUNC_2() == 0) return VAR_0;
        } else {
            job *VAR_15 = FUNC_0(VAR_14);
            if ((VAR_15->state == VAR_4) ||
                (VAR_15->retry == 0 && VAR_15->flags & VAR_3))
            {
                FUNC_9(VAR_15);
                FUNC_3(VAR_15);
                VAR_12 = 0;
            } else {
                VAR_12++;
            }
        }

        VAR_13 -= (long long) FUNC_10();
        VAR_9 += VAR_13;




        if (VAR_12 > VAR_2 || (FUNC_8() - VAR_11) > 1) {
            FUNC_6(VAR_11);
            FUNC_5("eviction-cycle",VAR_11);
            return VAR_0;
        }
    }
    FUNC_6(VAR_11);
    FUNC_5("eviction-cycle",VAR_11);
    return VAR_1;
}
