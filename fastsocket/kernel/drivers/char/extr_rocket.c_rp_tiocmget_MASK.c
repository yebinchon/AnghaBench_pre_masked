
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct r_port* driver_data; } ;
struct TYPE_3__ {unsigned int* TxControl; } ;
struct r_port {TYPE_1__ channel; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_11, struct file *VAR_12)
{
 struct r_port *VAR_13 = VAR_11->driver_data;
 unsigned int VAR_14, VAR_15, VAR_16;

 VAR_16 = FUNC_1(&VAR_13->channel);
 VAR_14 = VAR_13->channel.TxControl[3];
 VAR_15 = ((VAR_14 & VAR_4) ? VAR_10 : 0) |
  ((VAR_14 & VAR_3) ? VAR_8 : 0) |
  ((VAR_16 & VAR_0) ? VAR_5 : 0) |
  (FUNC_0(&VAR_13->channel) ? VAR_9 : 0) |
  ((VAR_16 & VAR_2) ? VAR_7 : 0) |
  ((VAR_16 & VAR_1) ? VAR_6 : 0);

 return VAR_15;
}
