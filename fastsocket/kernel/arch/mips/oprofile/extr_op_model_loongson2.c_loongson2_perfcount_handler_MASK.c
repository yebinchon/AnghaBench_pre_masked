
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct pt_regs {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int cnt1_enabled; int cnt2_enabled; int reset_counter1; int reset_counter2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 (struct pt_regs*,int) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 uint64_t VAR_7, VAR_8, VAR_9;
 struct pt_regs *VAR_10 = FUNC_0();
 int VAR_11;
 unsigned long VAR_12;
 VAR_11 = VAR_3.cnt1_enabled | VAR_3.cnt2_enabled;
 if (!VAR_11)
  return VAR_1;

 VAR_7 = FUNC_2();
 VAR_8 = VAR_7 & 0xffffffff;
 VAR_9 = VAR_7 >> 32;

 FUNC_3(&VAR_4, VAR_12);

 if (VAR_8 & VAR_2) {
  if (VAR_3.cnt1_enabled)
   FUNC_1(VAR_10, 0);
  VAR_8 = VAR_3.reset_counter1;
 }
 if (VAR_9 & VAR_2) {
  if (VAR_3.cnt2_enabled)
   FUNC_1(VAR_10, 1);
  VAR_9 = VAR_3.reset_counter2;
 }

 FUNC_4(&VAR_4, VAR_12);

 FUNC_5((VAR_9 << 32) | VAR_8);

 return VAR_0;
}
