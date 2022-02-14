
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* send_IPI_allbutself ) (int ) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(int VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;

 if (VAR_3)
  return;
 if (FUNC_3() > 1) {
  VAR_2->send_IPI_allbutself(VAR_0);





  VAR_6 = VAR_1;
  while (FUNC_3() > 1 && (VAR_4 || VAR_6--))
   FUNC_5(1);
 }

 FUNC_2(VAR_5);
 FUNC_0();
 FUNC_1(VAR_5);
}
