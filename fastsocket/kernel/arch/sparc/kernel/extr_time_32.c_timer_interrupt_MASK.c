
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {long tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_5, void *VAR_6)
{

 static long VAR_7;


 FUNC_4(VAR_0);



 FUNC_8(&VAR_4);

 FUNC_0();

 FUNC_1(1);


 if (FUNC_3() &&
     VAR_3.tv_sec > VAR_7 + 660 &&
     (VAR_3.tv_nsec / 1000) >= 500000 - ((unsigned) VAR_2) / 2 &&
     (VAR_3.tv_nsec / 1000) <= 500000 + ((unsigned) VAR_2) / 2) {
   if (FUNC_5(VAR_3.tv_sec) == 0)
     VAR_7 = VAR_3.tv_sec;
   else
     VAR_7 = VAR_3.tv_sec - 600;
 }
 FUNC_9(&VAR_4);


 FUNC_6(FUNC_7(FUNC_2()));

 return VAR_1;
}
