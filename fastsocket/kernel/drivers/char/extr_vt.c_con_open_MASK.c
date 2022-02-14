
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vc_data {scalar_t__ vc_utf; int vc_cols; int vc_rows; struct tty_struct* vc_tty; } ;
struct TYPE_4__ {int ws_col; int ws_row; } ;
struct tty_struct {unsigned int index; TYPE_2__* termios; TYPE_1__ winsize; struct vc_data* driver_data; } ;
struct file {int dummy; } ;
struct TYPE_6__ {struct vc_data* d; } ;
struct TYPE_5__ {int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_3, struct file *VAR_4)
{
 unsigned int VAR_5 = VAR_3->index;
 int VAR_6 = 0;

 FUNC_0();
 if (VAR_3->driver_data == ((void*)0)) {
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6 == 0) {
   struct vc_data *VAR_7 = VAR_2[VAR_5].d;


   if (VAR_7->vc_tty) {
    FUNC_1();
    return -VAR_0;
   }
   VAR_3->driver_data = VAR_7;
   VAR_7->vc_tty = VAR_3;

   if (!VAR_3->winsize.ws_row && !VAR_3->winsize.ws_col) {
    VAR_3->winsize.ws_row = VAR_2[VAR_5].d->vc_rows;
    VAR_3->winsize.ws_col = VAR_2[VAR_5].d->vc_cols;
   }
   if (VAR_7->vc_utf)
    VAR_3->termios->c_iflag |= VAR_1;
   else
    VAR_3->termios->c_iflag &= ~VAR_1;
   FUNC_1();
   return VAR_6;
  }
 }
 FUNC_1();
 return VAR_6;
}
