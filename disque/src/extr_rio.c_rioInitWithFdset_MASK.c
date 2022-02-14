
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numfds; int buf; scalar_t__ pos; scalar_t__* state; void* fds; } ;
struct TYPE_7__ {TYPE_1__ fdset; } ;
struct TYPE_8__ {TYPE_2__ io; } ;
typedef TYPE_3__ rio ;


 int FUNC_0 (void*,int*,int) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 () ;
 void* FUNC_2 (int) ;

void FUNC_3(rio *VAR_1, int *VAR_2, int VAR_3) {
    int VAR_4;

    *VAR_1 = VAR_0;
    VAR_1->io.fdset.fds = FUNC_2(sizeof(int)*VAR_3);
    VAR_1->io.fdset.state = FUNC_2(sizeof(int)*VAR_3);
    FUNC_0(VAR_1->io.fdset.fds,VAR_2,sizeof(int)*VAR_3);
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) VAR_1->io.fdset.state[VAR_4] = 0;
    VAR_1->io.fdset.numfds = VAR_3;
    VAR_1->io.fdset.pos = 0;
    VAR_1->io.fdset.buf = FUNC_1();
}
