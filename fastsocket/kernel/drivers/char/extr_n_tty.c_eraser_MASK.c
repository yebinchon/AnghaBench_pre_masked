
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int read_head; int canon_head; int read_cnt; unsigned char* read_buf; int erasing; int read_lock; } ;


 unsigned char FUNC_0 (struct tty_struct*) ;
 unsigned char FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct tty_struct*) ;
 scalar_t__ FUNC_7 (struct tty_struct*) ;
 int VAR_0 ;
 unsigned char FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (unsigned char,struct tty_struct*) ;
 int FUNC_10 (char,struct tty_struct*) ;
 int FUNC_11 (unsigned int,int,struct tty_struct*) ;
 int FUNC_12 (struct tty_struct*) ;
 int FUNC_13 (struct tty_struct*) ;
 scalar_t__ FUNC_14 (unsigned char,struct tty_struct*) ;
 scalar_t__ FUNC_15 (unsigned char) ;
 scalar_t__ FUNC_16 (unsigned char) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_19(unsigned char VAR_1, struct tty_struct *VAR_2)
{
 enum { ERASE, WERASE, KILL } VAR_3;
 int VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7;


 if (VAR_2->read_head == VAR_2->canon_head) {

  return;
 }
 if (VAR_1 == FUNC_0(VAR_2))
  VAR_3 = ERASE;
 else if (VAR_1 == FUNC_8(VAR_2))
  VAR_3 = WERASE;
 else {
  if (!FUNC_2(VAR_2)) {
   FUNC_17(&VAR_2->read_lock, VAR_7);
   VAR_2->read_cnt -= ((VAR_2->read_head - VAR_2->canon_head) &
       (VAR_0 - 1));
   VAR_2->read_head = VAR_2->canon_head;
   FUNC_18(&VAR_2->read_lock, VAR_7);
   return;
  }
  if (!FUNC_5(VAR_2) || !FUNC_6(VAR_2) || !FUNC_4(VAR_2)) {
   FUNC_17(&VAR_2->read_lock, VAR_7);
   VAR_2->read_cnt -= ((VAR_2->read_head - VAR_2->canon_head) &
       (VAR_0 - 1));
   VAR_2->read_head = VAR_2->canon_head;
   FUNC_18(&VAR_2->read_lock, VAR_7);
   FUNC_13(VAR_2);
   FUNC_9(FUNC_1(VAR_2), VAR_2);

   if (FUNC_5(VAR_2))
    FUNC_10('\n', VAR_2);
   return;
  }
  VAR_3 = KILL;
 }

 VAR_5 = 0;

 while (VAR_2->read_head != VAR_2->canon_head) {
  VAR_4 = VAR_2->read_head;


  do {
   VAR_4 = (VAR_4 - 1) & (VAR_0-1);
   VAR_1 = VAR_2->read_buf[VAR_4];
  } while (FUNC_14(VAR_1, VAR_2) && VAR_4 != VAR_2->canon_head);


  if (FUNC_14(VAR_1, VAR_2))
   break;

  if (VAR_3 == WERASE) {

   if (FUNC_15(VAR_1) || VAR_1 == '_')
    VAR_5++;
   else if (VAR_5)
    break;
  }
  VAR_6 = (VAR_2->read_head - VAR_4) & (VAR_0-1);
  FUNC_17(&VAR_2->read_lock, VAR_7);
  VAR_2->read_head = VAR_4;
  VAR_2->read_cnt -= VAR_6;
  FUNC_18(&VAR_2->read_lock, VAR_7);
  if (FUNC_2(VAR_2)) {
   if (FUNC_7(VAR_2)) {
    if (!VAR_2->erasing) {
     FUNC_10('\\', VAR_2);
     VAR_2->erasing = 1;
    }

    FUNC_9(VAR_1, VAR_2);
    while (--VAR_6 > 0) {
     VAR_4 = (VAR_4+1) & (VAR_0-1);
     FUNC_10(VAR_2->read_buf[VAR_4], VAR_2);
     FUNC_12(VAR_2);
    }
   } else if (VAR_3 == ERASE && !FUNC_4(VAR_2)) {
    FUNC_9(FUNC_0(VAR_2), VAR_2);
   } else if (VAR_1 == '\t') {
    unsigned int VAR_8 = 0;
    int VAR_9 = 0;
    unsigned long VAR_10 = VAR_2->read_head;
    while (VAR_10 != VAR_2->canon_head) {
     VAR_10 = (VAR_10-1) & (VAR_0-1);
     VAR_1 = VAR_2->read_buf[VAR_10];
     if (VAR_1 == '\t') {
      VAR_9 = 1;
      break;
     } else if (FUNC_16(VAR_1)) {
      if (FUNC_3(VAR_2))
       VAR_8 += 2;
     } else if (!FUNC_14(VAR_1, VAR_2)) {
      VAR_8++;
     }
    }
    FUNC_11(VAR_8, VAR_9, VAR_2);
   } else {
    if (FUNC_16(VAR_1) && FUNC_3(VAR_2)) {
     FUNC_10('\b', VAR_2);
     FUNC_10(' ', VAR_2);
     FUNC_10('\b', VAR_2);
    }
    if (!FUNC_16(VAR_1) || FUNC_3(VAR_2)) {
     FUNC_10('\b', VAR_2);
     FUNC_10(' ', VAR_2);
     FUNC_10('\b', VAR_2);
    }
   }
  }
  if (VAR_3 == ERASE)
   break;
 }
 if (VAR_2->read_head == VAR_2->canon_head && FUNC_2(VAR_2))
  FUNC_13(VAR_2);
}
