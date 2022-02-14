
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct winsize {int dummy; } ;
struct user_termios {int c_cflag; } ;
struct tty {size_t t_line; struct winsize t_winsize; } ;
struct termios32 {int c_cflag; } ;
typedef int proc_t ;
typedef int dev_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int (* l_ioctl ) (struct tty*,int,scalar_t__,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tty** VAR_3 ;
 TYPE_1__* VAR_4 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct tty*,int,scalar_t__,int,int ) ;
 int FUNC_2 (struct tty*,int,scalar_t__,int,int ) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;

int
FUNC_5(dev_t VAR_5, u_long VAR_6, caddr_t VAR_7, int VAR_8, proc_t VAR_9)
{
 int VAR_10 = 0;
 struct tty *VAR_11 = VAR_3[FUNC_0(VAR_5)];
 struct winsize *VAR_12;

 FUNC_3(VAR_11);

 switch (VAR_6) {
 case 135:
  VAR_12 = (struct winsize *) VAR_7;
  *VAR_12 = VAR_11->t_winsize;
  break;

 case 128:




  VAR_10 = VAR_1;
  break;


 case 130:
 case 132:
 case 134:
  {
   struct termios32 *VAR_13 = (struct termios32 *)VAR_7;
   VAR_13->c_cflag |= VAR_0;

  }
  goto fallthrough;
 case 129:
 case 131:
 case 133:
  {
   struct user_termios *VAR_14 = (struct user_termios *)VAR_7;
   VAR_14->c_cflag |= VAR_0;

  }
fallthrough:
 default:
  VAR_10 = (*VAR_4[VAR_11->t_line].l_ioctl) (VAR_11, VAR_6, VAR_7, VAR_8, VAR_9);
  if (VAR_2 != VAR_10)
   break;
  VAR_10 = FUNC_2(VAR_11, VAR_6, VAR_7, VAR_8, VAR_9);
  break;
 }

 FUNC_4(VAR_11);

 return (VAR_10);
}
