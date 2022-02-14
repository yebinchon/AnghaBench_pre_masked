
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int diva_os_spin_lock_magic_t ;
typedef int byte ;
struct TYPE_5__ {int dma_handle; int (* request ) (int *) ;TYPE_1__* pIdiLib; scalar_t__ request_pending; int * hDbg; int * pmem; } ;
struct TYPE_4__ {int (* DivaSTraceLibraryStop ) (TYPE_1__*) ;int hLib; scalar_t__ (* DivaSTraceGetHandle ) (int ) ;int (* DivaSTraceLibraryFinit ) (int ) ;} ;
typedef int ENTITY ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int (*) (int *),int) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9 (void) {
  diva_os_spin_lock_magic_t VAR_3, VAR_4;
  int VAR_5, VAR_6 = 0;
  byte * VAR_7;


  for (VAR_5 = 1; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
    VAR_7 = ((void*)0);

    FUNC_2 (&VAR_1, &VAR_4, "unload");
    FUNC_2 (&VAR_2, &VAR_3, "unload");

    if (VAR_0[VAR_5].hDbg && VAR_0[VAR_5].pIdiLib && VAR_0[VAR_5].request) {
      if ((*(VAR_0[VAR_5].pIdiLib->DivaSTraceLibraryStop))(VAR_0[VAR_5].pIdiLib) == 1) {



        if (VAR_0[VAR_5].pIdiLib) {
          (*(VAR_0[VAR_5].pIdiLib->DivaSTraceLibraryFinit))(VAR_0[VAR_5].pIdiLib->hLib);
          VAR_0[VAR_5].pIdiLib = ((void*)0);

          VAR_7 = VAR_0[VAR_5].pmem;
          VAR_0[VAR_5].pmem = ((void*)0);
        }
        VAR_0[VAR_5].hDbg = ((void*)0);
        VAR_0[VAR_5].request_pending = 0;

        if (VAR_0[VAR_5].dma_handle >= 0) {



          FUNC_1 (VAR_0[VAR_5].request, VAR_0[VAR_5].dma_handle);
          VAR_0[VAR_5].dma_handle = -1;
    }
        VAR_0[VAR_5].request = ((void*)0);
      } else {
        VAR_6 = -1;
      }
    }

    FUNC_4 (&VAR_2, &VAR_3, "unload");
    if (VAR_0[VAR_5].hDbg && VAR_0[VAR_5].pIdiLib && VAR_0[VAR_5].request && VAR_0[VAR_5].request_pending) {
      VAR_0[VAR_5].request_pending = 0;
      (*(VAR_0[VAR_5].request))((ENTITY*)(*(VAR_0[VAR_5].pIdiLib->DivaSTraceGetHandle))(VAR_0[VAR_5].pIdiLib->hLib));
      if (VAR_0[VAR_5].dma_handle >= 0) {
        FUNC_1 (VAR_0[VAR_5].request, VAR_0[VAR_5].dma_handle);
        VAR_0[VAR_5].dma_handle = -1;
      }
    }
    FUNC_4 (&VAR_1, &VAR_4, "unload");

    if (VAR_7) {
      FUNC_3 (0, VAR_7);
    }
  }

  return (VAR_6);
}
