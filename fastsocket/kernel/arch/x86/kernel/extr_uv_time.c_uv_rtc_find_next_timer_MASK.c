
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct uv_rtc_timer_head {int next_cpu; int ncpus; TYPE_1__* cpu; } ;
struct TYPE_2__ {scalar_t__ expires; int lcpu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct uv_rtc_timer_head *VAR_3, int VAR_4)
{
 u64 VAR_5 = VAR_0;
 int VAR_6, VAR_7 = -1;

 VAR_3->next_cpu = -1;
 for (VAR_6 = 0; VAR_6 < VAR_3->ncpus; VAR_6++) {
  u64 VAR_8 = VAR_3->cpu[VAR_6].expires;
  if (VAR_8 < VAR_5) {
   VAR_7 = VAR_6;
   VAR_5 = VAR_8;
  }
 }
 if (VAR_7 >= 0) {
  VAR_3->next_cpu = VAR_7;
  VAR_6 = VAR_3->cpu[VAR_7].lcpu;
  if (FUNC_1(VAR_6, VAR_5))

   FUNC_0(VAR_6);
 } else {
  FUNC_2(VAR_4, VAR_1,
   VAR_2);
 }
}
