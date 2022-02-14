
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_mtrr_context {int deftype_lo; int ccr3; int deftype_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 () ;

void FUNC_4(struct set_mtrr_context *VAR_3)
{
 if (FUNC_3()) {

  FUNC_1(VAR_2, VAR_3->deftype_lo & 0xf300UL,
        VAR_3->deftype_hi);
 } else {
  if (FUNC_0(VAR_1)) {

   FUNC_2(VAR_0, (VAR_3->ccr3 & 0x0f) | 0x10);
  }
 }
}
