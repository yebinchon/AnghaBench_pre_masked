
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int output_lock; TYPE_1__* ops; int column; int canon_column; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* write ) (struct tty_struct*,unsigned char const*,int) ;} ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (unsigned char,struct tty_struct*) ;
 int FUNC_6 (unsigned char) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct tty_struct*,unsigned char const*,int) ;
 int FUNC_10 (struct tty_struct*) ;

__attribute__((used)) static ssize_t FUNC_11(struct tty_struct *VAR_0,
        const unsigned char *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 int VAR_4;
 const unsigned char *VAR_5;

 FUNC_7(&VAR_0->output_lock);

 VAR_3 = FUNC_10(VAR_0);
 if (!VAR_3) {
  FUNC_8(&VAR_0->output_lock);
  return 0;
 }
 if (VAR_2 > VAR_3)
  VAR_2 = VAR_3;

 for (VAR_4 = 0, VAR_5 = VAR_1; VAR_4 < VAR_2; VAR_4++, VAR_5++) {
  unsigned char VAR_6 = *VAR_5;

  switch (VAR_6) {
  case '\n':
   if (FUNC_3(VAR_0))
    VAR_0->column = 0;
   if (FUNC_2(VAR_0))
    goto break_out;
   VAR_0->canon_column = VAR_0->column;
   break;
  case '\r':
   if (FUNC_4(VAR_0) && VAR_0->column == 0)
    goto break_out;
   if (FUNC_0(VAR_0))
    goto break_out;
   VAR_0->canon_column = VAR_0->column = 0;
   break;
  case '\t':
   goto break_out;
  case '\b':
   if (VAR_0->column > 0)
    VAR_0->column--;
   break;
  default:
   if (!FUNC_6(VAR_6)) {
    if (FUNC_1(VAR_0))
     goto break_out;
    if (!FUNC_5(VAR_6, VAR_0))
     VAR_0->column++;
   }
   break;
  }
 }
break_out:
 VAR_4 = VAR_0->ops->write(VAR_0, VAR_1, VAR_4);

 FUNC_8(&VAR_0->output_lock);
 return VAR_4;
}
