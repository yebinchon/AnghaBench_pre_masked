
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int paste_wait; } ;
struct tty_struct {TYPE_2__* ldisc; int receive_room; int flags; struct vc_data* driver_data; } ;
struct tty_ldisc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* receive_buf ) (struct tty_struct*,scalar_t__,int *,unsigned int) ;} ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int VAR_3 ;
 unsigned int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct tty_struct*,scalar_t__,int *,unsigned int) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (struct tty_ldisc*) ;
 struct tty_ldisc* FUNC_13 (struct tty_struct*) ;
 int VAR_6 ;

int FUNC_14(struct tty_struct *VAR_7)
{
 struct vc_data *VAR_8 = VAR_7->driver_data;
 int VAR_9 = 0;
 unsigned int VAR_10;
 struct tty_ldisc *VAR_11;
 FUNC_0(VAR_6, VAR_3);

 FUNC_2();
 FUNC_5();
 FUNC_6();

 VAR_11 = FUNC_13(VAR_7);

 FUNC_3(&VAR_8->paste_wait, &VAR_6);
 while (VAR_4 && VAR_5 > VAR_9) {
  FUNC_9(VAR_0);
  if (FUNC_11(VAR_2, &VAR_7->flags)) {
   FUNC_8();
   continue;
  }
  VAR_10 = VAR_5 - VAR_9;
  VAR_10 = FUNC_4(VAR_10, VAR_7->receive_room);
  VAR_7->ldisc->ops->receive_buf(VAR_7, VAR_4 + VAR_9,
        ((void*)0), VAR_10);
  VAR_9 += VAR_10;
 }
 FUNC_7(&VAR_8->paste_wait, &VAR_6);
 FUNC_1(VAR_1);

 FUNC_12(VAR_11);
 return 0;
}
