
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_sunsu_port {scalar_t__ su_type; int serio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_sunsu_port*,int ) ;
 unsigned char FUNC_1 (struct uart_sunsu_port*,int ) ;
 int FUNC_2 (int *,unsigned char,int ) ;
 int FUNC_3 (unsigned char,int) ;
 int FUNC_4 (struct uart_sunsu_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_sunsu_port *VAR_5, int VAR_6)
{
 do {
  unsigned char VAR_7 = FUNC_1(VAR_5, VAR_4);


  if (VAR_5->su_type == VAR_0) {



  } else if (VAR_5->su_type == VAR_1) {
   int VAR_8 = FUNC_3(VAR_7, VAR_6);

   switch (VAR_8) {
   case 2:
    FUNC_4(VAR_5);

   case 1:
    break;

   case 0:



    break;
   };
  }
 } while (FUNC_0(VAR_5, VAR_2) & VAR_3);
}
