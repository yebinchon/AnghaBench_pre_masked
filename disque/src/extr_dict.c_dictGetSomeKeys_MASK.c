
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_2__ dictEntry ;
struct TYPE_11__ {unsigned int rehashidx; TYPE_1__* ht; } ;
typedef TYPE_3__ dict ;
struct TYPE_9__ {unsigned int sizemask; unsigned int size; TYPE_2__** table; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 unsigned int FUNC_2 (TYPE_3__*) ;
 unsigned int FUNC_3 () ;

unsigned int FUNC_4(dict *VAR_0, dictEntry **VAR_1, unsigned int VAR_2) {
    unsigned int VAR_3;
    unsigned int VAR_4;
    unsigned int VAR_5 = 0, VAR_6;
    unsigned int VAR_7;

    if (FUNC_2(VAR_0) < VAR_2) VAR_2 = FUNC_2(VAR_0);
    VAR_7 = VAR_2*10;


    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if (FUNC_1(VAR_0))
            FUNC_0(VAR_0);
        else
            break;
    }

    VAR_4 = FUNC_1(VAR_0) ? 2 : 1;
    VAR_6 = VAR_0->ht[0].sizemask;
    if (VAR_4 > 1 && VAR_6 < VAR_0->ht[1].sizemask)
        VAR_6 = VAR_0->ht[1].sizemask;


    unsigned int VAR_8 = FUNC_3() & VAR_6;
    unsigned int VAR_9 = 0;
    while(VAR_5 < VAR_2 && VAR_7--) {
        for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {



            if (VAR_4 == 2 && VAR_3 == 0 && VAR_8 < VAR_0->rehashidx) {




                if (VAR_8 >= VAR_0->ht[1].size) VAR_8 = VAR_0->rehashidx;
                continue;
            }
            if (VAR_8 >= VAR_0->ht[VAR_3].size) continue;
            dictEntry *VAR_10 = VAR_0->ht[VAR_3].table[VAR_8];



            if (VAR_10 == ((void*)0)) {
                VAR_9++;
                if (VAR_9 >= 5 && VAR_9 > VAR_2) {
                    VAR_8 = FUNC_3() & VAR_6;
                    VAR_9 = 0;
                }
            } else {
                VAR_9 = 0;
                while (VAR_10) {


                    *VAR_1 = VAR_10;
                    VAR_1++;
                    VAR_10 = VAR_10->next;
                    VAR_5++;
                    if (VAR_5 == VAR_2) return VAR_5;
                }
            }
        }
        VAR_8 = (VAR_8+1) & VAR_6;
    }
    return VAR_5;
}
