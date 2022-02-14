
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct bfi_diag_fwping_rsp_s {scalar_t__ data; scalar_t__ dma_status; } ;
struct TYPE_4__ {int count; scalar_t__ data; scalar_t__ lock; void* status; int cbarg; int (* cbfn ) (int ,void*) ;TYPE_1__* result; scalar_t__ dbuf_kva; } ;
struct bfa_diag_s {TYPE_2__ fwping; } ;
struct TYPE_3__ {void* dmastatus; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bfa_diag_s*,scalar_t__) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int ,void*) ;

__attribute__((used)) static void
FUNC_5(struct bfa_diag_s *VAR_4,
   struct bfi_diag_fwping_rsp_s *VAR_5)
{
 u32 VAR_6 = VAR_5->data;
 u8 VAR_7 = VAR_5->dma_status;

 FUNC_0(VAR_4, VAR_6);
 FUNC_0(VAR_4, VAR_7);

 if (VAR_7 == VAR_2) {
  u32 VAR_8, VAR_9;
  VAR_9 = (VAR_4->fwping.count & 0x1) ? ~(VAR_4->fwping.data) :
   VAR_4->fwping.data;

  if (VAR_4->fwping.data != VAR_6) {
   FUNC_0(VAR_4, VAR_6);
   VAR_4->fwping.result->dmastatus =
     VAR_0;
   VAR_4->fwping.status = VAR_0;
   VAR_4->fwping.cbfn(VAR_4->fwping.cbarg,
     VAR_4->fwping.status);
   VAR_4->fwping.lock = 0;
   return;
  }

  for (VAR_8 = 0; VAR_8 < (VAR_3 >> 2); VAR_8++) {
   if (*((u32 *)VAR_4->fwping.dbuf_kva + VAR_8) != VAR_9) {
    FUNC_0(VAR_4, VAR_8);
    FUNC_0(VAR_4, VAR_9);
    FUNC_0(VAR_4,
     *((u32 *)VAR_4->fwping.dbuf_kva + VAR_8));
    VAR_4->fwping.result->dmastatus =
      VAR_0;
    VAR_4->fwping.status = VAR_0;
    VAR_4->fwping.cbfn(VAR_4->fwping.cbarg,
      VAR_4->fwping.status);
    VAR_4->fwping.lock = 0;
    return;
   }
  }
  VAR_4->fwping.result->dmastatus = VAR_2;
  VAR_4->fwping.status = VAR_2;
  VAR_4->fwping.cbfn(VAR_4->fwping.cbarg, VAR_4->fwping.status);
  VAR_4->fwping.lock = 0;
 } else {
  VAR_4->fwping.status = VAR_1;
  VAR_4->fwping.cbfn(VAR_4->fwping.cbarg, VAR_4->fwping.status);
  VAR_4->fwping.lock = 0;
 }
}
