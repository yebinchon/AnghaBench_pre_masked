
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dest_logical; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (unsigned long,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int,unsigned long*) ;
 int VAR_4 ;
 unsigned long* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(int VAR_5)
{
 int VAR_6 = FUNC_7();



 int VAR_7 = 0;

 if (VAR_7 || VAR_5 == VAR_2) {
  if (!FUNC_4(VAR_4, FUNC_5(VAR_6))) {
   unsigned long VAR_8 = FUNC_3(VAR_4)[0];

   if (VAR_6 < VAR_1)
    FUNC_2(VAR_6, &VAR_8);

   FUNC_1(VAR_8, VAR_5);
  }
 } else if (FUNC_6() > 1) {
  FUNC_0(VAR_0,
         VAR_5, VAR_3->dest_logical);
 }
}
