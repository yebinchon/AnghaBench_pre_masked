
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct slgt_info* driver_data; } ;
struct slgt_info {int lock; int signals; int device_name; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct slgt_info*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_4, struct file *VAR_5,
      unsigned int VAR_6, unsigned int VAR_7)
{
 struct slgt_info *VAR_8 = VAR_4->driver_data;
  unsigned long VAR_9;

 FUNC_0(("%s tiocmset(%x,%x)\n", VAR_8->device_name, VAR_6, VAR_7));

 if (VAR_6 & VAR_3)
  VAR_8->signals |= VAR_1;
 if (VAR_6 & VAR_2)
  VAR_8->signals |= VAR_0;
 if (VAR_7 & VAR_3)
  VAR_8->signals &= ~VAR_1;
 if (VAR_7 & VAR_2)
  VAR_8->signals &= ~VAR_0;

 FUNC_2(&VAR_8->lock,VAR_9);
  FUNC_1(VAR_8);
 FUNC_3(&VAR_8->lock,VAR_9);
 return 0;
}
