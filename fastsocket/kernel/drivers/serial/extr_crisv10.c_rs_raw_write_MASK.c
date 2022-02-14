
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* chars_in_buffer ) (struct tty_struct*) ;} ;
struct tty_struct {int hw_stopped; int stopped; TYPE_1__ ldisc; scalar_t__ driver_data; } ;
struct TYPE_4__ {int head; int tail; scalar_t__ buf; } ;
struct e100_serial {scalar_t__ line; int tr_running; TYPE_2__ xmit; int * ioport; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int FUNC_2 (int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (unsigned char const*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (scalar_t__,unsigned char const*,int) ;
 int FUNC_8 (char*,int,int ) ;
 int FUNC_9 (struct e100_serial*) ;
 int FUNC_10 (struct tty_struct*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_11(struct tty_struct *VAR_4,
   const unsigned char *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = 0;
 struct e100_serial *VAR_9 = (struct e100_serial *)VAR_4->driver_data;
 unsigned long VAR_10;



 if (!VAR_4 || !VAR_9->xmit.buf || !VAR_3)
  return 0;
 FUNC_6(VAR_10);
 FUNC_2(FUNC_1(VAR_9->line, "write count %i ", VAR_6));
 FUNC_2(FUNC_1(VAR_9->line, "ldisc %i\n", VAR_4->ldisc.chars_in_buffer(VAR_4)));
 FUNC_4();
  while (VAR_6) {
   VAR_7 = FUNC_0(VAR_9->xmit.head,
           VAR_9->xmit.tail,
           VAR_2);

   if (VAR_6 < VAR_7)
    VAR_7 = VAR_6;
   if (VAR_7 <= 0)
    break;

   FUNC_7(VAR_9->xmit.buf + VAR_9->xmit.head, VAR_5, VAR_7);
   VAR_9->xmit.head = (VAR_9->xmit.head + VAR_7) &
    (VAR_2-1);
   VAR_5 += VAR_7;
   VAR_6 -= VAR_7;
   VAR_8 += VAR_7;
  }
 FUNC_5(VAR_10);





 FUNC_2(FUNC_1(VAR_9->line, "write ret %i\n", VAR_8));

 if (VAR_9->xmit.head != VAR_9->xmit.tail &&
     !VAR_4->stopped &&
     !VAR_4->hw_stopped &&
     !VAR_9->tr_running) {
  FUNC_9(VAR_9);
 }

 return VAR_8;
}
