
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ lock; scalar_t__ status; int cbarg; int (* cbfn ) (int ,scalar_t__) ;TYPE_1__* temp; } ;
struct bfa_diag_s {TYPE_2__ tsensor; } ;
struct TYPE_7__ {scalar_t__ temp; scalar_t__ ts_junc; scalar_t__ ts_brd; scalar_t__ status; scalar_t__ brd_temp; } ;
typedef TYPE_3__ bfi_diag_ts_rsp_t ;
struct TYPE_5__ {scalar_t__ ts_junc; scalar_t__ ts_brd; scalar_t__ status; void* brd_temp; void* temp; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bfa_diag_s*,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct bfa_diag_s *VAR_1, bfi_diag_ts_rsp_t *VAR_2)
{
 if (!VAR_1->tsensor.lock) {

  FUNC_1(VAR_1, VAR_1->tsensor.lock);
  return;
 }





 VAR_1->tsensor.temp->temp = FUNC_0(VAR_2->temp);
 VAR_1->tsensor.temp->ts_junc = VAR_2->ts_junc;
 VAR_1->tsensor.temp->ts_brd = VAR_2->ts_brd;

 if (VAR_2->ts_brd) {

  VAR_1->tsensor.temp->status = VAR_2->status;
  if (VAR_2->status == VAR_0) {
   VAR_1->tsensor.temp->brd_temp =
    FUNC_0(VAR_2->brd_temp);
  } else
   VAR_1->tsensor.temp->brd_temp = 0;
 }

 FUNC_1(VAR_1, VAR_2->status);
 FUNC_1(VAR_1, VAR_2->ts_junc);
 FUNC_1(VAR_1, VAR_2->temp);
 FUNC_1(VAR_1, VAR_2->ts_brd);
 FUNC_1(VAR_1, VAR_2->brd_temp);


 VAR_1->tsensor.status = VAR_0;
 VAR_1->tsensor.cbfn(VAR_1->tsensor.cbarg, VAR_1->tsensor.status);
 VAR_1->tsensor.lock = 0;
}
