
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa25x_udc {scalar_t__ ep0state; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct pxa25x_udc*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_6)
{
 struct pxa25x_udc *VAR_7 = (void *)VAR_6;

 FUNC_1();
 if (VAR_7->ep0state == VAR_1
   && (VAR_2 & VAR_3) == 0
   && (VAR_2 & VAR_5) == 0) {
  VAR_2 = VAR_3|VAR_4;
  FUNC_0(VAR_0, "ep0 re-stall\n");
  FUNC_3(VAR_7);
 }
 FUNC_2();
}
