
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t dword ;
typedef int diva_os_spin_lock_magic_t ;
struct TYPE_8__ {int last_dbgMask; int dbgMask; TYPE_2__* pIdiLib; int (* request ) (int *) ;scalar_t__ request_pending; TYPE_1__* hDbg; } ;
struct TYPE_7__ {int hLib; scalar_t__ (* DivaSTraceGetHandle ) (int ) ;} ;
struct TYPE_6__ {size_t dbgMask; } ;
typedef int ENTITY ;


 size_t FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,size_t) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6 (dword VAR_3, dword VAR_4) {
  diva_os_spin_lock_magic_t VAR_5, VAR_6;
  int VAR_7 = -1;


  if (!VAR_3 || (VAR_3 >= FUNC_0(VAR_0))) {
    return (-1);
  }

  FUNC_2 (&VAR_1, &VAR_6, "dbg mask");
  FUNC_2 (&VAR_2, &VAR_5, "dbg mask");

  if (VAR_0[VAR_3].hDbg) {
    dword VAR_8 = VAR_0[VAR_3].hDbg->dbgMask;
    VAR_4 &= 0x7fffffff;
    VAR_0[VAR_3].hDbg->dbgMask = VAR_4;
    VAR_0[VAR_3].last_dbgMask = (VAR_0[VAR_3].hDbg->dbgMask | VAR_0[VAR_3].dbgMask);
    VAR_7 = 4;
    FUNC_1 (&VAR_0[VAR_3], VAR_8);
  }


  FUNC_3 (&VAR_2, &VAR_5, "dbg mask");

  if (VAR_0[VAR_3].request_pending) {
    VAR_0[VAR_3].request_pending = 0;
    (*(VAR_0[VAR_3].request))((ENTITY*)(*(VAR_0[VAR_3].pIdiLib->DivaSTraceGetHandle))(VAR_0[VAR_3].pIdiLib->hLib));
  }

  FUNC_3 (&VAR_1, &VAR_6, "dbg mask");

  return (VAR_7);
}
