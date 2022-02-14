
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_13__ {scalar_t__ state; } ;
struct TYPE_17__ {TYPE_1__ r; } ;
struct TYPE_16__ {int fd; } ;
struct TYPE_15__ {int type; scalar_t__ in_conns; int tickpos; TYPE_2__* srv; TYPE_11__* use; int watch; scalar_t__ in_job_read; TYPE_6__* out_job; TYPE_6__* in_job; TYPE_4__ sock; } ;
struct TYPE_14__ {int conns; } ;
struct TYPE_12__ {int using_ct; } ;
typedef TYPE_3__ Conn ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_11__*,int *) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 scalar_t__ VAR_6 ;

void
FUNC_11(Conn *VAR_7)
{
    FUNC_10(&VAR_7->sock, 0);
    FUNC_1(VAR_7->sock.fd);
    if (VAR_6) {
        FUNC_8("close %d\n", VAR_7->sock.fd);
    }

    FUNC_6(VAR_7->in_job);


    if (VAR_7->out_job && VAR_7->out_job->r.state == VAR_2)
        FUNC_6(VAR_7->out_job);

    VAR_7->in_job = VAR_7->out_job = ((void*)0);
    VAR_7->in_job_read = 0;

    if (VAR_7->type & VAR_0) VAR_4--;
    if (VAR_7->type & VAR_1) VAR_5--;

    VAR_3--;

    FUNC_9(VAR_7);
    if (FUNC_4(VAR_7))
        FUNC_2(VAR_7);

    FUNC_7(&VAR_7->watch);
    VAR_7->use->using_ct--;
    FUNC_0(VAR_7->use, ((void*)0));

    if (VAR_7->in_conns) {
        FUNC_5(&VAR_7->srv->conns, VAR_7->tickpos);
        VAR_7->in_conns = 0;
    }

    FUNC_3(VAR_7);
}
