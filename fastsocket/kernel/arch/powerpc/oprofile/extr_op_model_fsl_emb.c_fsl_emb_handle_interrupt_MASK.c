
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long nip; } ;
struct op_counter_config {scalar_t__ enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (unsigned long,struct pt_regs*,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_7(struct pt_regs *VAR_4,
        struct op_counter_config *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;


 FUNC_4(FUNC_3() | VAR_0);

 VAR_6 = VAR_4->nip;
 VAR_7 = FUNC_2(VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
  VAR_8 = FUNC_0(VAR_9);
  if (VAR_8 < 0) {
   if (VAR_2 && VAR_5[VAR_9].enabled) {
    FUNC_5(VAR_6, VAR_4, VAR_9, VAR_7);
    FUNC_1(VAR_9, VAR_3[VAR_9]);
   } else {
    FUNC_1(VAR_9, 0);
   }
  }
 }





 FUNC_6(1);
}
