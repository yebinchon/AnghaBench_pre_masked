
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int dword ;
struct TYPE_9__ {int channels; TYPE_3__* pIdiLib; TYPE_1__* hDbg; scalar_t__ request; } ;
typedef TYPE_2__ diva_maint_client_t ;
struct TYPE_10__ {int (* DivaSTraceSetAudioTap ) (TYPE_3__*,int,int) ;int (* DivaSTraceSetBChannel ) (TYPE_3__*,int,int) ;int (* DivaSTraceSetDChannel ) (TYPE_3__*,int) ;int (* DivaSTraceSetInfo ) (TYPE_3__*,int) ;} ;
struct TYPE_8__ {int dbgMask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 int FUNC_3 (TYPE_3__*,int,int) ;

__attribute__((used)) static void FUNC_4 (diva_maint_client_t* VAR_5, dword VAR_6) {
  if (VAR_5->request && VAR_5->hDbg && VAR_5->pIdiLib) {
    dword VAR_7 = VAR_5->hDbg->dbgMask ^ VAR_6;

    if (VAR_7 & VAR_3) {
      (*(VAR_5->pIdiLib->DivaSTraceSetInfo))(VAR_5->pIdiLib,
                                          (VAR_5->hDbg->dbgMask & VAR_3) != 0);
    }
    if (VAR_7 & VAR_0) {
      (*(VAR_5->pIdiLib->DivaSTraceSetDChannel))(VAR_5->pIdiLib,
                                              (VAR_5->hDbg->dbgMask & VAR_0) != 0);
    }
    if (!VAR_4[0]) {
      if (VAR_7 & VAR_2) {
        int VAR_8, VAR_9 = ((VAR_5->hDbg->dbgMask & VAR_2) != 0);

        for (VAR_8 = 0; VAR_8 < VAR_5->channels; VAR_8++) {
          (*(VAR_5->pIdiLib->DivaSTraceSetBChannel))(VAR_5->pIdiLib, VAR_8+1, VAR_9);
        }
      }
      if (VAR_7 & VAR_1) {
        int VAR_10, VAR_11 = ((VAR_5->hDbg->dbgMask & VAR_1) != 0);

        for (VAR_10 = 0; VAR_10 < VAR_5->channels; VAR_10++) {
          (*(VAR_5->pIdiLib->DivaSTraceSetAudioTap))(VAR_5->pIdiLib, VAR_10+1, VAR_11);
        }
      }
    }
  }
}
