
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; int name; struct async_struct* driver_data; } ;
struct file {int dummy; } ;
struct async_struct {unsigned char MCR; } ;
struct TYPE_2__ {unsigned char pra; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct async_struct*,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_14, struct file *VAR_15)
{
 struct async_struct * VAR_16 = VAR_14->driver_data;
 unsigned char VAR_17, VAR_18;
 unsigned long VAR_19;

 if (FUNC_2(VAR_16, VAR_14->name, "rs_ioctl"))
  return -VAR_1;
 if (VAR_14->flags & (1 << VAR_12))
  return -VAR_0;

 VAR_17 = VAR_16->MCR;
 FUNC_1(VAR_19);
 VAR_18 = VAR_13.pra;
 FUNC_0(VAR_19);
 return ((VAR_17 & VAR_6) ? VAR_11 : 0)
  | ((VAR_17 & VAR_5) ? VAR_10 : 0)
  | (!(VAR_18 & VAR_3) ? VAR_7 : 0)
  | (!(VAR_18 & VAR_4) ? VAR_9 : 0)
  | (!(VAR_18 & VAR_2) ? VAR_8 : 0);
}
