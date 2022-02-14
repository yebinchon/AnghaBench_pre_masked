
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct pfi_kif {int dummy; } ;
struct pf_state_peer {scalar_t__ state; } ;
struct TYPE_19__ {scalar_t__ spi; } ;
struct TYPE_25__ {int s_addr; } ;
struct TYPE_24__ {TYPE_1__ v4addr; } ;
struct TYPE_20__ {TYPE_11__ xport; TYPE_16__ addr; } ;
struct TYPE_29__ {scalar_t__ spi; } ;
struct TYPE_30__ {TYPE_5__ xport; TYPE_16__ addr; } ;
struct TYPE_28__ {TYPE_16__ addr; } ;
struct TYPE_27__ {TYPE_16__ addr; } ;
struct pf_state_key_cmp {int af_gwy; int af_lan; TYPE_12__ ext_lan; TYPE_6__ gwy; TYPE_4__ lan; TYPE_3__ ext_gwy; int proto; } ;
struct TYPE_31__ {scalar_t__ spi; } ;
struct TYPE_32__ {TYPE_16__ addr; TYPE_7__ xport; } ;
struct TYPE_33__ {scalar_t__ spi; } ;
struct TYPE_18__ {TYPE_16__ addr; TYPE_9__ xport; } ;
struct TYPE_21__ {scalar_t__ spi; } ;
struct TYPE_22__ {TYPE_13__ xport; } ;
struct pf_state_key {scalar_t__ flowhash; int direction; TYPE_8__ lan; TYPE_10__ gwy; int flowsrc; TYPE_14__ ext_lan; } ;
struct pf_state {scalar_t__ creatorid; struct pf_state_key* state_key; int timeout; int expire; struct pf_state_peer src; struct pf_state_peer dst; int unlink_hooks; } ;
struct TYPE_26__ {struct pf_esp_hdr* esp; } ;
struct pf_pdesc {int af; int pktflags; scalar_t__ flowhash; TYPE_16__* dst; int ip_sum; TYPE_16__* src; int flowsrc; TYPE_2__ hdr; } ;
struct pf_esp_hdr {scalar_t__ spi; } ;
typedef int key ;
struct TYPE_23__ {scalar_t__ hostid; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_16__*,TYPE_16__*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int ,int *,struct pf_state_key*) ;
 int FUNC_2 (int ,int *,struct pf_state_key*) ;
 scalar_t__ FUNC_3 (struct pf_state_key*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct pf_state_key_cmp*,int ,int) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (struct pf_state*,int ) ;
 struct pf_state* FUNC_8 (struct pfi_kif*,struct pf_state_key_cmp*,int) ;
 int FUNC_9 (struct pf_state*) ;
 int FUNC_10 (struct pf_state*) ;
 scalar_t__ FUNC_11 (struct pf_state**,struct pfi_kif*,int,int*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_15__ VAR_20 ;
 int FUNC_12 () ;
 int FUNC_13 (struct pf_state*) ;

__attribute__((used)) static int
FUNC_14(struct pf_state **VAR_21, int VAR_22, struct pfi_kif *VAR_23,
    int VAR_24, struct pf_pdesc *VAR_25)
{
#pragma unused(off)
 struct pf_state_peer *VAR_26;
 struct pf_state_peer *VAR_27;
 struct pf_state_key_cmp VAR_28;
 struct pf_esp_hdr *VAR_29 = VAR_25->hdr.esp;
 int VAR_30;

 FUNC_5(&VAR_28, 0, sizeof (VAR_28));
 VAR_28.proto = VAR_2;
 if (VAR_22 == VAR_11) {
  VAR_28.af_gwy = VAR_25->af;
  FUNC_0(&VAR_28.ext_gwy.addr, VAR_25->src, VAR_28.af_gwy);
  FUNC_0(&VAR_28.gwy.addr, VAR_25->dst, VAR_28.af_gwy);
  VAR_28.gwy.xport.spi = VAR_29->spi;
 } else {
  VAR_28.af_lan = VAR_25->af;
  FUNC_0(&VAR_28.lan.addr, VAR_25->src, VAR_28.af_lan);
  FUNC_0(&VAR_28.ext_lan.addr, VAR_25->dst, VAR_28.af_lan);
  VAR_28.ext_lan.xport.spi = VAR_29->spi;
 }

 *VAR_21 = FUNC_8(VAR_23, &VAR_28, VAR_22);

 if (*VAR_21 == 0) {
  struct pf_state *VAR_31;







  if (VAR_22 == VAR_11) {
   VAR_28.gwy.xport.spi = 0;

   VAR_31 = FUNC_8(VAR_23, &VAR_28, VAR_22);
   if (VAR_31) {
    struct pf_state_key *VAR_32 = VAR_31->state_key;

    FUNC_2(VAR_16,
        &VAR_18, VAR_32);
    VAR_32->lan.xport.spi = VAR_32->gwy.xport.spi =
        VAR_29->spi;

    if (FUNC_1(VAR_16,
        &VAR_18, VAR_32))
     FUNC_7(VAR_31, VAR_9);
    else
     *VAR_21 = VAR_31;
   }
  } else {
   VAR_28.ext_lan.xport.spi = 0;

   VAR_31 = FUNC_8(VAR_23, &VAR_28, VAR_22);
   if (VAR_31) {
    struct pf_state_key *VAR_33 = VAR_31->state_key;

    FUNC_2(VAR_17,
        &VAR_19, VAR_33);
    VAR_33->ext_lan.xport.spi = VAR_29->spi;

    if (FUNC_1(VAR_17,
        &VAR_19, VAR_33))
     FUNC_7(VAR_31, VAR_10);
    else
     *VAR_21 = VAR_31;
   }
  }

  if (VAR_31) {
   if (*VAR_21 == 0) {




    VAR_31->timeout = VAR_7;
    FUNC_4(&VAR_31->unlink_hooks,
        VAR_1|VAR_0);
    FUNC_10(VAR_31);
    FUNC_9(VAR_31);
    return (VAR_8);
   }
  }
 }


 if (*VAR_21 != ((void*)0) && VAR_25 != ((void*)0) && !(VAR_25->pktflags & VAR_15)) {
  VAR_25->flowsrc = (*VAR_21)->state_key->flowsrc;
  VAR_25->flowhash = (*VAR_21)->state_key->flowhash;
  if (VAR_25->flowhash != 0) {
   VAR_25->pktflags |= VAR_15;
   VAR_25->pktflags &= ~VAR_14;
  }
 }

 if (FUNC_11(VAR_21, VAR_23, VAR_22, &VAR_30))
  return (VAR_30);

 if (VAR_22 == (*VAR_21)->state_key->direction) {
  VAR_26 = &(*VAR_21)->src;
  VAR_27 = &(*VAR_21)->dst;
 } else {
  VAR_26 = &(*VAR_21)->dst;
  VAR_27 = &(*VAR_21)->src;
 }


 if (VAR_26->state < VAR_4)
  VAR_26->state = VAR_4;


 (*VAR_21)->expire = FUNC_12();
 if (VAR_26->state >= VAR_4 &&
     VAR_27->state >= VAR_4) {
  (*VAR_21)->timeout = VAR_5;
  VAR_26->state = VAR_3;
  VAR_27->state = VAR_3;
 } else {
  (*VAR_21)->timeout = VAR_6;
 }

 if (FUNC_3((*VAR_21)->state_key)) {
  if (VAR_22 == VAR_12) {
   switch (VAR_25->af) {
   }
  } else {
   switch (VAR_25->af) {
   }
  }
 }

 return (VAR_13);
}
