
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int icanon; int raw; int real_raw; int read_wait; int write_wait; TYPE_2__* driver; int * process_char_map; int flags; scalar_t__ read_cnt; scalar_t__ erasing; scalar_t__ canon_data; int read_tail; int canon_head; int read_flags; TYPE_1__* termios; } ;
struct ktermios {int c_lflag; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int c_lflag; } ;


 int FUNC_0 (int) ;
 char FUNC_1 (struct tty_struct*) ;
 char FUNC_2 (struct tty_struct*) ;
 char FUNC_3 (struct tty_struct*) ;
 char FUNC_4 (struct tty_struct*) ;
 int VAR_0 ;
 char FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct tty_struct*) ;
 scalar_t__ FUNC_7 (struct tty_struct*) ;
 scalar_t__ FUNC_8 (struct tty_struct*) ;
 scalar_t__ FUNC_9 (struct tty_struct*) ;
 scalar_t__ FUNC_10 (struct tty_struct*) ;
 scalar_t__ FUNC_11 (struct tty_struct*) ;
 int FUNC_12 (struct tty_struct*) ;
 scalar_t__ FUNC_13 (struct tty_struct*) ;
 scalar_t__ FUNC_14 (struct tty_struct*) ;
 scalar_t__ FUNC_15 (struct tty_struct*) ;
 scalar_t__ FUNC_16 (struct tty_struct*) ;
 char FUNC_17 (struct tty_struct*) ;
 char FUNC_18 (struct tty_struct*) ;
 scalar_t__ FUNC_19 (struct tty_struct*) ;
 scalar_t__ FUNC_20 (struct tty_struct*) ;
 scalar_t__ FUNC_21 (struct tty_struct*) ;
 scalar_t__ FUNC_22 (struct tty_struct*) ;
 char FUNC_23 (struct tty_struct*) ;
 char FUNC_24 (struct tty_struct*) ;
 char FUNC_25 (struct tty_struct*) ;
 char FUNC_26 (struct tty_struct*) ;
 char FUNC_27 (struct tty_struct*) ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_28 (struct tty_struct*) ;
 int VAR_3 ;
 int FUNC_29 (int ,int *) ;
 int FUNC_30 (int *,int ,int) ;
 int FUNC_31 (struct tty_struct*) ;
 int FUNC_32 (char,int *) ;
 scalar_t__ FUNC_33 (int ,int *) ;
 int FUNC_34 (int *) ;

__attribute__((used)) static void FUNC_35(struct tty_struct *VAR_4, struct ktermios *VAR_5)
{
 int VAR_6 = 1;
 FUNC_0(!VAR_4);

 if (VAR_5)
  VAR_6 = (VAR_5->c_lflag ^ VAR_4->termios->c_lflag) & VAR_0;
 if (VAR_6) {
  FUNC_30(&VAR_4->read_flags, 0, sizeof VAR_4->read_flags);
  VAR_4->canon_head = VAR_4->read_tail;
  VAR_4->canon_data = 0;
  VAR_4->erasing = 0;
 }

 if (VAR_6 && !FUNC_20(VAR_4) && VAR_4->read_cnt)
  FUNC_34(&VAR_4->read_wait);

 VAR_4->icanon = (FUNC_20(VAR_4) != 0);
 if (FUNC_33(VAR_2, &VAR_4->flags)) {
  VAR_4->raw = 1;
  VAR_4->real_raw = 1;
  FUNC_31(VAR_4);
  return;
 }
 if (FUNC_13(VAR_4) || FUNC_14(VAR_4) || FUNC_9(VAR_4) ||
     FUNC_7(VAR_4) || FUNC_11(VAR_4) || FUNC_20(VAR_4) ||
     FUNC_15(VAR_4) || FUNC_22(VAR_4) || FUNC_19(VAR_4) ||
     FUNC_16(VAR_4)) {
  FUNC_30(VAR_4->process_char_map, 0, 256/8);

  if (FUNC_9(VAR_4) || FUNC_7(VAR_4))
   FUNC_32('\r', VAR_4->process_char_map);
  if (FUNC_11(VAR_4))
   FUNC_32('\n', VAR_4->process_char_map);

  if (FUNC_20(VAR_4)) {
   FUNC_32(FUNC_4(VAR_4), VAR_4->process_char_map);
   FUNC_32(FUNC_17(VAR_4), VAR_4->process_char_map);
   FUNC_32(FUNC_1(VAR_4), VAR_4->process_char_map);
   FUNC_32('\n', VAR_4->process_char_map);
   FUNC_32(FUNC_3(VAR_4), VAR_4->process_char_map);
   if (FUNC_21(VAR_4)) {
    FUNC_32(FUNC_28(VAR_4),
     VAR_4->process_char_map);
    FUNC_32(FUNC_18(VAR_4),
     VAR_4->process_char_map);
    FUNC_32(FUNC_2(VAR_4),
     VAR_4->process_char_map);
    if (FUNC_19(VAR_4))
     FUNC_32(FUNC_24(VAR_4),
      VAR_4->process_char_map);
   }
  }
  if (FUNC_15(VAR_4)) {
   FUNC_32(FUNC_25(VAR_4), VAR_4->process_char_map);
   FUNC_32(FUNC_26(VAR_4), VAR_4->process_char_map);
  }
  if (FUNC_22(VAR_4)) {
   FUNC_32(FUNC_5(VAR_4), VAR_4->process_char_map);
   FUNC_32(FUNC_23(VAR_4), VAR_4->process_char_map);
   FUNC_32(FUNC_27(VAR_4), VAR_4->process_char_map);
  }
  FUNC_29(VAR_3, VAR_4->process_char_map);
  VAR_4->raw = 0;
  VAR_4->real_raw = 0;
 } else {
  VAR_4->raw = 1;
  if ((FUNC_8(VAR_4) || (!FUNC_6(VAR_4) && !FUNC_16(VAR_4))) &&
      (FUNC_10(VAR_4) || !FUNC_12(VAR_4)) &&
      (VAR_4->driver->flags & VAR_1))
   VAR_4->real_raw = 1;
  else
   VAR_4->real_raw = 0;
 }
 FUNC_31(VAR_4);

 FUNC_34(&VAR_4->write_wait);
 FUNC_34(&VAR_4->read_wait);
}
