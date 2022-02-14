
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; scalar_t__ hw_stopped; scalar_t__ driver_data; } ;
struct ktermios {int c_cflag; } ;
struct TYPE_6__ {int MCR; int open_wait; } ;
typedef TYPE_2__ ser_info_t ;
struct TYPE_5__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_6, struct ktermios *VAR_7)
{
 ser_info_t *VAR_8 = (ser_info_t *)VAR_6->driver_data;

 FUNC_0(VAR_8);
}
