
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_5__ {struct tty_struct* tty; } ;
struct m68k_serial {size_t line; scalar_t__ is_cons; TYPE_1__ port; } ;
struct TYPE_6__ {unsigned short w; } ;
struct TYPE_7__ {TYPE_2__ urx; } ;
typedef TYPE_3__ m68328_uart ;


 unsigned char FUNC_0 (unsigned short,int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 int VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct m68k_serial*,unsigned short) ;
 int FUNC_6 (struct tty_struct*,unsigned char,unsigned char) ;
 int FUNC_7 (struct tty_struct*) ;
 TYPE_3__* VAR_11 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct m68k_serial *VAR_12, unsigned short VAR_13)
{
 struct tty_struct *VAR_14 = VAR_12->port.tty;
 m68328_uart *VAR_15 = &VAR_11[VAR_12->line];
 unsigned char VAR_16, VAR_17;





 do {

  VAR_16 = FUNC_0(VAR_13, VAR_9);

  if(VAR_12->is_cons) {
   if(VAR_4 & VAR_13) {
    FUNC_5(VAR_12, VAR_13);
    return;
   }




  }

  if(!VAR_14)
   goto clear_and_exit;

  VAR_17 = VAR_1;

  if(VAR_13 & VAR_8) {
   VAR_17 = VAR_3;
   FUNC_5(VAR_12, VAR_13);
  } else if(VAR_13 & VAR_7) {
   VAR_17 = VAR_2;
   FUNC_5(VAR_12, VAR_13);
  } else if(VAR_13 & VAR_6) {
   VAR_17 = VAR_0;
   FUNC_5(VAR_12, VAR_13);
  }
  FUNC_6(VAR_14, VAR_16, VAR_17);

 } while((VAR_13 = VAR_15->urx.w) & VAR_5);


 FUNC_7(VAR_14);

clear_and_exit:
 return;
}
