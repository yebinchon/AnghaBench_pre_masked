
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned long uint32_t ;
struct TYPE_8__ {int needjobs_bcast_attempt; void* needjobs_bcast_time; int needjobs_adhoc_attempt; void* needjobs_adhoc_time; int needjobs_responders; int name; } ;
typedef TYPE_2__ queue ;
typedef void* mstime_t ;
struct TYPE_9__ {TYPE_1__* cluster; } ;
struct TYPE_7__ {int nodes; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,unsigned long,int ) ;
 unsigned long FUNC_1 (TYPE_2__*) ;
 unsigned long FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 TYPE_3__ VAR_7 ;

void FUNC_5(queue *VAR_8, int VAR_9) {
    uint32_t VAR_10;
    uint32_t VAR_11;
    unsigned long VAR_12 = 0;
    mstime_t VAR_13, VAR_14;
    mstime_t VAR_15 = FUNC_3();


    if (FUNC_4()) return;

    VAR_10 = FUNC_1(VAR_8);





    if (VAR_9 == VAR_6 && VAR_10 == 0) return;




    VAR_12 = FUNC_2(VAR_8);
    VAR_11 = VAR_5;
    if (VAR_12 > 0)
        VAR_11 = VAR_10 / VAR_12;


    if (VAR_11 < VAR_5) VAR_11 = VAR_5;
    else if (VAR_11 > VAR_4) VAR_11 = VAR_4;



    VAR_13 = VAR_3 *
                  (1 << VAR_8->needjobs_bcast_attempt);
    if (VAR_13 > VAR_2)
        VAR_13 = VAR_2;

    if (VAR_15 - VAR_8->needjobs_bcast_time > VAR_13) {
        VAR_8->needjobs_bcast_time = VAR_15;
        VAR_8->needjobs_bcast_attempt++;


        FUNC_0(VAR_8->name,1,VAR_7.cluster->nodes);
    }
    VAR_14 = VAR_1 *
                  (1 << VAR_8->needjobs_adhoc_attempt);
    if (VAR_14 > VAR_0)
        VAR_14 = VAR_0;

    if ((VAR_9 == VAR_6 ||
         VAR_15 - VAR_8->needjobs_adhoc_time > VAR_14) &&
         VAR_12 > 0)
    {
        VAR_8->needjobs_adhoc_time = VAR_15;
        VAR_8->needjobs_adhoc_attempt++;
        FUNC_0(VAR_8->name,VAR_11,VAR_8->needjobs_responders);
    }
}
