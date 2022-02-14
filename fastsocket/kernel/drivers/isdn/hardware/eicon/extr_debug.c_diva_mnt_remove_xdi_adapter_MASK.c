
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int word ;
typedef void* dword ;
typedef int diva_os_spin_lock_magic_t ;
struct TYPE_11__ {int data_length; scalar_t__ di_cpu; scalar_t__ drv_id; int dli; int facility; void* time_usec; void* time_sec; scalar_t__ sequence; } ;
typedef TYPE_2__ diva_dbg_entry_head_t ;
typedef int byte ;
struct TYPE_13__ {char* drvName; } ;
struct TYPE_14__ {int dma_handle; TYPE_5__ Dbg; int * request; scalar_t__ request_pending; int * hDbg; int * pmem; TYPE_1__* pIdiLib; } ;
struct TYPE_12__ {int * request; } ;
struct TYPE_10__ {int hLib; int (* DivaSTraceLibraryFinit ) (int ) ;} ;
typedef TYPE_3__ DESCRIPTOR ;


 int FUNC_0 (TYPE_8__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (void**,void**) ;
 int FUNC_6 (int *,int *,char*) ;
 int FUNC_7 (TYPE_2__*,char*,int) ;
 int FUNC_8 (TYPE_5__*,int,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (char*,char*,int,char*) ;
 int FUNC_14 (int ) ;

void FUNC_15 (const DESCRIPTOR* VAR_7) {
  diva_os_spin_lock_magic_t VAR_8, VAR_9;
  dword VAR_10, VAR_11;
  int VAR_12;
  word VAR_13;
  byte* VAR_14 = ((void*)0);

  FUNC_5 (&VAR_10, &VAR_11);

  FUNC_3 (&VAR_3, &VAR_9, "read");
  FUNC_3 (&VAR_4, &VAR_8, "read");

  for (VAR_12 = 1; VAR_12 < FUNC_0(VAR_2); VAR_12++) {
    if (VAR_2[VAR_12].hDbg && (VAR_2[VAR_12].request == VAR_7->request)) {
      diva_dbg_entry_head_t* VAR_15;
      char VAR_16[256];
      int VAR_17;

      if (VAR_2[VAR_12].pIdiLib) {
        (*(VAR_2[VAR_12].pIdiLib->DivaSTraceLibraryFinit))(VAR_2[VAR_12].pIdiLib->hLib);
        VAR_2[VAR_12].pIdiLib = ((void*)0);

        VAR_14 = VAR_2[VAR_12].pmem;
        VAR_2[VAR_12].pmem = ((void*)0);
      }

      VAR_2[VAR_12].hDbg = ((void*)0);
      VAR_2[VAR_12].request_pending = 0;
      if (VAR_2[VAR_12].dma_handle >= 0) {



        FUNC_1 (VAR_2[VAR_12].request, VAR_2[VAR_12].dma_handle);
        VAR_2[VAR_12].dma_handle = -1;
      }
      VAR_2[VAR_12].request = ((void*)0);




      VAR_17 = FUNC_13 (VAR_16, "DIMAINT - drv # %d = '%s' de-registered",
                     VAR_12, VAR_2[VAR_12].Dbg.drvName);

      FUNC_8 (&VAR_2[VAR_12].Dbg, 0x00, sizeof(VAR_2[VAR_12].Dbg));

      while (!(VAR_15 = (diva_dbg_entry_head_t*)FUNC_9 (VAR_5,
                                        (word)(VAR_17+1+sizeof(*VAR_15))))) {
        if ((VAR_15 = (diva_dbg_entry_head_t*)FUNC_12 (VAR_5, &VAR_13))) {
          FUNC_11 (VAR_5);
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

        FUNC_7 (&VAR_15[1], VAR_16, VAR_17+1);
      FUNC_10 (VAR_15);
        FUNC_2();
      }

      break;
    }
  }

  FUNC_6 (&VAR_4, &VAR_8, "read_ack");
  FUNC_6 (&VAR_3, &VAR_9, "read_ack");

  if (VAR_14) {
    FUNC_4 (0, VAR_14);
  }
}
