
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; } ;
struct sirtty_cb {scalar_t__ magic; struct tty_struct* tty; } ;
struct sir_dev {struct sirtty_cb* priv; } ;
struct TYPE_2__ {int (* stop ) (struct tty_struct*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tty_struct*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sir_dev *VAR_4)
{
 struct sirtty_cb *VAR_5;
 struct tty_struct *VAR_6;


 FUNC_1(&VAR_3);

 VAR_5 = VAR_4->priv;
 if (FUNC_4(!VAR_5 || VAR_5->magic!=VAR_1)) {
  FUNC_2(&VAR_3);
  return -VAR_0;
 }

 VAR_6 = VAR_5->tty;


 FUNC_0(VAR_6, VAR_2);
 if (VAR_6->ops->stop)
  VAR_6->ops->stop(VAR_6);

 FUNC_2(&VAR_3);

 return 0;
}
