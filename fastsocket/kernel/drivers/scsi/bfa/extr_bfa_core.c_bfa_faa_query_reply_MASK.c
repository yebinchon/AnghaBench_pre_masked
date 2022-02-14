
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* faa_cbfn ) (void*,int ) ;void* faa_cbarg; } ;
struct TYPE_7__ {int busy; TYPE_3__ faa_cb; TYPE_1__* faa_attr; } ;
struct bfa_iocfc_s {TYPE_2__ faa_args; } ;
struct TYPE_9__ {int addr_source; int faa_status; int faa; } ;
typedef TYPE_4__ bfi_faa_query_rsp_t ;
struct TYPE_6__ {int pwwn_source; int faa_state; int faa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_iocfc_s *VAR_2,
  bfi_faa_query_rsp_t *VAR_3)
{
 void *VAR_4 = VAR_2->faa_args.faa_cb.faa_cbarg;

 if (VAR_2->faa_args.faa_attr) {
  VAR_2->faa_args.faa_attr->faa = VAR_3->faa;
  VAR_2->faa_args.faa_attr->faa_state = VAR_3->faa_status;
  VAR_2->faa_args.faa_attr->pwwn_source = VAR_3->addr_source;
 }

 FUNC_0(!VAR_2->faa_args.faa_cb.faa_cbfn);

 VAR_2->faa_args.faa_cb.faa_cbfn(VAR_4, VAR_1);
 VAR_2->faa_args.busy = VAR_0;
}
