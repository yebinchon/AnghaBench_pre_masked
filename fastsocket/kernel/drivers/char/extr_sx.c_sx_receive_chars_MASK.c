
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int real_raw; int raw; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {struct tty_struct* tty; } ;
struct TYPE_5__ {TYPE_1__ port; } ;
struct sx_port {int line; TYPE_3__* board; TYPE_2__ gs; } ;
struct TYPE_6__ {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (struct sx_port*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (unsigned char*,scalar_t__,int) ;
 int FUNC_5 (TYPE_3__*,scalar_t__) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct sx_port*,int ) ;
 int FUNC_8 (struct sx_port*,int ,int) ;
 int FUNC_9 (struct tty_struct*) ;
 int FUNC_10 (struct tty_struct*,unsigned char**,int) ;

__attribute__((used)) static inline void FUNC_11(struct sx_port *VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct tty_struct *VAR_7;
 int VAR_8 = 0;
 unsigned char *VAR_9;

 FUNC_2();
 VAR_7 = VAR_4->gs.port.tty;
 while (1) {
  VAR_6 = FUNC_7(VAR_4, VAR_3);
  VAR_5 = (FUNC_7(VAR_4, VAR_2) - VAR_6) & 0xff;

  FUNC_6(VAR_0, "rxop=%d, c = %d.\n", VAR_6, VAR_5);


  if (VAR_6 + VAR_5 > 0x100)
   VAR_5 = 0x100 - VAR_6;

  FUNC_6(VAR_0, "c = %d.\n", VAR_5);



  VAR_5 = FUNC_10(VAR_7, &VAR_9, VAR_5);

  FUNC_6(VAR_0, "c = %d.\n", VAR_5);


  if (VAR_5 == 0)
   break;

  FUNC_6(VAR_0, "Copying over %d chars. First is "
    "%d at %lx\n", VAR_5, FUNC_5(VAR_4->board,
     FUNC_0(VAR_4, VAR_1) + VAR_6),
    FUNC_0(VAR_4, VAR_1));
  FUNC_4(VAR_9, VAR_4->board->base +
    FUNC_0(VAR_4, VAR_1) + VAR_6, VAR_5);





  FUNC_8(VAR_4, VAR_3, (VAR_6 + VAR_5) & 0xff);

  VAR_8 += VAR_5;
 }
 if (VAR_8) {
  struct timeval VAR_10;

  FUNC_1(&VAR_10);
  FUNC_6(VAR_0, "pushing flipq port %d (%3d "
    "chars): %d.%06d  (%d/%d)\n", VAR_4->line,
    VAR_8, (int)(VAR_10.tv_sec % 60), (int)VAR_10.tv_usec,
    VAR_7->raw, VAR_7->real_raw);



  FUNC_9(VAR_7);

 }

 FUNC_3();
}
