
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t dword ;
typedef int diva_os_spin_lock_magic_t ;
typedef void* byte ;
struct TYPE_5__ {TYPE_1__* hDbg; } ;
struct TYPE_4__ {int dbgMask; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,int *,char*) ;

int FUNC_3 (dword VAR_2, byte* VAR_3) {
  diva_os_spin_lock_magic_t VAR_4;
  int VAR_5 = -1;

  if (!VAR_3 || !VAR_2 || (VAR_2 >= FUNC_0(VAR_0))) {
    return (-1);
  }
  FUNC_1 (&VAR_1, &VAR_4, "driver info");

  if (VAR_0[VAR_2].hDbg) {
    VAR_5 = 4;
    *VAR_3++= (byte)(VAR_0[VAR_2].hDbg->dbgMask);
    *VAR_3++= (byte)(VAR_0[VAR_2].hDbg->dbgMask >> 8);
    *VAR_3++= (byte)(VAR_0[VAR_2].hDbg->dbgMask >> 16);
    *VAR_3++= (byte)(VAR_0[VAR_2].hDbg->dbgMask >> 24);
  }

  FUNC_2 (&VAR_1, &VAR_4, "driver info");

  return (VAR_5);
}
