
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int enable; int stop_at_max; scalar_t__ trace_mode; int trace_buf_ovflw; int freeze; int count_mode; int spu_addr_trace; } ;
struct TYPE_4__ {TYPE_1__ pm_cntrl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int ,int ) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void FUNC_5(int VAR_5)
{





 u32 VAR_6 = 0;
 if (VAR_4.pm_cntrl.enable == 1)
  VAR_6 |= VAR_0;

 if (VAR_4.pm_cntrl.stop_at_max == 1)
  VAR_6 |= VAR_2;

 if (VAR_4.pm_cntrl.trace_mode != 0)
  VAR_6 |= FUNC_3(VAR_4.pm_cntrl.trace_mode);

 if (VAR_4.pm_cntrl.trace_buf_ovflw == 1)
  VAR_6 |= FUNC_2(VAR_4.pm_cntrl.trace_buf_ovflw);
 if (VAR_4.pm_cntrl.freeze == 1)
  VAR_6 |= VAR_1;

 VAR_6 |= FUNC_1(VAR_4.pm_cntrl.spu_addr_trace);





 VAR_6 |= FUNC_0(VAR_4.pm_cntrl.count_mode);
 FUNC_4(VAR_5, VAR_3, VAR_6);
}
