
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ state; scalar_t__ seqlo; int seqhi; } ;
struct TYPE_9__ {int ptr; } ;
struct pf_state {scalar_t__ creatorid; int timeout; int unlink_hooks; int tag; TYPE_7__ src; TYPE_6__* state_key; TYPE_1__ rule; } ;
struct TYPE_16__ {scalar_t__ hostid; } ;
struct TYPE_12__ {int port; } ;
struct TYPE_13__ {TYPE_4__ xport; int addr; } ;
struct TYPE_10__ {int port; } ;
struct TYPE_11__ {TYPE_2__ xport; int addr; } ;
struct TYPE_14__ {TYPE_5__ lan; TYPE_3__ ext_lan; int af_lan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int *,struct pf_state*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct pf_state*,int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int *,int *,int ,int ,int ,scalar_t__,int,int ,int ,int ,int,int ,int *,int *) ;
 int FUNC_5 (struct pf_state*) ;
 int VAR_8 ;
 TYPE_8__ VAR_9 ;
 int FUNC_6 (struct pf_state*) ;
 int VAR_10 ;

void
FUNC_7(struct pf_state *VAR_11)
{
 FUNC_0(VAR_7, VAR_2);

 if (VAR_11->src.state == VAR_4) {
  FUNC_4(VAR_11->rule.ptr, VAR_11->state_key->af_lan,
      &VAR_11->state_key->ext_lan.addr, &VAR_11->state_key->lan.addr,
      VAR_11->state_key->ext_lan.xport.port,
      VAR_11->state_key->lan.xport.port,
      VAR_11->src.seqhi, VAR_11->src.seqlo + 1,
      VAR_6|VAR_5, 0, 0, 0, 1, VAR_11->tag, ((void*)0), ((void*)0));
 }

 FUNC_2(&VAR_11->unlink_hooks, VAR_1|VAR_0);
 FUNC_1(VAR_8, &VAR_10, VAR_11);




 VAR_11->timeout = VAR_3;
 FUNC_5(VAR_11);
 FUNC_3(VAR_11, 0);
}
