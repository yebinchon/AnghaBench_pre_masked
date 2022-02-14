
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_3__ {int owner; } ;
struct tty_driver {int flags; int num; int tty_drivers; struct ktermios** termios; struct tty_struct** ttys; TYPE_1__ cdev; int owner; int name; int minor_start; scalar_t__ major; } ;
struct ktermios {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (void**) ;
 void** FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct tty_driver*) ;
 int FUNC_12 (int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (struct tty_driver*,int,int *) ;
 int FUNC_14 (int ,int) ;

int FUNC_15(struct tty_driver *VAR_8)
{
 int VAR_9;
 int VAR_10;
 dev_t VAR_11;
 void **VAR_12 = ((void*)0);

 if (!(VAR_8->flags & VAR_2) && VAR_8->num) {
  VAR_12 = FUNC_7(VAR_8->num * 2 * sizeof(void *), VAR_1);
  if (!VAR_12)
   return -VAR_0;
 }

 if (!VAR_8->major) {
  VAR_9 = FUNC_3(&VAR_11, VAR_8->minor_start,
      VAR_8->num, VAR_8->name);
  if (!VAR_9) {
   VAR_8->major = FUNC_0(VAR_11);
   VAR_8->minor_start = FUNC_1(VAR_11);
  }
 } else {
  VAR_11 = FUNC_2(VAR_8->major, VAR_8->minor_start);
  VAR_9 = FUNC_12(VAR_11, VAR_8->num, VAR_8->name);
 }
 if (VAR_9 < 0) {
  FUNC_6(VAR_12);
  return VAR_9;
 }

 if (VAR_12) {
  VAR_8->ttys = (struct tty_struct **)VAR_12;
  VAR_8->termios = (struct ktermios **)(VAR_12 + VAR_8->num);
 } else {
  VAR_8->ttys = ((void*)0);
  VAR_8->termios = ((void*)0);
 }

 FUNC_5(&VAR_8->cdev, &VAR_6);
 VAR_8->cdev.owner = VAR_8->owner;
 VAR_9 = FUNC_4(&VAR_8->cdev, VAR_11, VAR_8->num);
 if (VAR_9) {
  FUNC_14(VAR_11, VAR_8->num);
  VAR_8->ttys = ((void*)0);
  VAR_8->termios = ((void*)0);
  FUNC_6(VAR_12);
  return VAR_9;
 }

 FUNC_9(&VAR_7);
 FUNC_8(&VAR_8->tty_drivers, &VAR_5);
 FUNC_10(&VAR_7);

 if (!(VAR_8->flags & VAR_3)) {
  for (VAR_10 = 0; VAR_10 < VAR_8->num; VAR_10++)
      FUNC_13(VAR_8, VAR_10, ((void*)0));
 }
 FUNC_11(VAR_8);
 VAR_8->flags |= VAR_4;
 return 0;
}
