
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int word ;
struct TYPE_7__ {int request_pending; int * xbuffer; TYPE_1__* pIdiLib; scalar_t__ request; } ;
typedef TYPE_3__ diva_maint_client_t ;
typedef int byte ;
struct TYPE_8__ {TYPE_2__* X; scalar_t__ ReqCh; int Req; } ;
struct TYPE_6__ {int * P; int PLength; } ;
struct TYPE_5__ {int hLib; scalar_t__ (* DivaSTraceGetHandle ) (int ) ;} ;
typedef TYPE_4__ ENTITY ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(void* VAR_1, const char* VAR_2, byte* VAR_3) {
  diva_maint_client_t* VAR_4 = (diva_maint_client_t*)VAR_1;

  if (VAR_4 && VAR_4->pIdiLib && VAR_4->request) {
    ENTITY* VAR_5 = (ENTITY*)(*(VAR_4->pIdiLib->DivaSTraceGetHandle))(VAR_4->pIdiLib->hLib);
    byte* VAR_6 = (byte*)&VAR_4->xbuffer[0];
    char VAR_7 = 0;
    word VAR_8;

    if (!FUNC_2(VAR_2, "\\")) {
      VAR_2 = &VAR_7;
    }
    VAR_8 = FUNC_0 (VAR_6, VAR_2);
    FUNC_1 (VAR_6, &VAR_8, 0);
    VAR_5->Req = VAR_0;
    VAR_5->ReqCh = 0;
    VAR_5->X->PLength = VAR_8;
    VAR_5->X->P = (byte*)VAR_6;

    VAR_4->request_pending = 1;

    return (0);
  }

  return (-1);
}
