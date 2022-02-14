
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t word ;
struct TYPE_8__ {size_t length; size_t value_length; size_t type; } ;
typedef TYPE_3__ diva_man_var_header_t ;
struct TYPE_9__ {int request_pending; int * xbuffer; TYPE_1__* pIdiLib; scalar_t__ request; } ;
typedef TYPE_4__ diva_maint_client_t ;
typedef size_t byte ;
struct TYPE_10__ {TYPE_2__* X; scalar_t__ ReqCh; int Req; } ;
struct TYPE_7__ {size_t PLength; size_t* P; } ;
struct TYPE_6__ {int hLib; scalar_t__ (* DivaSTraceGetHandle ) (int ) ;} ;
typedef TYPE_5__ ENTITY ;


 int VAR_0 ;
 size_t FUNC_0 (size_t*,char const*) ;
 int FUNC_1 (int *,void*,size_t) ;
 int FUNC_2 (size_t*,size_t*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4 (void* VAR_1,
                        byte* VAR_2,
                        const char* VAR_3,
                        void* VAR_4,
                        byte VAR_5,
                        byte VAR_6) {
  diva_maint_client_t* VAR_7 = (diva_maint_client_t*)VAR_1;

  if (VAR_7 && VAR_7->pIdiLib && VAR_7->request) {
    ENTITY* VAR_8 = (ENTITY*)(*(VAR_7->pIdiLib->DivaSTraceGetHandle))(VAR_7->pIdiLib->hLib);
    diva_man_var_header_t* VAR_9 = (diva_man_var_header_t*)&VAR_7->xbuffer[0];
    word VAR_10 = FUNC_0 ((byte*)VAR_9, VAR_3);

    FUNC_1 (&VAR_7->xbuffer[VAR_10], VAR_4, VAR_6);
    VAR_10 += VAR_6;
    VAR_9->length += VAR_6;
    VAR_9->value_length = VAR_6;
    VAR_9->type = VAR_5;
    FUNC_2 ((byte*)VAR_9, &VAR_10, 0);

    VAR_8->Req = VAR_0;
    VAR_8->ReqCh = 0;
    VAR_8->X->PLength = VAR_10;
    VAR_8->X->P = (byte*)VAR_9;

    VAR_7->request_pending = 1;

    return (0);
  }

  return (-1);
}
