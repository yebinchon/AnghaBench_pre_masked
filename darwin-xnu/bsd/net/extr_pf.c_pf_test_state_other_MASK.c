
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct pfi_kif {int dummy; } ;
struct pf_state_peer {scalar_t__ state; } ;
struct TYPE_25__ {scalar_t__ port; } ;
struct TYPE_15__ {int s_addr; } ;
struct TYPE_18__ {TYPE_10__ v4addr; } ;
struct TYPE_26__ {TYPE_7__ xport; TYPE_13__ addr; } ;
struct TYPE_23__ {scalar_t__ port; } ;
struct TYPE_24__ {TYPE_5__ xport; TYPE_13__ addr; } ;
struct TYPE_21__ {scalar_t__ port; } ;
struct TYPE_22__ {TYPE_3__ xport; TYPE_13__ addr; } ;
struct TYPE_19__ {scalar_t__ port; } ;
struct TYPE_20__ {TYPE_1__ xport; TYPE_13__ addr; } ;
struct pf_state_key_cmp {int af_gwy; int af_lan; TYPE_8__ ext_lan; TYPE_6__ lan; TYPE_4__ gwy; TYPE_2__ ext_gwy; int proto; scalar_t__ app_state; } ;
struct pf_state {TYPE_12__* state_key; int timeout; int expire; struct pf_state_peer src; struct pf_state_peer dst; } ;
struct pf_pdesc {int af; TYPE_13__* dst; int ip_sum; TYPE_13__* src; int proto; } ;
struct TYPE_27__ {TYPE_13__ addr; } ;
struct TYPE_16__ {TYPE_13__ addr; } ;
struct TYPE_17__ {int direction; TYPE_11__ lan; TYPE_9__ gwy; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_13__*,TYPE_13__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_12__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct pf_state **VAR_7, int VAR_8, struct pfi_kif *VAR_9,
    struct pf_pdesc *VAR_10)
{
 struct pf_state_peer *VAR_11, *VAR_12;
 struct pf_state_key_cmp VAR_13;

 VAR_13.app_state = 0;
 VAR_13.proto = VAR_10->proto;
 if (VAR_8 == VAR_4) {
  VAR_13.af_gwy = VAR_10->af;
  FUNC_0(&VAR_13.ext_gwy.addr, VAR_10->src, VAR_13.af_gwy);
  FUNC_0(&VAR_13.gwy.addr, VAR_10->dst, VAR_13.af_gwy);
  VAR_13.ext_gwy.xport.port = 0;
  VAR_13.gwy.xport.port = 0;
 } else {
  VAR_13.af_lan = VAR_10->af;
  FUNC_0(&VAR_13.lan.addr, VAR_10->src, VAR_13.af_lan);
  FUNC_0(&VAR_13.ext_lan.addr, VAR_10->dst, VAR_13.af_lan);
  VAR_13.lan.xport.port = 0;
  VAR_13.ext_lan.xport.port = 0;
 }

 FUNC_2();

 if (VAR_8 == (*VAR_7)->state_key->direction) {
  VAR_11 = &(*VAR_7)->src;
  VAR_12 = &(*VAR_7)->dst;
 } else {
  VAR_11 = &(*VAR_7)->dst;
  VAR_12 = &(*VAR_7)->src;
 }


 if (VAR_11->state < VAR_1)
  VAR_11->state = VAR_1;
 if (VAR_12->state == VAR_1)
  VAR_12->state = VAR_0;


 (*VAR_7)->expire = FUNC_4();
 if (VAR_11->state == VAR_0 && VAR_12->state == VAR_0)
  (*VAR_7)->timeout = VAR_2;
 else
  (*VAR_7)->timeout = VAR_3;


 if (FUNC_1((*VAR_7)->state_key)) {
  if (VAR_8 == VAR_5) {
   switch (VAR_10->af) {
   }
  } else {
   switch (VAR_10->af) {
   }
  }
 }

 return (VAR_6);
}
