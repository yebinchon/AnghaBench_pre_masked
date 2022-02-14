
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct uv_rtc_timer_head {int next_cpu; int lock; TYPE_1__* cpu; } ;
struct TYPE_4__ {int blade_processor_id; } ;
struct TYPE_3__ {int expires; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct uv_rtc_timer_head** VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct uv_rtc_timer_head*,int) ;
 scalar_t__ FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(int VAR_3, u64 VAR_4)
{
 int VAR_5 = FUNC_4(VAR_3);
 int VAR_6 = FUNC_3(VAR_3);
 struct uv_rtc_timer_head *VAR_7 = VAR_2[VAR_6];
 int VAR_8 = FUNC_2(VAR_3)->blade_processor_id;
 u64 *VAR_9 = &VAR_7->cpu[VAR_8].expires;
 unsigned long VAR_10;
 int VAR_11;

 FUNC_0(&VAR_7->lock, VAR_10);

 VAR_11 = VAR_7->next_cpu;
 *VAR_9 = VAR_4;


 if (VAR_11 < 0 || VAR_8 == VAR_11 ||
   VAR_4 < VAR_7->cpu[VAR_11].expires) {
  VAR_7->next_cpu = VAR_8;
  if (FUNC_6(VAR_3, VAR_4)) {
   *VAR_9 = VAR_1;
   FUNC_5(VAR_7, VAR_5);
   FUNC_1(&VAR_7->lock, VAR_10);
   return -VAR_0;
  }
 }

 FUNC_1(&VAR_7->lock, VAR_10);
 return 0;
}
