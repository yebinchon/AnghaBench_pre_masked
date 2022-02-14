
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pt_regs {int dummy; } ;
struct op_counter_config {scalar_t__ enabled; } ;
struct TYPE_2__ {int num_pmcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned long) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (unsigned long) ;
 void* FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (unsigned long,struct pt_regs*,int,int) ;
 scalar_t__ VAR_6 ;
 unsigned long* VAR_7 ;

__attribute__((used)) static void FUNC_6(struct pt_regs *VAR_8,
      struct op_counter_config *VAR_9)
{
 unsigned long VAR_10 = FUNC_3(VAR_3);
 int VAR_11 = FUNC_2(VAR_10);
 u64 VAR_12;
 int VAR_13;
 u64 VAR_14;


 VAR_14 = FUNC_3(VAR_2);
 FUNC_4(VAR_2, VAR_14 | VAR_0);




 for (VAR_13 = 0; VAR_13 < VAR_4->num_pmcs; VAR_13++) {
  VAR_12 = FUNC_0(VAR_13);
  if (VAR_12 & (0x1UL << 39)) {
   if (VAR_6 && VAR_9[VAR_13].enabled) {
    if (VAR_14 & VAR_1)
     FUNC_5(VAR_10, VAR_8, VAR_13, VAR_11);
    FUNC_1(VAR_13, VAR_7[VAR_13]);
   } else {
    FUNC_1(VAR_13, 0UL);
   }
  }
 }


 VAR_14 = VAR_5 | VAR_0;
 FUNC_4(VAR_2, VAR_14);
}
