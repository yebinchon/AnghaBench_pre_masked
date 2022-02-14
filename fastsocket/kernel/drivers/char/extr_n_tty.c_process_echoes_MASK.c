
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int echo_cnt; unsigned char* echo_buf; int echo_pos; unsigned int canon_column; unsigned int column; TYPE_1__* ops; int output_lock; int echo_lock; scalar_t__ echo_overrun; int flags; } ;
struct TYPE_2__ {int (* flush_chars ) (struct tty_struct*) ;} ;






 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char,struct tty_struct*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct tty_struct*,unsigned char const) ;
 int FUNC_7 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_8(struct tty_struct *VAR_2)
{
 int VAR_3, VAR_4;
 unsigned char VAR_5;
 unsigned char *VAR_6, *VAR_7;

 if (!VAR_2->echo_cnt)
  return;

 FUNC_2(&VAR_2->output_lock);
 FUNC_2(&VAR_2->echo_lock);

 VAR_3 = FUNC_7(VAR_2);

 VAR_7 = VAR_2->echo_buf + VAR_0;
 VAR_6 = VAR_2->echo_buf + VAR_2->echo_pos;
 VAR_4 = VAR_2->echo_cnt;
 while (VAR_4 > 0) {
  VAR_5 = *VAR_6;
  if (VAR_5 == 128) {
   unsigned char VAR_8;
   unsigned char *VAR_9;
   int VAR_10 = 0;






   VAR_9 = VAR_6 + 1;
   if (VAR_9 == VAR_7)
    VAR_9 -= VAR_0;
   VAR_8 = *VAR_9;

   switch (VAR_8) {
    unsigned int VAR_11, VAR_12;

   case 131:
    if (++VAR_9 == VAR_7)
     VAR_9 -= VAR_0;
    VAR_11 = *VAR_9;
    if (!(VAR_11 & 0x80))
     VAR_11 += VAR_2->canon_column;
    VAR_12 = 8 - (VAR_11 & 7);

    if (VAR_12 > VAR_3) {
     VAR_10 = 1;
     break;
    }
    VAR_3 -= VAR_12;
    while (VAR_12--) {
     FUNC_6(VAR_2, '\b');
     if (VAR_2->column > 0)
      VAR_2->column--;
    }
    VAR_6 += 3;
    VAR_4 -= 3;
    break;

   case 129:
    VAR_2->canon_column = VAR_2->column;
    VAR_6 += 2;
    VAR_4 -= 2;
    break;

   case 130:
    if (VAR_2->column > 0)
     VAR_2->column--;
    VAR_6 += 2;
    VAR_4 -= 2;
    break;

   case 128:

    if (!VAR_3) {
     VAR_10 = 1;
     break;
    }
    FUNC_6(VAR_2, 128);
    VAR_2->column++;
    VAR_3--;
    VAR_6 += 2;
    VAR_4 -= 2;
    break;

   default:
    if (VAR_3 < 2) {
     VAR_10 = 1;
     break;
    }
    FUNC_6(VAR_2, '^');
    FUNC_6(VAR_2, VAR_8 ^ 0100);
    VAR_2->column += 2;
    VAR_3 -= 2;
    VAR_6 += 2;
    VAR_4 -= 2;
   }

   if (VAR_10)
    break;
  } else {
   if (FUNC_0(VAR_2) &&
       !(FUNC_5(VAR_1, &VAR_2->flags))) {
    int VAR_13 = FUNC_1(VAR_5, VAR_2, VAR_3);
    if (VAR_13 < 0)
     break;
    VAR_3 -= VAR_13;
   } else {
    if (!VAR_3)
     break;
    FUNC_6(VAR_2, VAR_5);
    VAR_3 -= 1;
   }
   VAR_6 += 1;
   VAR_4 -= 1;
  }


  if (VAR_6 >= VAR_7)
   VAR_6 -= VAR_0;
 }

 if (VAR_4 == 0) {
  VAR_2->echo_pos = 0;
  VAR_2->echo_cnt = 0;
  VAR_2->echo_overrun = 0;
 } else {
  int VAR_14 = VAR_2->echo_cnt - VAR_4;
  VAR_2->echo_pos += VAR_14;
  VAR_2->echo_pos &= VAR_0 - 1;
  VAR_2->echo_cnt = VAR_4;
  if (VAR_14 > 0)
   VAR_2->echo_overrun = 0;
 }

 FUNC_3(&VAR_2->echo_lock);
 FUNC_3(&VAR_2->output_lock);

 if (VAR_2->ops->flush_chars)
  VAR_2->ops->flush_chars(VAR_2);
}
