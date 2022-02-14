
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct tty_struct {int termios; } ;
struct TYPE_7__ {int data; int sigvalue; int signal; } ;
struct stliport {TYPE_1__ asig; int sigs; int state; } ;
struct stlibrd {int dummy; } ;
typedef int asysigs_t ;
typedef TYPE_1__ asyport_t ;
typedef TYPE_1__ asynotify_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct stlibrd*,struct stliport*,int ,TYPE_1__*,int,int) ;
 int FUNC_3 (struct tty_struct*,struct stliport*,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct stlibrd*,struct stliport*,int ,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct tty_struct *VAR_10,
    struct stlibrd *VAR_11, struct stliport *VAR_12)
{
 asynotify_t VAR_13;
 asyport_t VAR_14;
 int VAR_15;

 if ((VAR_15 = FUNC_6(VAR_11, VAR_12, 0, 1)) < 0)
  return VAR_15;

 FUNC_0(&VAR_13, 0, sizeof(asynotify_t));
 VAR_13.data = (VAR_7 | VAR_6 | VAR_5 | VAR_4);
 VAR_13.signal = VAR_8;
 if ((VAR_15 = FUNC_2(VAR_11, VAR_12, VAR_1, &VAR_13,
     sizeof(asynotify_t), 0)) < 0)
  return VAR_15;

 FUNC_3(VAR_10, VAR_12, &VAR_14, VAR_10->termios);
 if ((VAR_15 = FUNC_2(VAR_11, VAR_12, VAR_2, &VAR_14,
     sizeof(asyport_t), 0)) < 0)
  return VAR_15;

 FUNC_1(VAR_9, &VAR_12->state);
 if ((VAR_15 = FUNC_2(VAR_11, VAR_12, VAR_0, &VAR_12->asig,
     sizeof(asysigs_t), 1)) < 0)
  return VAR_15;
 if (FUNC_7(VAR_9, &VAR_12->state))
  VAR_12->sigs = FUNC_5(VAR_12->asig.sigvalue);
 FUNC_4(&VAR_12->asig, 1, 1);
 if ((VAR_15 = FUNC_2(VAR_11, VAR_12, VAR_3, &VAR_12->asig,
     sizeof(asysigs_t), 0)) < 0)
  return VAR_15;

 return 0;
}
