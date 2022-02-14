
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int PLength; int * P; } ;
struct TYPE_7__ {int request_pending; scalar_t__* xbuffer; TYPE_2__ XData; TYPE_1__* pIdiLib; scalar_t__ request; } ;
typedef TYPE_3__ diva_maint_client_t ;
typedef int byte ;
struct TYPE_8__ {int XNum; TYPE_2__* X; scalar_t__ ReqCh; int Req; } ;
struct TYPE_5__ {int hLib; scalar_t__ (* DivaSTraceGetHandle ) (int ) ;} ;
typedef TYPE_4__ ENTITY ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1 (void* VAR_1) {
  diva_maint_client_t* VAR_2 = (diva_maint_client_t*)VAR_1;

  if (VAR_2 && VAR_2->pIdiLib && VAR_2->request) {
    ENTITY* VAR_3 = (ENTITY*)(*(VAR_2->pIdiLib->DivaSTraceGetHandle))(VAR_2->pIdiLib->hLib);

    VAR_3->XNum = 1;
    VAR_3->X = &VAR_2->XData;
    VAR_3->Req = VAR_0;
    VAR_3->ReqCh = 0;
    VAR_3->X->PLength = 1;
    VAR_3->X->P = (byte*)&VAR_2->xbuffer[0];
    VAR_2->xbuffer[0] = 0;

    VAR_2->request_pending = 1;

    return (0);
  }

  return (-1);
}
