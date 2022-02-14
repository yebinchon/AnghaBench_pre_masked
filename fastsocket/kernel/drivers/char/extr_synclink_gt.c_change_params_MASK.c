
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* tty; int flags; } ;
struct TYPE_11__ {int data_bits; int stop_bits; int data_rate; int parity; } ;
struct slgt_info {int timeout; int read_status_mask; int ignore_status_mask; TYPE_3__ port; TYPE_2__ params; int signals; int device_name; } ;
struct TYPE_13__ {TYPE_1__* termios; } ;
struct TYPE_10__ {unsigned int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;




 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (struct slgt_info*) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_8(struct slgt_info *VAR_20)
{
 unsigned VAR_21;
 int VAR_22;

 if (!VAR_20->port.tty || !VAR_20->port.tty->termios)
  return;
 FUNC_0(("%s change_params\n", VAR_20->device_name));

 VAR_21 = VAR_20->port.tty->termios->c_cflag;



  if (VAR_21 & VAR_5)
  VAR_20->signals |= VAR_19 + VAR_18;
 else
  VAR_20->signals &= ~(VAR_19 + VAR_18);



 switch (VAR_21 & VAR_8) {
 case 131: VAR_20->params.data_bits = 5; break;
 case 130: VAR_20->params.data_bits = 6; break;
 case 129: VAR_20->params.data_bits = 7; break;
 case 128: VAR_20->params.data_bits = 8; break;
 default: VAR_20->params.data_bits = 7; break;
 }

 VAR_20->params.stop_bits = (VAR_21 & VAR_9) ? 2 : 1;

 if (VAR_21 & VAR_16)
  VAR_20->params.parity = (VAR_21 & VAR_17) ? VAR_4 : VAR_2;
 else
  VAR_20->params.parity = VAR_3;




 VAR_22 = VAR_20->params.data_bits +
   VAR_20->params.stop_bits + 1;

 VAR_20->params.data_rate = FUNC_7(VAR_20->port.tty);

 if (VAR_20->params.data_rate) {
  VAR_20->timeout = (32*VAR_10*VAR_22) /
    VAR_20->params.data_rate;
 }
 VAR_20->timeout += VAR_10/50;

 if (VAR_21 & VAR_7)
  VAR_20->port.flags |= VAR_1;
 else
  VAR_20->port.flags &= ~VAR_1;

 if (VAR_21 & VAR_6)
  VAR_20->port.flags &= ~VAR_0;
 else
  VAR_20->port.flags |= VAR_0;



 VAR_20->read_status_mask = VAR_11;
 if (FUNC_4(VAR_20->port.tty))
  VAR_20->read_status_mask |= VAR_15 | VAR_13;
  if (FUNC_1(VAR_20->port.tty) || FUNC_5(VAR_20->port.tty))
   VAR_20->read_status_mask |= VAR_12;
 if (FUNC_3(VAR_20->port.tty))
  VAR_20->ignore_status_mask |= VAR_15 | VAR_13;
 if (FUNC_2(VAR_20->port.tty)) {
  VAR_20->ignore_status_mask |= VAR_12;



  if (FUNC_3(VAR_20->port.tty))
   VAR_20->ignore_status_mask |= VAR_14;
 }

 FUNC_6(VAR_20);
}
