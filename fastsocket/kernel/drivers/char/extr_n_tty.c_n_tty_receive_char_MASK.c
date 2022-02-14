
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int lnext; int read_cnt; scalar_t__ canon_head; scalar_t__ read_head; unsigned char* read_buf; int read_wait; int fasync; int read_lock; int canon_data; int * read_flags; int flags; scalar_t__ icanon; scalar_t__ pgrp; int process_char_map; scalar_t__ closing; int flow_stopped; scalar_t__ stopped; scalar_t__ raw; } ;


 unsigned char FUNC_0 (struct tty_struct*) ;
 unsigned char FUNC_1 (struct tty_struct*) ;
 unsigned char FUNC_2 (struct tty_struct*) ;
 unsigned char FUNC_3 (struct tty_struct*) ;
 unsigned char FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (struct tty_struct*) ;
 scalar_t__ FUNC_7 (struct tty_struct*) ;
 scalar_t__ FUNC_8 (struct tty_struct*) ;
 scalar_t__ FUNC_9 (struct tty_struct*) ;
 scalar_t__ FUNC_10 (struct tty_struct*) ;
 scalar_t__ FUNC_11 (struct tty_struct*) ;
 scalar_t__ FUNC_12 (struct tty_struct*) ;
 unsigned char FUNC_13 (struct tty_struct*) ;
 unsigned char FUNC_14 (struct tty_struct*) ;
 scalar_t__ FUNC_15 (struct tty_struct*) ;
 scalar_t__ FUNC_16 (struct tty_struct*) ;
 scalar_t__ FUNC_17 (struct tty_struct*) ;
 scalar_t__ FUNC_18 (struct tty_struct*) ;
 scalar_t__ FUNC_19 (struct tty_struct*) ;
 int FUNC_20 (struct tty_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_21 (struct tty_struct*) ;
 unsigned char FUNC_22 (struct tty_struct*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char FUNC_23 (struct tty_struct*) ;
 unsigned char FUNC_24 (struct tty_struct*) ;
 unsigned char FUNC_25 (struct tty_struct*) ;
 scalar_t__ VAR_6 ;
 unsigned char FUNC_26 (struct tty_struct*) ;
 unsigned char VAR_7 ;
 int FUNC_27 (unsigned char,struct tty_struct*) ;
 int FUNC_28 (char,struct tty_struct*) ;
 int FUNC_29 (struct tty_struct*) ;
 int FUNC_30 (unsigned char,struct tty_struct*) ;
 int FUNC_31 (struct tty_struct*) ;
 int FUNC_32 (int *,int ,int ) ;
 int FUNC_33 (scalar_t__,int,int) ;
 int FUNC_34 (struct tty_struct*) ;
 int FUNC_35 (struct tty_struct*) ;
 int FUNC_36 (char,struct tty_struct*) ;
 int FUNC_37 (unsigned char,struct tty_struct*) ;
 int FUNC_38 (unsigned char,struct tty_struct*) ;
 int FUNC_39 (scalar_t__,int *) ;
 int FUNC_40 (int *,unsigned long) ;
 int FUNC_41 (int *,unsigned long) ;
 int FUNC_42 (struct tty_struct*) ;
 int FUNC_43 (struct tty_struct*) ;
 int FUNC_44 (unsigned char,int ) ;
 unsigned char FUNC_45 (unsigned char) ;
 int FUNC_46 (struct tty_struct*) ;
 scalar_t__ FUNC_47 (int *) ;
 int FUNC_48 (int *) ;

__attribute__((used)) static inline void FUNC_49(struct tty_struct *VAR_8, unsigned char VAR_9)
{
 unsigned long VAR_10;
 int VAR_11;

 if (VAR_8->raw) {
  FUNC_37(VAR_9, VAR_8);
  return;
 }

 if (FUNC_8(VAR_8))
  VAR_9 &= 0x7f;
 if (FUNC_9(VAR_8) && FUNC_18(VAR_8))
  VAR_9 = FUNC_45(VAR_9);

 if (VAR_8->stopped && !VAR_8->flow_stopped && FUNC_11(VAR_8) &&
     FUNC_10(VAR_8) && VAR_9 != FUNC_23(VAR_8) && VAR_9 != FUNC_24(VAR_8) &&
     VAR_9 != FUNC_4(VAR_8) && VAR_9 != FUNC_21(VAR_8) && VAR_9 != FUNC_25(VAR_8)) {
  FUNC_42(VAR_8);
  FUNC_35(VAR_8);
 }

 if (VAR_8->closing) {
  if (FUNC_11(VAR_8)) {
   if (VAR_9 == FUNC_23(VAR_8)) {
    FUNC_42(VAR_8);
    FUNC_35(VAR_8);
   } else if (VAR_9 == FUNC_24(VAR_8))
    FUNC_43(VAR_8);
  }
  return;
 }







 if (!FUNC_44(VAR_9, VAR_8->process_char_map) || VAR_8->lnext) {
  VAR_8->lnext = 0;
  VAR_11 = (VAR_9 == (unsigned char) '\377' && FUNC_12(VAR_8)) ? 1 : 0;
  if (VAR_8->read_cnt >= (VAR_0 - VAR_11 - 1)) {

   if (FUNC_15(VAR_8))
    FUNC_36('\a', VAR_8);
   return;
  }
  if (FUNC_15(VAR_8)) {
   FUNC_31(VAR_8);

   if (VAR_8->canon_head == VAR_8->read_head)
    FUNC_29(VAR_8);
   FUNC_27(VAR_9, VAR_8);
   FUNC_35(VAR_8);
  }
  if (VAR_11)
   FUNC_37(VAR_9, VAR_8);
  FUNC_37(VAR_9, VAR_8);
  return;
 }

 if (FUNC_11(VAR_8)) {
  if (VAR_9 == FUNC_23(VAR_8)) {
   FUNC_42(VAR_8);
   FUNC_35(VAR_8);
   return;
  }
  if (VAR_9 == FUNC_24(VAR_8)) {
   FUNC_43(VAR_8);
   return;
  }
 }

 if (FUNC_19(VAR_8)) {
  int VAR_12;
  VAR_12 = VAR_2;
  if (VAR_9 == FUNC_4(VAR_8))
   goto send_signal;
  VAR_12 = VAR_4;
  if (VAR_9 == FUNC_21(VAR_8))
   goto send_signal;
  VAR_12 = VAR_5;
  if (VAR_9 == FUNC_25(VAR_8)) {
send_signal:





   if (!FUNC_20(VAR_8)) {
    FUNC_34(VAR_8);
    FUNC_46(VAR_8);
   }
   if (FUNC_11(VAR_8))
    FUNC_42(VAR_8);
   if (FUNC_15(VAR_8)) {
    FUNC_27(VAR_9, VAR_8);
    FUNC_35(VAR_8);
   }
   if (VAR_8->pgrp)
    FUNC_33(VAR_8->pgrp, VAR_12, 1);
   return;
  }
 }

 if (VAR_9 == '\r') {
  if (FUNC_6(VAR_8))
   return;
  if (FUNC_5(VAR_8))
   VAR_9 = '\n';
 } else if (VAR_9 == '\n' && FUNC_7(VAR_8))
  VAR_9 = '\r';

 if (VAR_8->icanon) {
  if (VAR_9 == FUNC_3(VAR_8) || VAR_9 == FUNC_13(VAR_8) ||
      (VAR_9 == FUNC_26(VAR_8) && FUNC_18(VAR_8))) {
   FUNC_30(VAR_9, VAR_8);
   FUNC_35(VAR_8);
   return;
  }
  if (VAR_9 == FUNC_14(VAR_8) && FUNC_18(VAR_8)) {
   VAR_8->lnext = 1;
   if (FUNC_15(VAR_8)) {
    FUNC_31(VAR_8);
    if (FUNC_16(VAR_8)) {
     FUNC_28('^', VAR_8);
     FUNC_28('\b', VAR_8);
     FUNC_35(VAR_8);
    }
   }
   return;
  }
  if (VAR_9 == FUNC_22(VAR_8) && FUNC_15(VAR_8) &&
      FUNC_18(VAR_8)) {
   unsigned long VAR_13 = VAR_8->canon_head;

   FUNC_31(VAR_8);
   FUNC_27(VAR_9, VAR_8);
   FUNC_28('\n', VAR_8);
   while (VAR_13 != VAR_8->read_head) {
    FUNC_27(VAR_8->read_buf[VAR_13], VAR_8);
    VAR_13 = (VAR_13+1) & (VAR_0-1);
   }
   FUNC_35(VAR_8);
   return;
  }
  if (VAR_9 == '\n') {
   if (VAR_8->read_cnt >= VAR_0) {
    if (FUNC_15(VAR_8))
     FUNC_36('\a', VAR_8);
    return;
   }
   if (FUNC_15(VAR_8) || FUNC_17(VAR_8)) {
    FUNC_28('\n', VAR_8);
    FUNC_35(VAR_8);
   }
   goto handle_newline;
  }
  if (VAR_9 == FUNC_0(VAR_8)) {
   if (VAR_8->read_cnt >= VAR_0)
    return;
   if (VAR_8->canon_head != VAR_8->read_head)
    FUNC_39(VAR_6, &VAR_8->flags);
   VAR_9 = VAR_7;
   goto handle_newline;
  }
  if ((VAR_9 == FUNC_2(VAR_8)) ||
      (VAR_9 == FUNC_1(VAR_8) && FUNC_18(VAR_8))) {
   VAR_11 = (VAR_9 == (unsigned char) '\377' && FUNC_12(VAR_8))
     ? 1 : 0;
   if (VAR_8->read_cnt >= (VAR_0 - VAR_11)) {
    if (FUNC_15(VAR_8))
     FUNC_36('\a', VAR_8);
    return;
   }



   if (FUNC_15(VAR_8)) {

    if (VAR_8->canon_head == VAR_8->read_head)
     FUNC_29(VAR_8);
    FUNC_27(VAR_9, VAR_8);
    FUNC_35(VAR_8);
   }




   if (VAR_11)
    FUNC_37(VAR_9, VAR_8);

handle_newline:
   FUNC_40(&VAR_8->read_lock, VAR_10);
   FUNC_39(VAR_8->read_head, VAR_8->read_flags);
   FUNC_38(VAR_9, VAR_8);
   VAR_8->canon_head = VAR_8->read_head;
   VAR_8->canon_data++;
   FUNC_41(&VAR_8->read_lock, VAR_10);
   FUNC_32(&VAR_8->fasync, VAR_3, VAR_1);
   if (FUNC_47(&VAR_8->read_wait))
    FUNC_48(&VAR_8->read_wait);
   return;
  }
 }

 VAR_11 = (VAR_9 == (unsigned char) '\377' && FUNC_12(VAR_8)) ? 1 : 0;
 if (VAR_8->read_cnt >= (VAR_0 - VAR_11 - 1)) {

  if (FUNC_15(VAR_8))
   FUNC_36('\a', VAR_8);
  return;
 }
 if (FUNC_15(VAR_8)) {
  FUNC_31(VAR_8);
  if (VAR_9 == '\n')
   FUNC_28('\n', VAR_8);
  else {

   if (VAR_8->canon_head == VAR_8->read_head)
    FUNC_29(VAR_8);
   FUNC_27(VAR_9, VAR_8);
  }
  FUNC_35(VAR_8);
 }

 if (VAR_11)
  FUNC_37(VAR_9, VAR_8);

 FUNC_37(VAR_9, VAR_8);
}
