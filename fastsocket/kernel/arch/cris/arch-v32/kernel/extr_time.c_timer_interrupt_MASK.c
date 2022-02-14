
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_6__ {int tmr0; int member_0; } ;
typedef TYPE_1__ reg_timer_rw_ack_intr ;
struct TYPE_7__ {int tmr0; } ;
typedef TYPE_2__ reg_timer_r_masked_intr ;
typedef int irqreturn_t ;
struct TYPE_8__ {scalar_t__ tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__) ;
 int VAR_2 ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (int) ;
 struct pt_regs* FUNC_4 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct pt_regs*) ;
 TYPE_3__ VAR_10 ;

__attribute__((used)) static inline irqreturn_t
FUNC_10(int VAR_11, void *VAR_12)
{
 struct pt_regs *VAR_13 = FUNC_4();
 int VAR_14 = FUNC_7();
 reg_timer_r_masked_intr VAR_15;
 reg_timer_rw_ack_intr VAR_16 = { 0 };


 VAR_15 = FUNC_0(VAR_8, VAR_9[VAR_14], VAR_4);
 if (!VAR_15.tmr0)
  return VAR_1;


 VAR_16.tmr0 = 1;
 FUNC_1(VAR_8, VAR_9[VAR_14], VAR_5, VAR_16);


 FUNC_5();


 FUNC_8(FUNC_9(VAR_13));

 FUNC_2(VAR_13);


 if (VAR_14 != 0)
  return VAR_0;


 FUNC_3(1);
 if ((VAR_7 & VAR_2) == 0 &&
     VAR_10.tv_sec > VAR_3 + 660 &&
     (VAR_10.tv_nsec / 1000) >= 500000 - (VAR_6 / 1000) / 2 &&
     (VAR_10.tv_nsec / 1000) <= 500000 + (VAR_6 / 1000) / 2) {
  if (FUNC_6(VAR_10.tv_sec) == 0)
   VAR_3 = VAR_10.tv_sec;
  else

   VAR_3 = VAR_10.tv_sec - 600;
 }
        return VAR_0;
}
