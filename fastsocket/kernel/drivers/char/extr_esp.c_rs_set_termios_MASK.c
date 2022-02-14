
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; struct esp_struct* driver_data; } ;
struct ktermios {int c_cflag; } ;
struct esp_struct {int MCR; int lock; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct esp_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct esp_struct*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_8, struct ktermios *VAR_9)
{
 struct esp_struct *VAR_10 = VAR_8->driver_data;
 unsigned long VAR_11;

 FUNC_0(VAR_10);

 FUNC_3(&VAR_10->lock, VAR_11);


 if ((VAR_9->c_cflag & VAR_0) &&
  !(VAR_8->termios->c_cflag & VAR_0)) {
  VAR_10->MCR &= ~(VAR_6|VAR_7);
  FUNC_2(VAR_10, VAR_3, VAR_2);
  FUNC_2(VAR_10, VAR_4, VAR_5);
  FUNC_2(VAR_10, VAR_4, VAR_10->MCR);
 }


 if (!(VAR_9->c_cflag & VAR_0) &&
  (VAR_8->termios->c_cflag & VAR_0)) {
  VAR_10->MCR |= (VAR_6 | VAR_7);
  FUNC_2(VAR_10, VAR_3, VAR_2);
  FUNC_2(VAR_10, VAR_4, VAR_5);
  FUNC_2(VAR_10, VAR_4, VAR_10->MCR);
 }

 FUNC_4(&VAR_10->lock, VAR_11);


 if ((VAR_9->c_cflag & VAR_1) &&
     !(VAR_8->termios->c_cflag & VAR_1)) {
  FUNC_1(VAR_8);
 }
}
