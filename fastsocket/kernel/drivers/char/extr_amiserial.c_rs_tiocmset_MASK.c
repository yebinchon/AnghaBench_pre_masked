
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; int name; struct async_struct* driver_data; } ;
struct file {int dummy; } ;
struct async_struct {int MCR; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct async_struct*,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_7, struct file *VAR_8,
         unsigned int VAR_9, unsigned int VAR_10)
{
 struct async_struct * VAR_11 = VAR_7->driver_data;
 unsigned long VAR_12;

 if (FUNC_3(VAR_11, VAR_7->name, "rs_ioctl"))
  return -VAR_1;
 if (VAR_7->flags & (1 << VAR_6))
  return -VAR_0;

 FUNC_1(VAR_12);
 if (VAR_9 & VAR_5)
  VAR_11->MCR |= VAR_3;
 if (VAR_9 & VAR_4)
  VAR_11->MCR |= VAR_2;
 if (VAR_10 & VAR_5)
  VAR_11->MCR &= ~VAR_3;
 if (VAR_10 & VAR_4)
  VAR_11->MCR &= ~VAR_2;
 FUNC_2(VAR_11->MCR);
 FUNC_0(VAR_12);
 return 0;
}
