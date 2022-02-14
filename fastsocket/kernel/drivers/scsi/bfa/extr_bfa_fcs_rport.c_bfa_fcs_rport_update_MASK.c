
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int bbcred; int rxsz; int cisc; } ;
struct TYPE_8__ {int rxsz; scalar_t__ class_valid; } ;
struct TYPE_7__ {scalar_t__ class_valid; } ;
struct fc_logi_s {TYPE_3__ csp; TYPE_2__ class3; TYPE_1__ class2; int node_name; int port_name; } ;
struct bfa_fcs_rport_s {scalar_t__ maxfrsize; int cisc; int fc_cos; int nwwn; int pwwn; TYPE_4__* port; } ;
struct TYPE_10__ {TYPE_6__* fabric; TYPE_5__* fcs; } ;
typedef TYPE_4__ bfa_fcs_lport_t ;
struct TYPE_12__ {scalar_t__ bb_credit; } ;
struct TYPE_11__ {int bfa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcs_rport_s *VAR_2, struct fc_logi_s *VAR_3)
{
 bfa_fcs_lport_t *VAR_4 = VAR_2->port;





 VAR_2->pwwn = VAR_3->port_name;
 VAR_2->nwwn = VAR_3->node_name;




 VAR_2->fc_cos = 0;
 if (VAR_3->class3.class_valid)
  VAR_2->fc_cos = VAR_1;

 if (VAR_3->class2.class_valid)
  VAR_2->fc_cos |= VAR_0;





 VAR_2->cisc = VAR_3->csp.cisc;
 if (FUNC_0(VAR_3->class3.rxsz) < FUNC_0(VAR_3->csp.rxsz))
  VAR_2->maxfrsize = FUNC_0(VAR_3->class3.rxsz);
 else
  VAR_2->maxfrsize = FUNC_0(VAR_3->csp.rxsz);

 FUNC_3(VAR_4->fcs, FUNC_0(VAR_3->csp.bbcred));
 FUNC_3(VAR_4->fcs, VAR_4->fabric->bb_credit);
 if ((!FUNC_2(VAR_4->fabric)) &&
  (FUNC_0(VAR_3->csp.bbcred) < VAR_4->fabric->bb_credit)) {

  FUNC_3(VAR_4->fcs, FUNC_0(VAR_3->csp.bbcred));
  FUNC_3(VAR_4->fcs, VAR_4->fabric->bb_credit);

  VAR_4->fabric->bb_credit = FUNC_0(VAR_3->csp.bbcred);
  FUNC_1(VAR_4->fcs->bfa,
       VAR_4->fabric->bb_credit);
 }

}
