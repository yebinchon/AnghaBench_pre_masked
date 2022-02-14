
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ in_job_read; int state; TYPE_2__* in_job; } ;
struct TYPE_6__ {scalar_t__ body_size; } ;
struct TYPE_7__ {TYPE_1__ r; } ;
typedef TYPE_2__ Job ;
typedef TYPE_3__ Conn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(Conn *VAR_1)
{
    Job *VAR_2 = VAR_1->in_job;


    if (VAR_1->in_job_read == VAR_2->r.body_size) {
        FUNC_0(VAR_1);
        return;
    }


    VAR_1->state = VAR_0;
}
