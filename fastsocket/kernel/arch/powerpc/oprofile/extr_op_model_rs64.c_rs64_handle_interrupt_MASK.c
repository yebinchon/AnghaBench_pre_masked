
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct op_counter_config {scalar_t__ enabled; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,unsigned int) ;
 int VAR_5 ;
 int FUNC_7 (unsigned long,struct pt_regs*,int,int) ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_8(struct pt_regs *VAR_7,
      struct op_counter_config *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 unsigned long VAR_13 = FUNC_4(VAR_4);

 VAR_10 = FUNC_2(VAR_13);


 FUNC_5(FUNC_3() | VAR_2);

 for (VAR_12 = 0; VAR_12 < VAR_5; ++VAR_12) {
  VAR_11 = FUNC_0(VAR_12);
  if (VAR_11 < 0) {
   if (VAR_8[VAR_12].enabled) {
    FUNC_7(VAR_13, VAR_7, VAR_12, VAR_10);
    FUNC_1(VAR_12, VAR_6[VAR_12]);
   } else {
    FUNC_1(VAR_12, 0);
   }
  }
 }

 VAR_9 = FUNC_4(VAR_3);


 VAR_9 |= VAR_1;






 VAR_9 &= ~VAR_0;
 FUNC_6(VAR_3, VAR_9);
}
