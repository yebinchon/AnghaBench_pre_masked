
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int word ;
typedef TYPE_2__* pDbgHandle ;
typedef void* dword ;
typedef int diva_os_spin_lock_magic_t ;
struct TYPE_11__ {int data_length; scalar_t__ di_cpu; scalar_t__ drv_id; int dli; int facility; void* time_usec; void* time_sec; scalar_t__ sequence; } ;
typedef TYPE_3__ diva_dbg_entry_head_t ;
typedef int byte ;
struct TYPE_12__ {int * pmem; TYPE_1__* pIdiLib; TYPE_2__* hDbg; } ;
struct TYPE_10__ {int id; scalar_t__ Version; char* drvName; int * next; scalar_t__ Registered; int * dbg_old; int * dbg_irq; int * dbg_prt; int * dbg_end; scalar_t__ dbgMask; } ;
struct TYPE_9__ {int hLib; int (* DivaSTraceLibraryFinit ) (int ) ;} ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (void**,void**) ;
 int FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (TYPE_3__*,char*,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (char*,char*,int,char*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13 (pDbgHandle VAR_7) {
  diva_os_spin_lock_magic_t VAR_8, VAR_9;
  dword VAR_10, VAR_11;
  int VAR_12;
  word VAR_13;
  byte* VAR_14 = ((void*)0);

  FUNC_4 (&VAR_10, &VAR_11);

  FUNC_2 (&VAR_3, &VAR_9, "read");
  FUNC_2 (&VAR_4, &VAR_8, "read");

  for (VAR_12 = 1; VAR_12 < FUNC_0(VAR_2); VAR_12++) {
    if (VAR_2[VAR_12].hDbg == VAR_7) {
      diva_dbg_entry_head_t* VAR_15;
      char VAR_16[256];
      int VAR_17;

      VAR_2[VAR_12].hDbg = ((void*)0);

      VAR_7->id = -1;
      VAR_7->dbgMask = 0;
      VAR_7->dbg_end = ((void*)0);
      VAR_7->dbg_prt = ((void*)0);
      VAR_7->dbg_irq = ((void*)0);
      if (VAR_7->Version > 0)
        VAR_7->dbg_old = ((void*)0);
      VAR_7->Registered = 0;
      VAR_7->next = ((void*)0);

      if (VAR_2[VAR_12].pIdiLib) {
        (*(VAR_2[VAR_12].pIdiLib->DivaSTraceLibraryFinit))(VAR_2[VAR_12].pIdiLib->hLib);
        VAR_2[VAR_12].pIdiLib = ((void*)0);

        VAR_14 = VAR_2[VAR_12].pmem;
        VAR_2[VAR_12].pmem = ((void*)0);
      }




      VAR_17 = FUNC_11 (VAR_16, "DIMAINT - drv # %d = '%s' de-registered",
                     VAR_12, VAR_7->drvName);

      while (!(VAR_15 = (diva_dbg_entry_head_t*)FUNC_7 (VAR_5,
                                        (word)(VAR_17+1+sizeof(*VAR_15))))) {
        if ((VAR_15 = (diva_dbg_entry_head_t*)FUNC_10 (VAR_5, &VAR_13))) {
          FUNC_9 (VAR_5);
        } else {
          break;
        }
      }

      if (VAR_15) {
        VAR_15->sequence = VAR_6++;
        VAR_15->time_sec = VAR_10;
        VAR_15->time_usec = VAR_11;
        VAR_15->facility = VAR_1;
        VAR_15->dli = VAR_0;
        VAR_15->drv_id = 0;
        VAR_15->di_cpu = 0;
        VAR_15->data_length = VAR_17+1;

        FUNC_6 (&VAR_15[1], VAR_16, VAR_17+1);
      FUNC_8 (VAR_15);
        FUNC_1();
      }

      break;
    }
  }

  FUNC_5 (&VAR_4, &VAR_8, "read_ack");
  FUNC_5 (&VAR_3, &VAR_9, "read_ack");

  if (VAR_14) {
    FUNC_3 (0, VAR_14);
  }
}
