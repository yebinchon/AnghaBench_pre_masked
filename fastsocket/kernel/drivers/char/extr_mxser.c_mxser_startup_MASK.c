
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int flags; struct mxser_port* driver_data; } ;
struct TYPE_4__ {int flags; unsigned char* xmit_buf; } ;
struct mxser_port {int MCR; int IER; int slock; TYPE_2__ port; scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; scalar_t__ ioaddr; TYPE_1__* board; int type; } ;
struct TYPE_3__ {scalar_t__ chip_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct tty_struct*,int *) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct tty_struct *VAR_24)
{
 struct mxser_port *VAR_25 = VAR_24->driver_data;
 unsigned long VAR_26;
 unsigned long VAR_27;

 VAR_26 = FUNC_0(VAR_4);
 if (!VAR_26)
  return -VAR_3;

 FUNC_8(&VAR_25->slock, VAR_27);

 if (VAR_25->port.flags & VAR_0) {
  FUNC_3(VAR_26);
  FUNC_9(&VAR_25->slock, VAR_27);
  return 0;
 }

 if (!VAR_25->ioaddr || !VAR_25->type) {
  FUNC_7(VAR_7, &VAR_24->flags);
  FUNC_3(VAR_26);
  FUNC_9(&VAR_25->slock, VAR_27);
  return 0;
 }
 if (VAR_25->port.xmit_buf)
  FUNC_3(VAR_26);
 else
  VAR_25->port.xmit_buf = (unsigned char *) VAR_26;





 if (VAR_25->board->chip_flag)
  FUNC_6((VAR_9 |
   VAR_10 |
   VAR_5), VAR_25->ioaddr + VAR_8);
 else
  FUNC_6((VAR_9 | VAR_10),
   VAR_25->ioaddr + VAR_8);






 if (FUNC_4(VAR_25->ioaddr + VAR_18) == 0xff) {
  FUNC_9(&VAR_25->slock, VAR_27);
  if (FUNC_1(VAR_1)) {
   if (VAR_24)
    FUNC_7(VAR_7, &VAR_24->flags);
   return 0;
  } else
   return -VAR_2;
 }




 (void) FUNC_4(VAR_25->ioaddr + VAR_18);
 (void) FUNC_4(VAR_25->ioaddr + VAR_23);
 (void) FUNC_4(VAR_25->ioaddr + VAR_15);
 (void) FUNC_4(VAR_25->ioaddr + VAR_22);




 FUNC_6(VAR_17, VAR_25->ioaddr + VAR_16);
 VAR_25->MCR = VAR_20 | VAR_21;
 FUNC_6(VAR_25->MCR, VAR_25->ioaddr + VAR_19);




 VAR_25->IER = VAR_12 | VAR_14 | VAR_13;

 if (VAR_25->board->chip_flag)
  VAR_25->IER |= VAR_6;
 FUNC_6(VAR_25->IER, VAR_25->ioaddr + VAR_11);




 (void) FUNC_4(VAR_25->ioaddr + VAR_18);
 (void) FUNC_4(VAR_25->ioaddr + VAR_23);
 (void) FUNC_4(VAR_25->ioaddr + VAR_15);
 (void) FUNC_4(VAR_25->ioaddr + VAR_22);

 FUNC_2(VAR_7, &VAR_24->flags);
 VAR_25->xmit_cnt = VAR_25->xmit_head = VAR_25->xmit_tail = 0;




 FUNC_5(VAR_24, ((void*)0));
 VAR_25->port.flags |= VAR_0;
 FUNC_9(&VAR_25->slock, VAR_27);

 return 0;
}
