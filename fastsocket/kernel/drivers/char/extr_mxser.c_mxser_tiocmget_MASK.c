
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ index; int flags; struct mxser_port* driver_data; } ;
struct mxser_port {unsigned char MCR; int slock; scalar_t__ ioaddr; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tty_struct*,struct mxser_port*,unsigned char) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_18, struct file *VAR_19)
{
 struct mxser_port *VAR_20 = VAR_18->driver_data;
 unsigned char VAR_21, VAR_22;
 unsigned long VAR_23;


 if (VAR_18->index == VAR_2)
  return -VAR_1;
 if (FUNC_4(VAR_9, &VAR_18->flags))
  return -VAR_0;

 VAR_21 = VAR_20->MCR;

 FUNC_2(&VAR_20->slock, VAR_23);
 VAR_22 = FUNC_0(VAR_20->ioaddr + VAR_12);
 if (VAR_22 & VAR_13)
  FUNC_1(VAR_18, VAR_20, VAR_22);
 FUNC_3(&VAR_20->slock, VAR_23);
 return ((VAR_21 & VAR_11) ? VAR_8 : 0) |
      ((VAR_21 & VAR_10) ? VAR_6 : 0) |
      ((VAR_22 & VAR_15) ? VAR_3 : 0) |
      ((VAR_22 & VAR_17) ? VAR_7 : 0) |
      ((VAR_22 & VAR_16) ? VAR_5 : 0) |
      ((VAR_22 & VAR_14) ? VAR_4 : 0);
}
