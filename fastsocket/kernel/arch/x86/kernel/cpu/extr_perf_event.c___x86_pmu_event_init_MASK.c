
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* idx; } ;
struct TYPE_5__ {void* idx; } ;
struct TYPE_7__ {int idx; int last_cpu; unsigned long long last_tag; TYPE_2__ branch_reg; TYPE_1__ extra_reg; } ;
struct perf_event {TYPE_3__ hw; int destroy; } ;
struct TYPE_8__ {int (* hw_config ) (struct perf_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct perf_event*) ;
 TYPE_4__ VAR_6 ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct perf_event *VAR_7)
{
 int VAR_8;

 if (!FUNC_8())
  return -VAR_1;

 VAR_8 = 0;
 if (!FUNC_1(&VAR_3)) {
  FUNC_3(&VAR_5);
  if (FUNC_2(&VAR_3) == 0) {
   if (!FUNC_6())
    VAR_8 = -VAR_0;
   else
    FUNC_5();
  }
  if (!VAR_8)
   FUNC_0(&VAR_3);
  FUNC_4(&VAR_5);
 }
 if (VAR_8)
  return VAR_8;

 VAR_7->destroy = VAR_4;

 VAR_7->hw.idx = -1;
 VAR_7->hw.last_cpu = -1;
 VAR_7->hw.last_tag = ~0ULL;


 VAR_7->hw.extra_reg.idx = VAR_2;


 VAR_7->hw.extra_reg.idx = VAR_2;
 VAR_7->hw.branch_reg.idx = VAR_2;

 return VAR_6.hw_config(VAR_7);
}
