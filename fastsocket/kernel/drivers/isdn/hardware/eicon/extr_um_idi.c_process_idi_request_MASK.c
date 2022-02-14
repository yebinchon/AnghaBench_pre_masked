
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ word ;
typedef int dword ;
struct TYPE_16__ {int XNum; int RNum; int Rc; int * R; TYPE_3__* X; int * callback; scalar_t__ IndCh; scalar_t__ Ind; scalar_t__ RcCh; scalar_t__ ReqCh; scalar_t__ Id; scalar_t__ Req; } ;
struct TYPE_13__ {scalar_t__* P; scalar_t__ PLength; } ;
struct TYPE_14__ {int status; TYPE_7__ e; TYPE_2__* adapter; int rc_count; int RData; TYPE_3__ XData; } ;
typedef TYPE_4__ divas_um_idi_entity_t ;
struct TYPE_15__ {int type; scalar_t__ data_length; scalar_t__ ReqCh; scalar_t__ Req; } ;
typedef TYPE_5__ diva_um_idi_req_hdr_t ;
typedef scalar_t__ byte ;
struct TYPE_11__ {int (* request ) (TYPE_7__*) ;} ;
struct TYPE_12__ {int adapter_nr; TYPE_1__ d; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_4__*) ;
 int * VAR_9 ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_5(divas_um_idi_entity_t * VAR_10,
          const diva_um_idi_req_hdr_t * VAR_11)
{
 int VAR_12 = 0;
 byte VAR_13 = (byte) VAR_11->Req;
 dword VAR_14 = VAR_11->type & VAR_4;

 if (!VAR_10->e.Id || !VAR_10->e.callback) {
  if (VAR_13 != VAR_0) {
   FUNC_0(("A: A(%d) E(%08x) not assigned",
     VAR_10->adapter->adapter_nr, VAR_10));
   return (-1);
  } else {
   switch (VAR_14) {
   case 130:
    VAR_10->e.Id = VAR_6;
    FUNC_1(("A(%d) E(%08x) assign MAN",
      VAR_10->adapter->adapter_nr, VAR_10));
    break;

   case 128:
    VAR_10->e.Id = VAR_5;
    FUNC_1(("A(%d) E(%08x) assign SIG",
      VAR_10->adapter->adapter_nr, VAR_10));
    break;

   case 129:
    VAR_10->e.Id = VAR_7;
    FUNC_1(("A(%d) E(%08x) assign NET",
      VAR_10->adapter->adapter_nr, VAR_10));
    break;

   default:
    FUNC_0(("A: A(%d) E(%08x) unknown type=%08x",
      VAR_10->adapter->adapter_nr, VAR_10,
      VAR_14));
    return (-1);
   }
  }
  VAR_10->e.XNum = 1;
  VAR_10->e.RNum = 1;
  VAR_10->e.callback = VAR_9;
  VAR_10->e.X = &VAR_10->XData;
  VAR_10->e.R = &VAR_10->RData;
  VAR_12 = 1;
 }
 VAR_10->status |= VAR_3;
 VAR_10->e.Req = VAR_13;
 VAR_10->e.ReqCh = (byte) VAR_11->ReqCh;
 VAR_10->e.X->PLength = (word) VAR_11->data_length;
 VAR_10->e.X->P = (byte *) & VAR_11[1];

 FUNC_1(("A(%d) E(%08x) request(%02x-%02x-%02x (%d))",
   VAR_10->adapter->adapter_nr, VAR_10, VAR_10->e.Id, VAR_10->e.Req,
   VAR_10->e.ReqCh, VAR_10->e.X->PLength));

 VAR_10->rc_count++;

 if (VAR_10->adapter && VAR_10->adapter->d.request) {
  FUNC_2(VAR_10);
  (*(VAR_10->adapter->d.request)) (&VAR_10->e);
 }

 if (VAR_12) {
  if (VAR_10->e.Rc == VAR_8) {




   FUNC_0(("A: A(%d) E(%08x) XDI out of entities",
     VAR_10->adapter->adapter_nr, VAR_10));

   VAR_10->e.Id = 0;
   VAR_10->e.ReqCh = 0;
   VAR_10->e.RcCh = 0;
   VAR_10->e.Ind = 0;
   VAR_10->e.IndCh = 0;
   VAR_10->e.XNum = 0;
   VAR_10->e.RNum = 0;
   VAR_10->e.callback = ((void*)0);
   VAR_10->e.X = ((void*)0);
   VAR_10->e.R = ((void*)0);
   FUNC_4(VAR_10, VAR_1 | VAR_8);
   return (-2);
  } else {
   VAR_10->status |= VAR_2;
  }
 }

 return (0);
}
