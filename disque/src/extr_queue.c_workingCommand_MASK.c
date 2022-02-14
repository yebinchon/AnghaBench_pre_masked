
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int mstime_t ;
struct TYPE_13__ {int ctime; scalar_t__ state; int retry; int flags; scalar_t__ etime; } ;
typedef TYPE_1__ job ;
struct TYPE_14__ {TYPE_5__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_16__ {int mstime; } ;
struct TYPE_15__ {int ptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 TYPE_7__ VAR_4 ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_5__**,int) ;

void FUNC_9(client *VAR_5) {
    if (FUNC_8(VAR_5,VAR_5->argv+1,1) == VAR_0) return;

    job *VAR_6 = FUNC_4(VAR_5->argv[1]->ptr);
    if (VAR_6 == ((void*)0)) {
        FUNC_1(VAR_5,
            FUNC_6("-NOJOB Job not known in the context of this node.\r\n"));
        return;
    }




    mstime_t VAR_7 = ((mstime_t)VAR_6->etime*1000) - (VAR_6->ctime/1000000);
    mstime_t VAR_8 = VAR_4.mstime - (VAR_6->ctime/1000000);
    if (VAR_7 > 0 && VAR_8 > VAR_7/2) {
        FUNC_1(VAR_5,
            FUNC_6("-TOOLATE Half of job TTL already elapsed, "
                   "you are no longer allowed to postpone the "
                   "next delivery.\r\n"));
        return;
    }

    if (VAR_6->state == VAR_3) FUNC_3(VAR_6);
    VAR_6->flags |= VAR_2;
    FUNC_7(VAR_6,VAR_4.mstime+
                         VAR_6->retry*1000+
                         FUNC_5(VAR_1));
    FUNC_2(VAR_6);
    FUNC_0(VAR_5,VAR_6->retry);
}
