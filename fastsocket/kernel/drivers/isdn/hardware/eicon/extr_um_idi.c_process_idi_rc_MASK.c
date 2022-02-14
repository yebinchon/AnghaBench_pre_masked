
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Req; scalar_t__ RNum; scalar_t__ XNum; int * R; int * X; scalar_t__ IndCh; scalar_t__ Ind; scalar_t__ RcCh; scalar_t__ Rc; scalar_t__ ReqCh; scalar_t__ Id; int * callback; } ;
struct TYPE_8__ {int status; TYPE_2__* adapter; TYPE_1__ e; scalar_t__ rc_count; } ;
typedef TYPE_3__ divas_um_idi_entity_t ;
typedef int byte ;
struct TYPE_7__ {int adapter_nr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_3(divas_um_idi_entity_t * VAR_3, byte VAR_4)
{
 FUNC_1(("A(%d) E(%08x) rc(%02x-%02x-%02x)",
   VAR_3->adapter->adapter_nr, VAR_3, VAR_3->e.Id, VAR_4, VAR_3->e.RcCh));

 if (VAR_3->status & VAR_1) {
  VAR_3->status &= ~VAR_1;
  if (VAR_4 != VAR_0) {
   FUNC_0(("A: A(%d) E(%08x) ASSIGN failed",
     VAR_3->adapter->adapter_nr, VAR_3));
   VAR_3->e.callback = ((void*)0);
   VAR_3->e.Id = 0;
   VAR_3->e.Req = 0;
   VAR_3->e.ReqCh = 0;
   VAR_3->e.Rc = 0;
   VAR_3->e.RcCh = 0;
   VAR_3->e.Ind = 0;
   VAR_3->e.IndCh = 0;
   VAR_3->e.X = ((void*)0);
   VAR_3->e.R = ((void*)0);
   VAR_3->e.XNum = 0;
   VAR_3->e.RNum = 0;
  }
 }
 if ((VAR_3->e.Req == VAR_2) && VAR_3->e.Id && (VAR_4 == 0xff)) {
  FUNC_0(("A: A(%d) E(%08x)  discard OK in REMOVE",
    VAR_3->adapter->adapter_nr, VAR_3));
  return (0);
 }
 if ((VAR_3->e.Req == VAR_2) && (!VAR_3->e.Id)) {
  VAR_3->e.callback = ((void*)0);
  VAR_3->e.Id = 0;
  VAR_3->e.Req = 0;
  VAR_3->e.ReqCh = 0;
  VAR_3->e.Rc = 0;
  VAR_3->e.RcCh = 0;
  VAR_3->e.Ind = 0;
  VAR_3->e.IndCh = 0;
  VAR_3->e.X = ((void*)0);
  VAR_3->e.R = ((void*)0);
  VAR_3->e.XNum = 0;
  VAR_3->e.RNum = 0;
  VAR_3->rc_count = 0;
 }
 if ((VAR_3->e.Req == VAR_2) && (VAR_4 != 0xff)) {
  FUNC_0(("A: A(%d) E(%08x)  REMOVE FAILED",
    VAR_3->adapter->adapter_nr, VAR_3));
 }
 FUNC_2(VAR_3, VAR_4);

 return (1);
}
