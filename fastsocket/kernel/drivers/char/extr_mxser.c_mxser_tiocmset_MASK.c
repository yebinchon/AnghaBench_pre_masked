
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ index; int flags; struct mxser_port* driver_data; } ;
struct mxser_port {int slock; scalar_t__ ioaddr; int MCR; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_9, struct file *VAR_10,
  unsigned int VAR_11, unsigned int VAR_12)
{
 struct mxser_port *VAR_13 = VAR_9->driver_data;
 unsigned long VAR_14;


 if (VAR_9->index == VAR_2)
  return -VAR_1;
 if (FUNC_3(VAR_5, &VAR_9->flags))
  return -VAR_0;

 FUNC_1(&VAR_13->slock, VAR_14);

 if (VAR_11 & VAR_4)
  VAR_13->MCR |= VAR_8;
 if (VAR_11 & VAR_3)
  VAR_13->MCR |= VAR_7;

 if (VAR_12 & VAR_4)
  VAR_13->MCR &= ~VAR_8;
 if (VAR_12 & VAR_3)
  VAR_13->MCR &= ~VAR_7;

 FUNC_0(VAR_13->MCR, VAR_13->ioaddr + VAR_6);
 FUNC_2(&VAR_13->slock, VAR_14);
 return 0;
}
