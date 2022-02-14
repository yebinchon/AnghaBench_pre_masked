
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {scalar_t__ driver_data; } ;
struct TYPE_4__ {int flags; scalar_t__ delay_rts_before_send; } ;
struct e100_serial {size_t line; int char_time_usec; TYPE_1__ rs485; } ;
struct TYPE_5__ {int * function; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct e100_serial*) ;
 int FUNC_2 (struct e100_serial*) ;
 int FUNC_3 (struct e100_serial*) ;
 int FUNC_4 (struct e100_serial*) ;
 int FUNC_5 (struct e100_serial*,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_6 (struct e100_serial*,unsigned int*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct tty_struct*,unsigned char const*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct tty_struct*,int ) ;

__attribute__((used)) static int
FUNC_11(struct tty_struct *VAR_5,
  const unsigned char *VAR_6, int VAR_7)
{
 VAR_7 = FUNC_8(VAR_5, VAR_6, VAR_7);
 return VAR_7;
}
