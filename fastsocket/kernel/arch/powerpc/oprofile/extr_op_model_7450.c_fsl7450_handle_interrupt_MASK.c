
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct op_counter_config {scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (unsigned long,struct pt_regs*,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 () ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_8(struct pt_regs *VAR_5,
        struct op_counter_config *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;


 FUNC_5(FUNC_3() | VAR_0);

 VAR_7 = FUNC_4(VAR_1);
 VAR_8 = FUNC_2(VAR_7);

 for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10) {
  VAR_9 = FUNC_0(VAR_10);
  if (VAR_9 < 0) {
   if (VAR_3 && VAR_6[VAR_10].enabled) {
    FUNC_6(VAR_7, VAR_5, VAR_10, VAR_8);
    FUNC_1(VAR_10, VAR_4[VAR_10]);
   } else {
    FUNC_1(VAR_10, 0);
   }
  }
 }





 FUNC_7();
}
