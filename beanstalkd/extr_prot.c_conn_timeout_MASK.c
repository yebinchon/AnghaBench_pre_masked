
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ pending_timeout; int srv; TYPE_2__* out_job; } ;
struct TYPE_17__ {scalar_t__ deadline_at; int timeout_ct; } ;
struct TYPE_18__ {TYPE_1__ r; } ;
typedef TYPE_2__ Job ;
typedef TYPE_3__ Conn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_11(Conn *VAR_3)
{
    int VAR_4 = 0;
    Job *VAR_5;


    if (FUNC_1(VAR_3) && FUNC_2(VAR_3))
        VAR_4 = 1;



    while ((VAR_5 = FUNC_4(VAR_3))) {
        if (VAR_5->r.deadline_at >= FUNC_7())
            break;





        if (VAR_5 == VAR_3->out_job) {
            VAR_3->out_job = FUNC_6(VAR_3->out_job);
        }

        VAR_2++;
        VAR_5->r.timeout_ct++;
        int VAR_6 = FUNC_5(VAR_3->srv, FUNC_8(VAR_3, VAR_5), 0, 0);
        if (VAR_6 < 1)
            FUNC_0(VAR_3->srv, VAR_5, 0);
        FUNC_3(VAR_3);
    }

    if (VAR_4) {
        FUNC_9(VAR_3);
        FUNC_10(VAR_3, VAR_0);
    } else if (FUNC_1(VAR_3) && VAR_3->pending_timeout >= 0) {
        VAR_3->pending_timeout = -1;
        FUNC_9(VAR_3);
        FUNC_10(VAR_3, VAR_1);
    }
}
