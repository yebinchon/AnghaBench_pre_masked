
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_4__ {int rx; int parity; int frame; int brk; } ;
struct TYPE_3__ {int flags; struct tty_struct* tty; } ;
struct esp_struct {int read_status_mask; int ignore_status_mask; TYPE_2__ icount; TYPE_1__ port; int stat_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct esp_struct*,int) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct tty_struct*,int ,int) ;
 int FUNC_8 (struct tty_struct*,int *,int) ;
 int FUNC_9 (struct tty_struct*) ;

__attribute__((used)) static inline void FUNC_10(struct esp_struct *VAR_8,
         int VAR_9)
{
 struct tty_struct *VAR_10 = VAR_8->port.tty;
 int VAR_11;
 unsigned long VAR_12;

 VAR_12 = FUNC_0();
 FUNC_2(VAR_5);
 FUNC_1(VAR_5);

 VAR_8->stat_flags &= ~VAR_1;
 VAR_11 = VAR_7 - FUNC_4(VAR_5);
 FUNC_6(VAR_12);

 VAR_8->icount.rx += VAR_11;

 if (VAR_11 > 0) {
  FUNC_8(VAR_10, VAR_6, VAR_11 - 1);

  VAR_9 &= (0x1c & VAR_8->read_status_mask);


  if (!(VAR_9 & VAR_8->ignore_status_mask)) {
   int VAR_13 = 0;

   if (VAR_9 & 0x10) {
    VAR_13 = VAR_2;
    (VAR_8->icount.brk)++;
    if (VAR_8->port.flags & VAR_0)
     FUNC_3(VAR_10);
   } else if (VAR_9 & 0x08) {
    VAR_13 = VAR_3;
    VAR_8->icount.frame++;
   } else if (VAR_9 & 0x04) {
    VAR_13 = VAR_4;
    VAR_8->icount.parity++;
   }
   FUNC_7(VAR_10, VAR_6[VAR_11 - 1],
        VAR_13);
  }
  FUNC_9(VAR_10);
 }

 if (VAR_7 != VAR_11) {
  VAR_11 = VAR_7 - VAR_11;
  VAR_7 = 0;
  FUNC_5(VAR_8, VAR_11);
 } else
  VAR_7 = 0;
}
