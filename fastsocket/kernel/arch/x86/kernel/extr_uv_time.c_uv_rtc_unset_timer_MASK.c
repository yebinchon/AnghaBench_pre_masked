
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct uv_rtc_timer_head {int next_cpu; int lock; TYPE_1__* cpu; } ;
struct TYPE_4__ {int blade_processor_id; } ;
struct TYPE_3__ {scalar_t__ expires; } ;


 scalar_t__ VAR_0 ;
 struct uv_rtc_timer_head** VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct uv_rtc_timer_head*,int) ;

__attribute__((used)) static int FUNC_7(int VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_4(VAR_2);
 int VAR_5 = FUNC_3(VAR_2);
 struct uv_rtc_timer_head *VAR_6 = VAR_1[VAR_5];
 int VAR_7 = FUNC_2(VAR_2)->blade_processor_id;
 u64 *VAR_8 = &VAR_6->cpu[VAR_7].expires;
 unsigned long VAR_9;
 int VAR_10 = 0;

 FUNC_0(&VAR_6->lock, VAR_9);

 if ((VAR_6->next_cpu == VAR_7 && FUNC_5(((void*)0)) >= *VAR_8) || VAR_3)
  VAR_10 = 1;

 if (VAR_10) {
  *VAR_8 = VAR_0;

  if (VAR_6->next_cpu == VAR_7)
   FUNC_6(VAR_6, VAR_4);
 }

 FUNC_1(&VAR_6->lock, VAR_9);

 return VAR_10;
}
