
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct musb {int mregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct musb*) ;
 int FUNC_4 (struct musb*,int) ;
 int FUNC_5 (struct musb*,int) ;
 int FUNC_6 (struct musb*) ;
 int FUNC_7 (struct musb*,int) ;
 int FUNC_8 (struct musb*,int) ;
 int FUNC_9 (int ,int ) ;

void FUNC_10(struct musb *VAR_2, u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5 = FUNC_9(VAR_2->mregs, VAR_0);



 if (!VAR_3) {

  if (!FUNC_0()) {

   if (VAR_5 & VAR_1)
    FUNC_6(VAR_2);
   else
    FUNC_3(VAR_2);
  }

 } else {

  if (VAR_4) {
   if (VAR_5 & VAR_1) {
    if (FUNC_1())
     FUNC_8(VAR_2, VAR_3);
   } else {
    if (FUNC_2())
     FUNC_5(VAR_2, VAR_3);
   }
  } else {

   if (VAR_5 & VAR_1) {
    if (FUNC_1())
     FUNC_7(VAR_2, VAR_3);
   } else {
    if (FUNC_2())
     FUNC_4(VAR_2, VAR_3);
   }
  }
 }
}
