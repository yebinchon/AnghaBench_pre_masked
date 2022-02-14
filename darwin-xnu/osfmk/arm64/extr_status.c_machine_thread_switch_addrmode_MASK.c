
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_8__* thread_t ;
struct TYPE_16__ {TYPE_6__* uNeon; TYPE_3__* upcb; } ;
struct TYPE_17__ {TYPE_7__ machine; int task; } ;
struct TYPE_14__ {int fpcr; } ;
struct TYPE_13__ {int count; int flavor; } ;
struct TYPE_10__ {int fpcr; } ;
struct TYPE_15__ {TYPE_5__ ns_32; int uns; TYPE_4__ nsh; TYPE_1__ ns_64; } ;
struct TYPE_11__ {int count; int flavor; } ;
struct TYPE_12__ {TYPE_2__ ash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(thread_t VAR_10)
{
 if (FUNC_1(VAR_10->task)) {
  VAR_10->machine.upcb->ash.flavor = VAR_6;
  VAR_10->machine.upcb->ash.count = VAR_7;
  VAR_10->machine.uNeon->nsh.flavor = VAR_2;
  VAR_10->machine.uNeon->nsh.count = VAR_3;




  FUNC_0(&VAR_10->machine.uNeon->uns, sizeof(VAR_10->machine.uNeon->uns));
  VAR_10->machine.uNeon->ns_64.fpcr = VAR_8;
 } else {
  VAR_10->machine.upcb->ash.flavor = VAR_4;
  VAR_10->machine.upcb->ash.count = VAR_5;
  VAR_10->machine.uNeon->nsh.flavor = VAR_0;
  VAR_10->machine.uNeon->nsh.count = VAR_1;




  FUNC_0(&VAR_10->machine.uNeon->uns, sizeof(VAR_10->machine.uNeon->uns));
  VAR_10->machine.uNeon->ns_32.fpcr = VAR_9;
 }
}
