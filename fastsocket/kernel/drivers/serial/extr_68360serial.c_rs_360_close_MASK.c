
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tty_struct {int count; int closing; int name; scalar_t__ driver_data; } ;
struct smc_regs {int smc_smcmr; int smc_smcm; } ;
struct serial_state {int count; int smc_scc_num; } ;
struct TYPE_8__ {int low; } ;
struct TYPE_9__ {TYPE_1__ w; } ;
struct scc_regs {TYPE_2__ scc_gsmr; int scc_sccm; } ;
struct file {int dummy; } ;
struct TYPE_10__ {int * tty; } ;
struct TYPE_11__ {int flags; scalar_t__ closing_wait; int close_wait; int open_wait; scalar_t__ close_delay; scalar_t__ blocked_open; TYPE_3__ port; scalar_t__ event; int timeout; struct serial_state* state; int read_status_mask; int line; } ;
typedef TYPE_4__ ser_info_t ;
struct TYPE_12__ {struct smc_regs* smc_regs; struct scc_regs* scc_regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ) ;
 TYPE_7__* VAR_10 ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (struct tty_struct*,int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ,char*) ;
 int FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (struct file*) ;
 int FUNC_12 (struct tty_struct*) ;
 int FUNC_13 (struct tty_struct*,scalar_t__) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct tty_struct *VAR_11, struct file * VAR_12)
{
 ser_info_t *VAR_13 = (ser_info_t *)VAR_11->driver_data;

 struct serial_state *VAR_14;
 unsigned long VAR_15;
 int VAR_16;
 volatile struct smc_regs *VAR_17;
 volatile struct scc_regs *VAR_18;

 if (!VAR_13 || FUNC_9(VAR_13, VAR_11->name, "rs_close"))
  return;

 VAR_14 = VAR_13->state;

 FUNC_4(VAR_15);

 if (FUNC_11(VAR_12)) {
  FUNC_0("before DEC-hung");
  FUNC_3(VAR_15);
  return;
 }




 if ((VAR_11->count == 1) && (VAR_14->count != 1)) {







  FUNC_6("rs_close: bad serial port count; tty->count is 1, "
         "state->count is %d\n", VAR_14->count);
  VAR_14->count = 1;
 }
 if (--VAR_14->count < 0) {
  FUNC_6("rs_close: bad serial port count for ttys%d: %d\n",
         VAR_13->line, VAR_14->count);
  VAR_14->count = 0;
 }
 if (VAR_14->count) {
  FUNC_0("before DEC-2");
  FUNC_3(VAR_15);
  return;
 }
 VAR_13->flags |= VAR_0;




 VAR_11->closing = 1;
 if (VAR_13->closing_wait != VAR_1)
  FUNC_13(VAR_11, VAR_13->closing_wait);






 VAR_13->read_status_mask &= ~VAR_4;
 if (VAR_13->flags & VAR_2) {

  VAR_16 = FUNC_1(VAR_13->state->smc_scc_num);
  if (VAR_13->state->smc_scc_num & VAR_5) {
   VAR_18 = &VAR_10->scc_regs[VAR_16];
   VAR_18->scc_sccm &= ~VAR_9;
   VAR_18->scc_gsmr.w.low &= ~VAR_6;
  } else {
   VAR_17 = &VAR_10->smc_regs[VAR_16];
   VAR_17->smc_smcm &= ~VAR_8;
   VAR_17->smc_smcmr &= ~VAR_7;
  }





  FUNC_8(VAR_11, VAR_13->timeout);
 }
 FUNC_10(VAR_13);
 FUNC_7(VAR_11);
 FUNC_12(VAR_11);
 VAR_11->closing = 0;
 VAR_13->event = 0;
 VAR_13->port.tty = ((void*)0);
 if (VAR_13->blocked_open) {
  if (VAR_13->close_delay) {
   FUNC_5(FUNC_2(VAR_13->close_delay));
  }
  FUNC_14(&VAR_13->open_wait);
 }
 VAR_13->flags &= ~(VAR_3|VAR_0);
 FUNC_14(&VAR_13->close_wait);
 FUNC_3(VAR_15);
}
