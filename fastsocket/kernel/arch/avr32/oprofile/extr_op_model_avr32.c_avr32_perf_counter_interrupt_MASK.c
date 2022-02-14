
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;
struct avr32_perf_counter {int flag_mask; int count; scalar_t__ enabled; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct pt_regs*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct avr32_perf_counter *VAR_10 = VAR_9;
 struct pt_regs *VAR_11;
 u32 VAR_12;

 if (FUNC_2(!(FUNC_1(VAR_0)
     & (1 << VAR_1))))
  return VAR_3;

 VAR_11 = FUNC_0();
 VAR_12 = FUNC_4(VAR_5);


 FUNC_5(VAR_5, VAR_12);


 if (VAR_10->enabled && (VAR_12 & VAR_10->flag_mask)) {
  FUNC_5(VAR_4, -VAR_10->count);
  FUNC_3(VAR_11, VAR_4);
 }
 VAR_10++;

 if (VAR_10->enabled && (VAR_12 & VAR_10->flag_mask)) {
  FUNC_5(VAR_6, -VAR_10->count);
  FUNC_3(VAR_11, VAR_6);
 }
 VAR_10++;

 if (VAR_10->enabled && (VAR_12 & VAR_10->flag_mask)) {
  FUNC_5(VAR_7, -VAR_10->count);
  FUNC_3(VAR_11, VAR_7);
 }

 return VAR_2;
}
