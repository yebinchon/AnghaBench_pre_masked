
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int actual_length; int transfer_buffer; } ;
struct tty_struct {int flags; } ;
struct hso_serial {int curr_rx_urb_offset; scalar_t__* rx_urb_filled; int tty; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t FUNC_1 (struct hso_serial*,struct urb*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*,int,int) ;
 struct tty_struct* FUNC_5 (int ) ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_7(struct urb *VAR_1, struct hso_serial *VAR_2)
{
 struct tty_struct *VAR_3;
 int VAR_4 = 0;
 int VAR_5;


 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) {
  FUNC_0("serial = NULL");
  return -2;
 }


 VAR_3 = FUNC_5(VAR_2->tty);


 if (VAR_3) {
  VAR_4 = VAR_1->actual_length -
   VAR_2->curr_rx_urb_offset;
  FUNC_0("data to push to tty");
  while (VAR_4) {
   if (FUNC_2(VAR_0, &VAR_3->flags)) {
    FUNC_6(VAR_3);
    return -1;
   }
   VAR_5 = FUNC_4
    (VAR_3, VAR_1->transfer_buffer +
     VAR_2->curr_rx_urb_offset,
     VAR_4);
   VAR_2->curr_rx_urb_offset += VAR_5;
   VAR_4 -= VAR_5;
   FUNC_3(VAR_3);
  }
 }
 if (VAR_4 == 0) {
  VAR_2->curr_rx_urb_offset = 0;
  VAR_2->rx_urb_filled[FUNC_1(VAR_2, VAR_1)] = 0;
 }
 FUNC_6(VAR_3);
 return VAR_4;
}
