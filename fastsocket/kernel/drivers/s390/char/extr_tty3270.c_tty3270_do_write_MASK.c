
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cols; int lock; } ;
struct tty3270 {scalar_t__ esc_state; int cx; int cy; TYPE_2__ view; int timer; int wcc; TYPE_1__* tty; } ;
struct TYPE_3__ {int stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty3270*,int) ;
 int FUNC_4 (struct tty3270*) ;
 int FUNC_5 (struct tty3270*,int) ;
 int FUNC_6 (struct tty3270*,unsigned char const) ;
 int FUNC_7 (struct tty3270*) ;
 int FUNC_8 (struct tty3270*,unsigned char const) ;
 int FUNC_9 (struct tty3270*,int) ;

__attribute__((used)) static void
FUNC_10(struct tty3270 *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_0(&VAR_2->view.lock);
 for (VAR_5 = 0; !VAR_2->tty->stopped && VAR_5 < VAR_4; VAR_5++) {
  if (VAR_2->esc_state != 0) {

   FUNC_6(VAR_2, VAR_3[VAR_5]);
   continue;
  }

  switch (VAR_3[VAR_5]) {
  case 0x07:
   VAR_2->wcc |= VAR_1;
   break;
  case 0x08:
   if (VAR_2->cx > 0) {
    VAR_2->cx--;
    FUNC_8(VAR_2, ' ');
   }
   break;
  case 0x09:
   for (VAR_6 = VAR_2->cx % 8; VAR_6 < 8; VAR_6++) {
    if (VAR_2->cx >= VAR_2->view.cols) {
     FUNC_4(VAR_2);
     FUNC_7(VAR_2);
     break;
    }
    FUNC_8(VAR_2, ' ');
    VAR_2->cx++;
   }
   break;
  case 0x0a:
   FUNC_4(VAR_2);
   FUNC_7(VAR_2);
   break;
  case 0x0c:
   FUNC_5(VAR_2, 2);
   VAR_2->cx = VAR_2->cy = 0;
   break;
  case 0x0d:
   VAR_2->cx = 0;
   break;
  case 0x0f:
   break;
  case 0x1b:
   FUNC_6(VAR_2, VAR_3[VAR_5]);
   break;
  default:
   if (VAR_2->cx >= VAR_2->view.cols) {
    FUNC_4(VAR_2);
    FUNC_7(VAR_2);
   }
   FUNC_8(VAR_2, VAR_3[VAR_5]);
   VAR_2->cx++;
   break;
  }
 }

 FUNC_3(VAR_2, VAR_2->cy);


 if (!FUNC_2(&VAR_2->timer))
  FUNC_9(VAR_2, VAR_0/10);

 FUNC_1(&VAR_2->view.lock);
}
