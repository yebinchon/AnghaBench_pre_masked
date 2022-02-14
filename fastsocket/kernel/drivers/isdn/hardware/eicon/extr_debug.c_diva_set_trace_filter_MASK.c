
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int diva_os_spin_lock_magic_t ;
struct TYPE_7__ {int channels; TYPE_2__* pIdiLib; int (* request ) (int *) ;scalar_t__ request_pending; TYPE_1__* hDbg; } ;
struct TYPE_6__ {int hLib; scalar_t__ (* DivaSTraceGetHandle ) (int ) ;int (* DivaSTraceSetAudioTap ) (int ,int,int) ;int (* DivaSTraceSetBChannel ) (int ,int,int) ;} ;
struct TYPE_5__ {int dbgMask; } ;
typedef int ENTITY ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8 (int VAR_9, const char* VAR_10) {
  diva_os_spin_lock_magic_t VAR_11, VAR_12;
  int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

  FUNC_1 (&VAR_7, &VAR_12, "dbg mask");
  FUNC_1 (&VAR_8, &VAR_11, "write_filter");

  if (VAR_9 <= VAR_0) {
    FUNC_3 (&VAR_3[0], VAR_10, VAR_9);
    if (VAR_3[VAR_9]) {
      VAR_3[VAR_9] = 0;
    }
    if (VAR_3[0] == '*') {
      VAR_3[0] = 0;
    }
  } else {
    VAR_9 = -1;
  }

  VAR_5 = -1;
  VAR_4 = -1;

  VAR_15 = (VAR_3[0] == 0);

  for (VAR_13 = 1; VAR_13 < FUNC_0(VAR_6); VAR_13++) {
    if (VAR_6[VAR_13].hDbg && VAR_6[VAR_13].pIdiLib && VAR_6[VAR_13].request) {
      VAR_16 = VAR_15 && ((VAR_6[VAR_13].hDbg->dbgMask & VAR_2) != 0);
      VAR_17 = VAR_15 && ((VAR_6[VAR_13].hDbg->dbgMask & VAR_1) != 0);
      for (VAR_14 = 0; VAR_14 < VAR_6[VAR_13].channels; VAR_14++) {
        (*(VAR_6[VAR_13].pIdiLib->DivaSTraceSetBChannel))(VAR_6[VAR_13].pIdiLib->hLib, VAR_14+1, VAR_16);
        (*(VAR_6[VAR_13].pIdiLib->DivaSTraceSetAudioTap))(VAR_6[VAR_13].pIdiLib->hLib, VAR_14+1, VAR_17);
      }
    }
  }

  for (VAR_13 = 1; VAR_13 < FUNC_0(VAR_6); VAR_13++) {
    if (VAR_6[VAR_13].hDbg && VAR_6[VAR_13].pIdiLib && VAR_6[VAR_13].request && VAR_6[VAR_13].request_pending) {
      FUNC_2 (&VAR_8, &VAR_11, "write_filter");
      VAR_6[VAR_13].request_pending = 0;
      (*(VAR_6[VAR_13].request))((ENTITY*)(*(VAR_6[VAR_13].pIdiLib->DivaSTraceGetHandle))(VAR_6[VAR_13].pIdiLib->hLib));
      FUNC_1 (&VAR_8, &VAR_11, "write_filter");
    }
  }

  FUNC_2 (&VAR_8, &VAR_11, "write_filter");
  FUNC_2 (&VAR_7, &VAR_12, "dbg mask");

  return (VAR_9);
}
