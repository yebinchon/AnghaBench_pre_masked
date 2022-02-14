
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_mtrr_context {int cr4val; int ccr3; int deftype_hi; int deftype_lo; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 unsigned int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int) ;

void FUNC_10(struct set_mtrr_context *VAR_6)
{
 unsigned int VAR_7;


 FUNC_2(VAR_6->flags);

 if (FUNC_6() || FUNC_1(VAR_1)) {


  if (VAR_5) {
   VAR_6->cr4val = FUNC_5();
   FUNC_9(VAR_6->cr4val & ~VAR_4);
  }





  VAR_7 = FUNC_4() | VAR_3;
  FUNC_7();
  FUNC_8(VAR_7);
  FUNC_7();

  if (FUNC_6()) {

   FUNC_3(VAR_2, VAR_6->deftype_lo, VAR_6->deftype_hi);
  } else {




   VAR_6->ccr3 = FUNC_0(VAR_0);
  }
 }
}
