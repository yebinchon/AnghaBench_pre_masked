
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fcoe_ctlr {int port_id; scalar_t__ probe_tries; int timer; TYPE_1__* lp; int rnd_state; } ;
struct TYPE_2__ {int wwpn; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct fcoe_ctlr*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct fcoe_ctlr *VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7;

 FUNC_0(VAR_5->lp);
 VAR_7 = VAR_5->port_id;
 if (VAR_5->probe_tries)
  VAR_7 = FUNC_4(&VAR_5->rnd_state) & 0xffff;
 else if (!VAR_7)
  VAR_7 = VAR_5->lp->wwpn & 0xffff;
 if (!VAR_7 || VAR_7 == 0xffff)
  VAR_7 = 1;
 VAR_5->port_id = VAR_7;

 if (VAR_5->probe_tries < VAR_2) {
  VAR_5->probe_tries++;
  VAR_6 = FUNC_5() % VAR_1;
 } else
  VAR_6 = VAR_3;
 FUNC_2(&VAR_5->timer, VAR_4 + FUNC_3(VAR_6));
 FUNC_1(VAR_5, VAR_0);
}
