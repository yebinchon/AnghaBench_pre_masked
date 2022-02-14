
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ actual_length; } ;
struct hso_serial {scalar_t__ open_count; scalar_t__ rx_state; struct urb** rx_urb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hso_serial*) ;
 int FUNC_1 (struct urb*,struct hso_serial*) ;

__attribute__((used)) static void FUNC_2(struct hso_serial *VAR_3)
{
 int VAR_4 = 0;
 struct urb *VAR_5;

 VAR_5 = VAR_3->rx_urb[0];
 if (VAR_3->open_count > 0) {
  VAR_4 = FUNC_1(VAR_5, VAR_3);
  if (VAR_4 == -1)
   return;
 }


 if (VAR_4 == 0 && ((VAR_5->actual_length != 0) ||
      (VAR_3->rx_state == VAR_1))) {
  VAR_3->rx_state = VAR_2;
  FUNC_0(VAR_3);
 } else
  VAR_3->rx_state = VAR_0;
}
