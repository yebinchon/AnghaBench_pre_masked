
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* fmt_fn ) (int *,int,void*) ;
struct TYPE_7__ {int body_size; int state; } ;
struct TYPE_9__ {TYPE_1__ r; int * body; } ;
struct TYPE_8__ {scalar_t__ out_job_sent; TYPE_6__* out_job; } ;
typedef TYPE_2__ Conn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(Conn *VAR_4, fmt_fn VAR_5, void *VAR_6)
{
    int VAR_7, VAR_8;


    VAR_8 = VAR_5(((void*)0), 0, VAR_6) + 16;

    VAR_4->out_job = FUNC_0(VAR_8);
    if (!VAR_4->out_job) {
        FUNC_2(VAR_4, VAR_2);
        return;
    }


    VAR_4->out_job->r.state = VAR_0;


    VAR_7 = VAR_5(VAR_4->out_job->body, VAR_8, VAR_6);

    VAR_4->out_job->r.body_size = VAR_7;
    if (VAR_7 > VAR_8) {
        FUNC_2(VAR_4, VAR_1);
        return;
    }

    VAR_4->out_job_sent = 0;
    FUNC_1(VAR_4, VAR_3, "OK %d\r\n", VAR_7 - 2);
}
