
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_3__ {int rxtotal; int rxbreaks; int rxoverrun; int rxframing; int rxparity; } ;
struct TYPE_4__ {int flags; } ;
struct stlport {unsigned int ioaddr; unsigned char rxignoremsk; unsigned char rxmarkmsk; TYPE_1__ stats; int pagenr; int brdnr; TYPE_2__ port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*,char,unsigned char) ;
 int FUNC_3 (struct tty_struct*) ;
 struct tty_struct* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_6(struct stlport *VAR_9, unsigned char VAR_10, char VAR_11)
{
 struct tty_struct *VAR_12;
 unsigned int VAR_13;

 VAR_12 = FUNC_4(&VAR_9->port);
 VAR_13 = VAR_9->ioaddr;

 if (VAR_10 & VAR_4)
  VAR_9->stats.rxparity++;
 if (VAR_10 & VAR_2)
  VAR_9->stats.rxframing++;
 if (VAR_10 & VAR_3)
  VAR_9->stats.rxoverrun++;
 if (VAR_10 & VAR_1)
  VAR_9->stats.rxbreaks++;

 if ((VAR_12 != ((void*)0)) &&
     ((VAR_9->rxignoremsk & VAR_10) == 0)) {
  if (VAR_9->rxmarkmsk & VAR_10) {
   if (VAR_10 & VAR_1) {
    VAR_10 = VAR_5;
    if (VAR_9->port.flags & VAR_0) {
     FUNC_1(VAR_12);
     FUNC_0(VAR_9->brdnr, VAR_9->pagenr);
    }
   } else if (VAR_10 & VAR_4)
    VAR_10 = VAR_8;
   else if (VAR_10 & VAR_2)
    VAR_10 = VAR_6;
   else if(VAR_10 & VAR_3)
    VAR_10 = VAR_7;
   else
    VAR_10 = 0;
  } else
   VAR_10 = 0;

  FUNC_2(VAR_12, VAR_11, VAR_10);
  FUNC_5(VAR_12);

  if (VAR_10 == 0)
   VAR_9->stats.rxtotal++;
 }
 FUNC_3(VAR_12);
}
