
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned int FUNC_0 (unsigned int*,int ) ;
 unsigned int FUNC_1 (unsigned int*,int ,int ) ;
 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,struct pt_regs*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_6 ;

void FUNC_5(struct pt_regs* VAR_7)
{
 int VAR_8;
 unsigned VAR_9;
 unsigned VAR_10;
 unsigned VAR_11 = 0;


 VAR_10 = VAR_9 = *VAR_1;


 VAR_10 &= ~(FUNC_0(VAR_1, VAR_6));





 if (VAR_10 &
     (FUNC_1(VAR_1, VAR_4, VAR_3) |
      FUNC_1(VAR_1, VAR_5, VAR_3))) {
  VAR_11 = (FUNC_0(VAR_1, VAR_4) |
      FUNC_0(VAR_1, VAR_5));
 }


 *VAR_0 = (VAR_10 | VAR_11);




 FUNC_3();


 for (VAR_8 = 2; VAR_8 < 32; VAR_8++) {
  if (VAR_9 & (1 << VAR_8)) {
   FUNC_2(VAR_8, VAR_7);
  }
 }


 FUNC_4();


 *VAR_2 = (VAR_9 | VAR_11);
}
