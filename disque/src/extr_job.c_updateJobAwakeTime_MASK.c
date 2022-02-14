
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mstime_t ;
struct TYPE_7__ {scalar_t__ state; int qtime; int flags; int awakeme; scalar_t__ etime; } ;
typedef TYPE_1__ job ;
struct TYPE_8__ {int awakeme; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_5__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;

void FUNC_4(job *VAR_6, mstime_t VAR_7) {
    if (VAR_7 == 0) {



        VAR_7 = (mstime_t)VAR_6->etime*1000+1000;

        if (VAR_6->state == VAR_1) {

            mstime_t VAR_8 = FUNC_0(VAR_6);
            if (VAR_8 < VAR_7) VAR_7 = VAR_8;
        } else if ((VAR_6->state == VAR_2 ||
                    VAR_6->state == VAR_3) && VAR_6->qtime) {



            mstime_t VAR_9 = VAR_6->qtime;
            if (VAR_6->flags & VAR_0)
                VAR_9 -= VAR_4;
            if (VAR_9 < VAR_7) VAR_7 = VAR_9;
        }
    }


    if (VAR_7 != VAR_6->awakeme) {

        if (VAR_6->awakeme) {
            FUNC_1(FUNC_2(VAR_5.awakeme,VAR_6));
        }

        VAR_6->awakeme = VAR_7;
        FUNC_3(VAR_5.awakeme,VAR_6);
    }
}
