
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct async_struct {int ignore_status_mask; int read_status_mask; int flags; TYPE_1__* state; struct tty_struct* tty; } ;
struct async_icount {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_4__ {int serdatr; int intreq; } ;
struct TYPE_3__ {struct async_icount icount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__ VAR_13 ;
 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_5(struct async_struct *VAR_14)
{
        int VAR_15;
 int VAR_16;
 struct tty_struct *VAR_17 = VAR_14->tty;
 unsigned char VAR_18, VAR_19;
 struct async_icount *VAR_20;
 int VAR_21 = 0;

 VAR_20 = &VAR_14->state->icount;

 VAR_15 = VAR_9;
 VAR_16 = VAR_13.serdatr;
 FUNC_1();
 VAR_13.intreq = VAR_1;
 FUNC_1();

 if((VAR_16 & 0x1ff) == 0)
     VAR_15 |= VAR_8;
 if(VAR_16 & VAR_2)
     VAR_15 |= VAR_11;

 VAR_18 = VAR_16 & 0xff;
 VAR_20->rx++;




 VAR_19 = VAR_5;







 if (VAR_15 & (VAR_8 | VAR_12 |
        VAR_10 | VAR_11)) {



   if (VAR_15 & VAR_8) {
     VAR_15 &= ~(VAR_10 | VAR_12);
     VAR_20->brk++;
   } else if (VAR_15 & VAR_12)
     VAR_20->parity++;
   else if (VAR_15 & VAR_10)
     VAR_20->frame++;
   if (VAR_15 & VAR_11)
     VAR_20->overrun++;






   if (VAR_15 & VAR_14->ignore_status_mask)
     goto out;

   VAR_15 &= VAR_14->read_status_mask;

   if (VAR_15 & (VAR_8)) {



     VAR_19 = VAR_3;
     if (VAR_14->flags & VAR_0)
       FUNC_0(VAR_17);
   } else if (VAR_15 & VAR_12)
     VAR_19 = VAR_7;
   else if (VAR_15 & VAR_10)
     VAR_19 = VAR_4;
   if (VAR_15 & VAR_11) {





      VAR_21 = 1;
   }
 }
 FUNC_4(VAR_17, VAR_18, VAR_19);
 if (VAR_21 == 1)
  FUNC_4(VAR_17, 0, VAR_6);
 FUNC_3(VAR_17);
out:
 return;
}
