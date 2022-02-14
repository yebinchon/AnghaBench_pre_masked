
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int stopped; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write ) (struct tty_struct*,char*,int) ;int (* send_xchar ) (struct tty_struct*,char) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*,char) ;
 int FUNC_3 (struct tty_struct*,char*,int) ;
 scalar_t__ FUNC_4 (struct tty_struct*,int ) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_1, char VAR_2)
{
 int VAR_3 = VAR_1->stopped;

 if (VAR_1->ops->send_xchar) {
  VAR_1->ops->send_xchar(VAR_1, VAR_2);
  return 0;
 }

 if (FUNC_4(VAR_1, 0) < 0)
  return -VAR_0;

 if (VAR_3)
  FUNC_0(VAR_1);
 VAR_1->ops->write(VAR_1, &VAR_2, 1);
 if (VAR_3)
  FUNC_1(VAR_1);
 FUNC_5(VAR_1);
 return 0;
}
