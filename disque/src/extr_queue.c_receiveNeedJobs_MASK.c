
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef int robj ;
struct TYPE_11__ {int flags; } ;
typedef TYPE_1__ queue ;
struct TYPE_12__ {scalar_t__ retry; } ;
typedef TYPE_2__ job ;
typedef int clusterNode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__**,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int *) ;
 unsigned long FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8(clusterNode *VAR_2, robj *VAR_3, uint32_t VAR_4) {
    queue *VAR_5 = FUNC_3(VAR_3);
    unsigned long VAR_6 = FUNC_5(VAR_5);
    uint32_t VAR_7 = VAR_4;
    uint32_t VAR_8;




    if (VAR_6 == 0 || FUNC_2(VAR_5) > 0) return;


    if (VAR_5->flags & VAR_1) return;





    if (VAR_6 < VAR_4*2) VAR_7 = VAR_6/2;
    if (VAR_7 == 0) VAR_7 = 1;

    job *VAR_9[VAR_0];
    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        VAR_9[VAR_8] = FUNC_4(VAR_5,((void*)0));
        FUNC_6(VAR_9[VAR_8] != ((void*)0));
    }
    FUNC_0(VAR_2,VAR_9,VAR_7);




    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        job *VAR_10 = VAR_9[VAR_8];
        if (VAR_10->retry == 0) {
            FUNC_7(VAR_10);
            FUNC_1(VAR_10);
        }
    }
}
