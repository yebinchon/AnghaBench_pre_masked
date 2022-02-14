
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_mtrr_context {int flags; int cr4val; int ccr3; int deftype_hi; int deftype_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct set_mtrr_context *VAR_4)
{
 if (FUNC_5() || FUNC_0(VAR_1)) {


  FUNC_6();


  if (FUNC_5()) {

   FUNC_2(VAR_2, VAR_4->deftype_lo,
       VAR_4->deftype_hi);
  } else {




   FUNC_4(VAR_0, VAR_4->ccr3);
  }


  FUNC_7(FUNC_3() & 0xbfffffff);


  if (VAR_3)
   FUNC_8(VAR_4->cr4val);
 }

 FUNC_1(VAR_4->flags);
}
