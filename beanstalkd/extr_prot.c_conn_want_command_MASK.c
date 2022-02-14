
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_8__ {TYPE_1__ r; } ;
struct TYPE_7__ {int state; scalar_t__ reply_sent; TYPE_3__* out_job; } ;
typedef TYPE_2__ Conn ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(Conn *VAR_2)
{
    FUNC_0(VAR_2, 'r');


    if (VAR_2->out_job && VAR_2->out_job->r.state == VAR_0)
        FUNC_1(VAR_2->out_job);
    VAR_2->out_job = ((void*)0);

    VAR_2->reply_sent = 0;
    VAR_2->state = VAR_1;
}
