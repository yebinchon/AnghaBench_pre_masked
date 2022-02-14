
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buf; int state; int fds; } ;
struct TYPE_6__ {TYPE_1__ fdset; } ;
struct TYPE_7__ {TYPE_2__ io; } ;
typedef TYPE_3__ rio ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(rio *VAR_0) {
    FUNC_1(VAR_0->io.fdset.fds);
    FUNC_1(VAR_0->io.fdset.state);
    FUNC_0(VAR_0->io.fdset.buf);
}
