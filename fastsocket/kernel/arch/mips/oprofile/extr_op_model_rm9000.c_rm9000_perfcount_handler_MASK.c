
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct pt_regs {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int reset_counter1; int reset_counter2; int control; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 (struct pt_regs*,int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 unsigned int VAR_6 = FUNC_2();
 struct pt_regs *VAR_7 = FUNC_0();
 uint32_t VAR_8, VAR_9;
 uint64_t VAR_10;







 FUNC_4(0);

 VAR_10 = FUNC_3();
 VAR_8 = VAR_10;
 VAR_9 = VAR_10 >> 32;

 if (VAR_6 & VAR_1) {
  FUNC_1(VAR_7, 0);
  VAR_8 = VAR_3.reset_counter1;
 }
 if (VAR_6 & VAR_2) {
  FUNC_1(VAR_7, 1);
  VAR_9 = VAR_3.reset_counter2;
 }

 VAR_10 = ((uint64_t)VAR_9 << 32) | VAR_8;
 FUNC_5(VAR_10);
 FUNC_4(VAR_3.control);

 return VAR_0;
}
