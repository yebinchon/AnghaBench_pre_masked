
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int work; } ;
struct tty_struct {int ldisc_mutex; TYPE_3__ buf; TYPE_2__* ops; struct tty_ldisc* ldisc; int flags; scalar_t__ receive_room; struct tty_struct* link; } ;
struct tty_ldisc {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* set_ldisc ) (struct tty_struct*) ;} ;
struct TYPE_4__ {int num; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_ldisc*) ;
 int FUNC_1 (struct tty_ldisc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct tty_struct*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (struct tty_struct*,struct tty_ldisc*) ;
 int FUNC_11 (struct tty_struct*,struct tty_ldisc*) ;
 int FUNC_12 (struct tty_struct*) ;
 struct tty_ldisc* FUNC_13 (int) ;
 int FUNC_14 (struct tty_struct*) ;
 int FUNC_15 (struct tty_struct*,struct tty_ldisc*) ;
 int FUNC_16 (struct tty_ldisc*) ;
 int FUNC_17 (struct tty_struct*,struct tty_ldisc*) ;
 int VAR_3 ;
 int FUNC_18 (struct tty_struct*,int) ;
 int FUNC_19 (struct tty_struct*,int ) ;
 int FUNC_20 (int ,int) ;

int FUNC_21(struct tty_struct *VAR_4, int VAR_5)
{
 int VAR_6;
 struct tty_ldisc *VAR_7, *VAR_8;
 int VAR_9, VAR_10 = 0;
 struct tty_struct *VAR_11;

 VAR_8 = FUNC_13(VAR_5);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);






 VAR_11 = VAR_4->link;






 if (VAR_4->ldisc->ops->num == VAR_5) {
  FUNC_16(VAR_8);
  return 0;
 }






 FUNC_19(VAR_4, 0);

 FUNC_4(&VAR_4->ldisc_mutex);






 while (FUNC_9(VAR_2, &VAR_4->flags)) {
  FUNC_5(&VAR_4->ldisc_mutex);
  FUNC_20(VAR_3,
   FUNC_9(VAR_2, &VAR_4->flags) == 0);
  FUNC_4(&VAR_4->ldisc_mutex);
 }
 FUNC_7(VAR_2, &VAR_4->flags);






 VAR_4->receive_room = 0;

 VAR_7 = VAR_4->ldisc;
 VAR_9 = FUNC_14(VAR_4);
 if (VAR_11)
  VAR_10 = FUNC_14(VAR_11);






 FUNC_5(&VAR_4->ldisc_mutex);

 FUNC_3();

 FUNC_4(&VAR_4->ldisc_mutex);
 if (FUNC_9(VAR_1, &VAR_4->flags)) {


  FUNC_2(VAR_2, &VAR_4->flags);
  FUNC_5(&VAR_4->ldisc_mutex);
  FUNC_16(VAR_8);
  return -VAR_0;
 }


 FUNC_11(VAR_4, VAR_7);


 FUNC_10(VAR_4, VAR_8);
 FUNC_18(VAR_4, VAR_5);

 VAR_6 = FUNC_15(VAR_4, VAR_8);
 if (VAR_6 < 0) {

  FUNC_16(VAR_8);
  FUNC_17(VAR_4, VAR_7);
 }





 if (VAR_4->ldisc->ops->num != VAR_7->ops->num && VAR_4->ops->set_ldisc)
  VAR_4->ops->set_ldisc(VAR_4);

 FUNC_16(VAR_7);





 FUNC_12(VAR_4);
 if (VAR_11)
  FUNC_12(VAR_11);



 if (VAR_9)
  FUNC_6(&VAR_4->buf.work, 1);
 if (VAR_10)
  FUNC_6(&VAR_11->buf.work, 1);
 FUNC_5(&VAR_4->ldisc_mutex);
 return VAR_6;
}
