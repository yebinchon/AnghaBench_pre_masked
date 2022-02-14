
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int robj ;
struct TYPE_5__ {scalar_t__ clients; scalar_t__ needjobs_responders; int sl; int name; } ;
typedef TYPE_1__ queue ;
struct TYPE_6__ {int queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__* FUNC_5 (int *) ;
 TYPE_3__ VAR_2 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;

int FUNC_9(robj *VAR_3) {
    queue *VAR_4 = FUNC_5(VAR_3);
    if (!VAR_4) return VAR_0;

    FUNC_1(VAR_2.queues,VAR_3);
    FUNC_0(VAR_4->name);
    FUNC_7(VAR_4->sl);
    if (VAR_4->needjobs_responders) FUNC_2(VAR_4->needjobs_responders);
    if (VAR_4->clients) {
        FUNC_6(FUNC_3(VAR_4->clients) == 0);
        FUNC_4(VAR_4->clients);
    }
    FUNC_8(VAR_4);
    return VAR_1;
}
