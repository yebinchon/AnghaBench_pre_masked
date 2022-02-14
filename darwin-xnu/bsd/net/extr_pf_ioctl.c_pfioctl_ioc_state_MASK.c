
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct proc {int dummy; } ;
struct pfsync_state {int creatorid; int id; int ifname; int timeout; } ;
struct pfioc_state {struct pfsync_state state; } ;
struct pfi_kif {int dummy; } ;
struct pf_state_key {TYPE_1__* state_key; int unlink_hooks; } ;
struct pf_state_cmp {int creatorid; int id; } ;
struct pf_state {TYPE_1__* state_key; int unlink_hooks; } ;
struct TYPE_4__ {int states; } ;
struct TYPE_3__ {int app_state; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct pf_state_key*,int) ;
 struct pf_state_key* FUNC_4 (struct pf_state_key*,int *) ;
 TYPE_2__ VAR_7 ;
 struct pf_state_key* FUNC_5 (struct pf_state_cmp*) ;
 int FUNC_6 (struct pfi_kif*,struct pf_state_key*) ;
 int FUNC_7 (struct pfsync_state*,TYPE_1__*,struct pf_state_key*) ;
 int FUNC_8 (struct pfsync_state*,struct pf_state_key*,struct pf_state_key*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct pfi_kif* FUNC_9 (int ) ;
 int FUNC_10 (struct pfi_kif*,int ) ;
 struct pf_state_key* FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,struct pf_state_key*) ;

__attribute__((used)) static int
FUNC_13(u_long VAR_10, struct pfioc_state *VAR_11, struct proc *VAR_12)
{
#pragma unused(p)
 int VAR_13 = 0;

 switch (VAR_10) {
 case 129: {
  struct pfsync_state *VAR_14 = &VAR_11->state;
  struct pf_state *VAR_15;
  struct pf_state_key *VAR_16;
  struct pfi_kif *VAR_17;

  if (VAR_14->timeout >= VAR_5) {
   VAR_13 = VAR_1;
   break;
  }
  VAR_15 = FUNC_11(&VAR_9, VAR_6);
  if (VAR_15 == ((void*)0)) {
   VAR_13 = VAR_3;
   break;
  }
  FUNC_3(VAR_15, sizeof (struct pf_state));
  if ((VAR_16 = FUNC_4(VAR_15, ((void*)0))) == ((void*)0)) {
   FUNC_12(&VAR_9, VAR_15);
   VAR_13 = VAR_3;
   break;
  }
  FUNC_8(VAR_14, VAR_16, VAR_15);
  VAR_17 = FUNC_9(VAR_14->ifname);
  if (VAR_17 == ((void*)0)) {
   FUNC_12(&VAR_9, VAR_15);
   FUNC_12(&VAR_8, VAR_16);
   VAR_13 = VAR_2;
   break;
  }
  FUNC_0(&VAR_15->unlink_hooks);
  VAR_15->state_key->app_state = 0;
  if (FUNC_6(VAR_17, VAR_15)) {
   FUNC_10(VAR_17, VAR_4);
   FUNC_12(&VAR_9, VAR_15);
   VAR_13 = VAR_0;
   break;
  }
  VAR_7.states++;
  FUNC_1(VAR_7.states != 0);
  break;
 }

 case 128: {
  struct pf_state *VAR_18;
  struct pf_state_cmp VAR_19;

  FUNC_2(VAR_11->state.id, &VAR_19.id, sizeof (VAR_19.id));
  VAR_19.creatorid = VAR_11->state.creatorid;

  VAR_18 = FUNC_5(&VAR_19);
  if (VAR_18 == ((void*)0)) {
   VAR_13 = VAR_2;
   break;
  }

  FUNC_7(&VAR_11->state, VAR_18->state_key, VAR_18);
  break;
 }

 default:
  FUNC_1(0);

 }

 return (VAR_13);
}
