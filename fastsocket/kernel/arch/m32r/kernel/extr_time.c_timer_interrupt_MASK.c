
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_6, void *VAR_7)
{

 FUNC_3(VAR_0);


 FUNC_0(1);


 FUNC_7(FUNC_8(FUNC_1()));






 FUNC_9(&VAR_5);
 if (FUNC_2()
  && VAR_4.tv_sec > VAR_3 + 660
  && (VAR_4.tv_nsec / 1000) >= 500000 - ((unsigned)VAR_2) / 2
  && (VAR_4.tv_nsec / 1000) <= 500000 + ((unsigned)VAR_2) / 2)
 {
  if (FUNC_4(VAR_4.tv_sec) == 0)
   VAR_3 = VAR_4.tv_sec;
  else
   VAR_3 = VAR_4.tv_sec - 600;
 }
 FUNC_10(&VAR_5);
 return VAR_1;
}
