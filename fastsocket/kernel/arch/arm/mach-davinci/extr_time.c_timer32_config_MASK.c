
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct timer_s {int period; int enamode_shift; int opts; scalar_t__ base; scalar_t__ prd_off; scalar_t__ tim_off; } ;
struct davinci_timer_instance {scalar_t__ cmp_off; } ;
struct davinci_soc_info {TYPE_1__* timer_info; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {struct davinci_timer_instance* timers; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct timer_s*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 struct davinci_soc_info VAR_7 ;
 TYPE_2__* VAR_8 ;

__attribute__((used)) static int FUNC_4(struct timer_s *VAR_9)
{
 u32 VAR_10;
 struct davinci_soc_info *VAR_11 = &VAR_7;

 if (FUNC_1(VAR_9)) {
  struct davinci_timer_instance *VAR_12 =
    VAR_11->timer_info->timers;
  int VAR_13 = FUNC_0(VAR_8[VAR_4].id);







  FUNC_3(FUNC_2(VAR_9->base + VAR_9->tim_off) + VAR_9->period,
   VAR_9->base + VAR_12[VAR_13].cmp_off);
 } else {
  VAR_10 = FUNC_2(VAR_9->base + VAR_0);


  VAR_10 &= ~(VAR_1 << VAR_9->enamode_shift);
  FUNC_3(VAR_10, VAR_9->base + VAR_0);


  FUNC_3(0, VAR_9->base + VAR_9->tim_off);
  FUNC_3(VAR_9->period, VAR_9->base + VAR_9->prd_off);


  if (VAR_9->opts & VAR_5)
   VAR_10 |= VAR_2 << VAR_9->enamode_shift;
  else if (VAR_9->opts & VAR_6)
   VAR_10 |= VAR_3 << VAR_9->enamode_shift;

  FUNC_3(VAR_10, VAR_9->base + VAR_0);
 }
 return 0;
}
