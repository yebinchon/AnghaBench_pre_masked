
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tcflag_t ;
struct TYPE_6__ {TYPE_2__* tty; } ;
struct e100_serial {int char_time_usec; int baud; int flush_time_usec; TYPE_3__ port; } ;
struct TYPE_5__ {TYPE_1__* termios; } ;
struct TYPE_4__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct e100_serial * VAR_5)
{
 tcflag_t VAR_6 = VAR_5->port.tty->termios->c_cflag;
 int VAR_7;



 if ((VAR_6 & VAR_1) == VAR_0)
  VAR_7 = 9;
 else
  VAR_7 = 10;

 if (VAR_6 & VAR_2)
  VAR_7++;

 if (VAR_6 & VAR_4)
  VAR_7++;


 VAR_5->char_time_usec = ((VAR_7 * 1000000) / VAR_5->baud) + 1;
 VAR_5->flush_time_usec = 4*VAR_5->char_time_usec;
 if (VAR_5->flush_time_usec < VAR_3)
  VAR_5->flush_time_usec = VAR_3;

}
