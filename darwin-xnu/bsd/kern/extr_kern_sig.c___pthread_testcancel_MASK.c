
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
struct uthread {int uu_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(int VAR_5)
{

 thread_t VAR_6 = FUNC_0();
 struct uthread * VAR_7;

 VAR_7 = (struct uthread *)FUNC_1(VAR_6);


 VAR_7->uu_flag &= ~VAR_4;

 if ((VAR_7->uu_flag & (VAR_2 | VAR_1 | VAR_3)) == VAR_1) {
  if(VAR_5 != 0) {
   FUNC_3(VAR_0);

  } else
   FUNC_2(VAR_6);
 }
}
