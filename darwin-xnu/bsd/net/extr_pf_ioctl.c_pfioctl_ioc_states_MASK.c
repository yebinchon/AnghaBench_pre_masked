
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int u_long ;
typedef int u_int32_t ;
struct proc {int dummy; } ;
struct pfsync_state {int dummy; } ;
struct pfioc_states_64 {int ps_len; int ps_buf; } ;
struct pfioc_states_32 {int ps_len; int ps_buf; } ;
struct pf_state {int state_key; int timeout; } ;
struct TYPE_2__ {int states; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pf_state* FUNC_0 (int *) ;
 struct pf_state* FUNC_1 (struct pf_state*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pfsync_state*,int ) ;
 struct pfsync_state* FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct pfsync_state*,int,int) ;
 int VAR_5 ;
 int FUNC_6 (struct pfsync_state*,int ,struct pf_state*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_7 (struct proc*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_8(u_long VAR_8, struct pfioc_states_32 *VAR_9,
    struct pfioc_states_64 *VAR_10, struct proc *VAR_11)
{
 int VAR_12 = FUNC_7(VAR_11);
 int VAR_13 = 0;

 switch (VAR_8) {
 case 128: {
  struct pf_state *VAR_14;
  struct pfsync_state *VAR_15;
  user_addr_t VAR_16;
  u_int32_t VAR_17 = 0;
  int VAR_18, VAR_19;

  VAR_18 = (VAR_12 ? VAR_10->ps_len : VAR_9->ps_len);
  if (VAR_18 == 0) {
   VAR_19 = sizeof (struct pfsync_state) * VAR_6.states;
   if (VAR_12)
    VAR_10->ps_len = VAR_19;
   else
    VAR_9->ps_len = VAR_19;
   break;
  }

  VAR_15 = FUNC_4(sizeof (*VAR_15), VAR_1, VAR_2 | VAR_3);
  if (VAR_15 == ((void*)0)) {
   VAR_13 = VAR_0;
   break;
  }
  VAR_16 = (VAR_12 ? VAR_10->ps_buf : VAR_9->ps_buf);

  VAR_14 = FUNC_0(&VAR_7);
  while (VAR_14) {
   if (VAR_14->timeout != VAR_4) {
    if ((VAR_17 + 1) * sizeof (*VAR_15) > (unsigned)VAR_18)
     break;

    FUNC_6(VAR_15,
        VAR_14->state_key, VAR_14);
    VAR_13 = FUNC_5(VAR_15, VAR_16, sizeof (*VAR_15));
    if (VAR_13) {
     FUNC_3(VAR_15, VAR_1);
     goto fail;
    }
    VAR_16 += sizeof (*VAR_15);
    VAR_17++;
   }
   VAR_14 = FUNC_1(VAR_14, VAR_5);
  }

  VAR_19 = sizeof (struct pfsync_state) * VAR_17;
  if (VAR_12)
   VAR_10->ps_len = VAR_19;
  else
   VAR_9->ps_len = VAR_19;

  FUNC_3(VAR_15, VAR_1);
  break;
 }

 default:
  FUNC_2(0);

 }
fail:
 return (VAR_13);
}
