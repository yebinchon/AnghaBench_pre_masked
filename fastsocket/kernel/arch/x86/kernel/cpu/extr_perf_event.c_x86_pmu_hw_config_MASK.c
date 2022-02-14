
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int precise_ip; scalar_t__ type; int config; int exclude_kernel; int exclude_user; } ;
struct TYPE_4__ {int config; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__ hw; } ;
struct TYPE_6__ {scalar_t__ lbr_nr; scalar_t__ pebs_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_0 (struct perf_event*) ;

int FUNC_1(struct perf_event *VAR_7)
{
 if (VAR_7->attr.precise_ip) {
  int VAR_8 = 0;


  if (VAR_6.pebs_active) {
   VAR_8++;


   if (VAR_6.lbr_nr)
    VAR_8++;
  }

  if (VAR_7->attr.precise_ip > VAR_8)
   return -VAR_3;
 }





 VAR_7->hw.config = VAR_0;




 if (!VAR_7->attr.exclude_user)
  VAR_7->hw.config |= VAR_2;
 if (!VAR_7->attr.exclude_kernel)
  VAR_7->hw.config |= VAR_1;

 if (VAR_7->attr.type == VAR_4)
  VAR_7->hw.config |= VAR_7->attr.config & VAR_5;

 return FUNC_0(VAR_7);
}
