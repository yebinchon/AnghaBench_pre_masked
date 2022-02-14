
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int idx; int reg; } ;
struct TYPE_5__ {int config; TYPE_1__ extra_reg; } ;
struct perf_event {TYPE_2__ hw; } ;
struct TYPE_6__ {int er_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;

__attribute__((used)) static bool FUNC_0(struct perf_event *VAR_7, int VAR_8)
{
 if (!(VAR_6.er_flags & VAR_0))
  return 0;

 if (VAR_7->hw.extra_reg.idx == VAR_1) {
  VAR_7->hw.config &= ~VAR_3;
  VAR_7->hw.config |= 0x01bb;
  VAR_7->hw.extra_reg.idx = VAR_2;
  VAR_7->hw.extra_reg.reg = VAR_5;
 } else if (VAR_7->hw.extra_reg.idx == VAR_2) {
  VAR_7->hw.config &= ~VAR_3;
  VAR_7->hw.config |= 0x01b7;
  VAR_7->hw.extra_reg.idx = VAR_1;
  VAR_7->hw.extra_reg.reg = VAR_4;
 }

 if (VAR_7->hw.extra_reg.idx == VAR_8)
  return 0;

 return 1;
}
