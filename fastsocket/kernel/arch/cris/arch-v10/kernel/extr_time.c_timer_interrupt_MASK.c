
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ tv_sec; int tv_nsec; } ;


 int FUNC_0 (int*,int ,int ) ;
 int FUNC_1 (int*,int ,int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (int) ;
 struct pt_regs* FUNC_4 () ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 () ;
 int VAR_10 ;
 int FUNC_6 () ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct pt_regs*) ;
 TYPE_1__ VAR_17 ;

__attribute__((used)) static inline irqreturn_t
FUNC_10(int VAR_18, void *VAR_19)
{
 struct pt_regs *VAR_20 = FUNC_4();
 *VAR_1 = VAR_10 |
  FUNC_1(VAR_1, VAR_7, VAR_6);



 FUNC_6();


 FUNC_8(FUNC_9(VAR_20));



 FUNC_3(1);

        FUNC_2(VAR_20);
 if (FUNC_5() &&
     VAR_17.tv_sec > VAR_9 + 660 &&
     (VAR_17.tv_nsec / 1000) >= 500000 - (VAR_12 / 1000) / 2 &&
     (VAR_17.tv_nsec / 1000) <= 500000 + (VAR_12 / 1000) / 2) {
  if (FUNC_7(VAR_17.tv_sec) == 0)
   VAR_9 = VAR_17.tv_sec;
  else
   VAR_9 = VAR_17.tv_sec - 600;
 }
        return VAR_0;
}
