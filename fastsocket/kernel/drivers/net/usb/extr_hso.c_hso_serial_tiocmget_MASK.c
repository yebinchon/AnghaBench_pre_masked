
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tty_struct {int dummy; } ;
struct hso_tiocmget {int prev_UART_state_bitmap; } ;
struct hso_serial {int serial_lock; struct hso_tiocmget* tiocmget; scalar_t__ dtr_state; scalar_t__ rts_state; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct hso_serial* FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_9, struct file *VAR_10)
{
 int VAR_11;
 struct hso_serial *VAR_12 = FUNC_1(VAR_9);
 struct hso_tiocmget *VAR_13;
 u16 VAR_14;


 if (!VAR_12) {
  FUNC_0("no tty structures");
  return -VAR_3;
 }
 FUNC_3(&VAR_12->serial_lock);
 VAR_11 = ((VAR_12->rts_state) ? VAR_8 : 0) |
     ((VAR_12->dtr_state) ? VAR_6 : 0);
 VAR_13 = VAR_12->tiocmget;
 if (VAR_13) {

  VAR_14 = FUNC_2(
   VAR_13->prev_UART_state_bitmap);
  if (VAR_14 & VAR_0)
   VAR_11 |= VAR_7;
  if (VAR_14 & VAR_1)
   VAR_11 |= VAR_4;
  if (VAR_14 & VAR_2)
   VAR_11 |= VAR_5;
 }
 FUNC_4(&VAR_12->serial_lock);
 return VAR_11;
}
