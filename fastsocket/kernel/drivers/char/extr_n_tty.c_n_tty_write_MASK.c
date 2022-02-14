
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int flags; scalar_t__ fasync; int write_wait; TYPE_3__* ops; TYPE_2__* link; } ;
struct file {int f_flags; TYPE_1__* f_op; } ;
typedef int ssize_t ;
struct TYPE_6__ {int (* write ) (struct tty_struct*,unsigned char const*,size_t) ;int (* flush_chars ) (struct tty_struct*) ;} ;
struct TYPE_5__ {int count; } ;
struct TYPE_4__ {scalar_t__ write; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_8 ;
 int FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (int,struct tty_struct*) ;
 int FUNC_7 (struct tty_struct*,unsigned char const*,size_t) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct tty_struct*) ;
 int FUNC_14 (struct tty_struct*,unsigned char const*,size_t) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (struct tty_struct*) ;
 scalar_t__ FUNC_17 (struct file*) ;
 int VAR_10 ;

__attribute__((used)) static ssize_t FUNC_18(struct tty_struct *VAR_11, struct file *VAR_12,
      const unsigned char *VAR_13, size_t VAR_14)
{
 const unsigned char *VAR_15 = VAR_13;
 FUNC_0(VAR_10, VAR_8);
 int VAR_16;
 ssize_t VAR_17 = 0;


 if (FUNC_1(VAR_11) && VAR_12->f_op->write != VAR_9) {
  VAR_17 = FUNC_16(VAR_11);
  if (VAR_17)
   return VAR_17;
 }


 FUNC_5(VAR_11);

 FUNC_4(&VAR_11->write_wait, &VAR_10);
 while (1) {
  FUNC_11(VAR_4);
  if (FUNC_12(VAR_8)) {
   VAR_17 = -VAR_2;
   break;
  }
  if (FUNC_17(VAR_12) || (VAR_11->link && !VAR_11->link->count)) {
   VAR_17 = -VAR_1;
   break;
  }
  if (FUNC_2(VAR_11) && !(FUNC_15(VAR_7, &VAR_11->flags))) {
   while (VAR_14 > 0) {
    ssize_t VAR_18 = FUNC_7(VAR_11, VAR_15, VAR_14);
    if (VAR_18 < 0) {
     if (VAR_18 == -VAR_0)
      break;
     VAR_17 = VAR_18;
     goto break_out;
    }
    VAR_15 += VAR_18;
    VAR_14 -= VAR_18;
    if (VAR_14 == 0)
     break;
    VAR_16 = *VAR_15;
    if (FUNC_6(VAR_16, VAR_11) < 0)
     break;
    VAR_15++; VAR_14--;
   }
   if (VAR_11->ops->flush_chars)
    VAR_11->ops->flush_chars(VAR_11);
  } else {
   while (VAR_14 > 0) {
    VAR_16 = VAR_11->ops->write(VAR_11, VAR_15, VAR_14);
    if (VAR_16 < 0) {
     VAR_17 = VAR_16;
     goto break_out;
    }
    if (!VAR_16)
     break;
    VAR_15 += VAR_16;
    VAR_14 -= VAR_16;
   }
  }
  if (!VAR_14)
   break;
  if (VAR_12->f_flags & VAR_3) {
   VAR_17 = -VAR_0;
   break;
  }
  FUNC_9();
 }
break_out:
 FUNC_3(VAR_5);
 FUNC_8(&VAR_11->write_wait, &VAR_10);
 if (VAR_15 - VAR_13 != VAR_14 && VAR_11->fasync)
  FUNC_10(VAR_6, &VAR_11->flags);
 return (VAR_15 - VAR_13) ? VAR_15 - VAR_13 : VAR_17;
}
