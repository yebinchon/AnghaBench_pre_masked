
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct acm* driver_data; } ;
struct file {int dummy; } ;
struct acm {unsigned int ctrlout; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct acm*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct acm*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_5, struct file *VAR_6,
       unsigned int VAR_7, unsigned int VAR_8)
{
 struct acm *VAR_9 = VAR_5->driver_data;
 unsigned int VAR_10;

 if (!FUNC_0(VAR_9))
  return -VAR_2;

 VAR_10 = VAR_9->ctrlout;
 VAR_7 = (VAR_7 & VAR_3 ? VAR_0 : 0) |
     (VAR_7 & VAR_4 ? VAR_1 : 0);
 VAR_8 = (VAR_8 & VAR_3 ? VAR_0 : 0) |
     (VAR_8 & VAR_4 ? VAR_1 : 0);

 VAR_10 = (VAR_10 & ~VAR_8) | VAR_7;

 if (VAR_9->ctrlout == VAR_10)
  return 0;
 return FUNC_1(VAR_9, VAR_9->ctrlout = VAR_10);
}
