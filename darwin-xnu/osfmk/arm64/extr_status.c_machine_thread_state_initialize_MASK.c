
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


typedef TYPE_7__* thread_t ;
typedef int kern_return_t ;
struct TYPE_12__ {int fpcr; } ;
struct TYPE_11__ {int fpcr; } ;
struct TYPE_10__ {scalar_t__ flavor; } ;
struct TYPE_15__ {TYPE_3__ ns_32; TYPE_2__ ns_64; TYPE_1__ nsh; int uns; } ;
struct TYPE_14__ {int uss; } ;
struct TYPE_17__ {TYPE_6__ ns; TYPE_5__ ss; } ;
typedef TYPE_8__ arm_context_t ;
struct TYPE_13__ {int * DebugData; TYPE_8__* contextData; } ;
struct TYPE_16__ {TYPE_4__ machine; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;

kern_return_t
FUNC_1(
    thread_t VAR_4)
{
 arm_context_t *VAR_5 = VAR_4->machine.contextData;







 if (VAR_5 != ((void*)0)) {
  FUNC_0(&VAR_5->ss.uss, sizeof(VAR_5->ss.uss));
  FUNC_0(&VAR_5->ns.uns, sizeof(VAR_5->ns.uns));

  if (VAR_5->ns.nsh.flavor == VAR_0) {
   VAR_5->ns.ns_64.fpcr = VAR_1;
  } else {
   VAR_5->ns.ns_32.fpcr = VAR_2;
  }
 }

 VAR_4->machine.DebugData = ((void*)0);


 return VAR_3;
}
