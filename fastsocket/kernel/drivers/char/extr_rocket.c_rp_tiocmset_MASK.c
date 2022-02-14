
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct r_port* driver_data; } ;
struct TYPE_2__ {int * TxControl; int IndexAddr; } ;
struct r_port {TYPE_1__ channel; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_4, struct file *VAR_5,
      unsigned int VAR_6, unsigned int VAR_7)
{
 struct r_port *VAR_8 = VAR_4->driver_data;

 if (VAR_6 & VAR_3)
  VAR_8->channel.TxControl[3] |= VAR_1;
 if (VAR_6 & VAR_2)
  VAR_8->channel.TxControl[3] |= VAR_0;
 if (VAR_7 & VAR_3)
  VAR_8->channel.TxControl[3] &= ~VAR_1;
 if (VAR_7 & VAR_2)
  VAR_8->channel.TxControl[3] &= ~VAR_0;

 FUNC_0(VAR_8->channel.IndexAddr, VAR_8->channel.TxControl);
 return 0;
}
