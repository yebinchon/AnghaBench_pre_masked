
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_17__ ;
typedef struct TYPE_25__ TYPE_16__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct pfi_kif {int dummy; } ;
struct pf_state_peer {scalar_t__ state; } ;
struct TYPE_32__ {int call_id; } ;
struct TYPE_23__ {int s_addr; } ;
struct TYPE_26__ {TYPE_14__ v4addr; } ;
struct TYPE_33__ {TYPE_6__ xport; TYPE_17__ addr; } ;
struct TYPE_31__ {TYPE_17__ addr; } ;
struct TYPE_29__ {int call_id; } ;
struct TYPE_30__ {TYPE_3__ xport; TYPE_17__ addr; } ;
struct TYPE_28__ {TYPE_17__ addr; } ;
struct pf_state_key_cmp {int af_gwy; int af_lan; TYPE_7__ ext_lan; TYPE_5__ lan; TYPE_4__ gwy; TYPE_2__ ext_gwy; int proto_variant; int proto; scalar_t__ app_state; } ;
struct pf_state {scalar_t__ timeout; TYPE_16__* state_key; void* expire; struct pf_state_peer src; struct pf_state_peer dst; } ;
struct TYPE_27__ {struct pf_grev1_hdr* grev1; } ;
struct pf_pdesc {int af; int mp; TYPE_17__* dst; int ip_sum; TYPE_17__* src; TYPE_1__ hdr; } ;
struct pf_grev1_hdr {int call_id; } ;
struct TYPE_35__ {TYPE_8__* pptp_state; } ;
struct TYPE_34__ {void* expire; } ;
struct TYPE_22__ {int call_id; } ;
struct TYPE_24__ {TYPE_17__ addr; TYPE_13__ xport; } ;
struct TYPE_21__ {TYPE_17__ addr; } ;
struct TYPE_25__ {int direction; TYPE_15__ lan; TYPE_12__ gwy; TYPE_11__* app_state; } ;
struct TYPE_19__ {TYPE_9__ grev1; } ;
struct TYPE_20__ {TYPE_10__ u; } ;




 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_17__*,TYPE_17__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (TYPE_16__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int,struct pf_grev1_hdr*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int * FUNC_5 (struct pf_pdesc*,int ,int) ;
 void* FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(struct pf_state **VAR_11, int VAR_12,
    struct pfi_kif *VAR_13, int VAR_14, struct pf_pdesc *VAR_15)
{
 struct pf_state_peer *VAR_16;
 struct pf_state_peer *VAR_17;
 struct pf_state_key_cmp VAR_18;
 struct pf_grev1_hdr *VAR_19 = VAR_15->hdr.grev1;

 VAR_18.app_state = 0;
 VAR_18.proto = VAR_0;
 VAR_18.proto_variant = VAR_7;
 if (VAR_12 == VAR_8) {
  VAR_18.af_gwy = VAR_15->af;
  FUNC_0(&VAR_18.ext_gwy.addr, VAR_15->src, VAR_18.af_gwy);
  FUNC_0(&VAR_18.gwy.addr, VAR_15->dst, VAR_18.af_gwy);
  VAR_18.gwy.xport.call_id = VAR_19->call_id;
 } else {
  VAR_18.af_lan = VAR_15->af;
  FUNC_0(&VAR_18.lan.addr, VAR_15->src, VAR_18.af_lan);
  FUNC_0(&VAR_18.ext_lan.addr, VAR_15->dst, VAR_18.af_lan);
  VAR_18.ext_lan.xport.call_id = VAR_19->call_id;
 }

 FUNC_2();

 if (VAR_12 == (*VAR_11)->state_key->direction) {
  VAR_16 = &(*VAR_11)->src;
  VAR_17 = &(*VAR_11)->dst;
 } else {
  VAR_16 = &(*VAR_11)->dst;
  VAR_17 = &(*VAR_11)->src;
 }


 if (VAR_16->state < VAR_2)
  VAR_16->state = VAR_2;


 (*VAR_11)->expire = FUNC_6();
 if (VAR_16->state >= VAR_2 &&
     VAR_17->state >= VAR_2) {
  if ((*VAR_11)->timeout != VAR_5)
   (*VAR_11)->timeout = VAR_3;
  VAR_16->state = VAR_1;
  VAR_17->state = VAR_1;
 } else {
  (*VAR_11)->timeout = VAR_4;
 }

 if ((*VAR_11)->state_key->app_state)
  (*VAR_11)->state_key->app_state->u.grev1.pptp_state->expire =
      FUNC_6();


 if (FUNC_1((*VAR_11)->state_key)) {
  if (VAR_12 == VAR_9) {
   switch (VAR_15->af) {
   }
  } else {
   VAR_19->call_id = (*VAR_11)->state_key->lan.xport.call_id;

   switch (VAR_15->af) {
   }
  }

  if (FUNC_5(VAR_15, VAR_15->mp, VAR_14 + sizeof (*VAR_19)) ==
      ((void*)0))
   return (VAR_6);
  FUNC_3(VAR_15->mp, VAR_14, sizeof (*VAR_19), VAR_19);
 }

 return (VAR_10);
}
