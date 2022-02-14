
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct file {int dummy; } ;
struct e100_serial {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct e100_serial*,int) ;
 int FUNC_1 (struct e100_serial*,int) ;
 int FUNC_2 (struct e100_serial*,int) ;
 int FUNC_3 (struct e100_serial*,int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct tty_struct *VAR_4, struct file *VAR_5,
  unsigned int VAR_6, unsigned int VAR_7)
{
 struct e100_serial *VAR_8 = (struct e100_serial *)VAR_4->driver_data;
 unsigned long VAR_9;

 FUNC_5(VAR_9);

 if (VAR_7 & VAR_3)
  FUNC_3(VAR_8, 0);
 if (VAR_7 & VAR_1)
  FUNC_1(VAR_8, 0);

 if (VAR_7 & VAR_2)
  FUNC_2(VAR_8, 0);
 if (VAR_7 & VAR_0)
  FUNC_0(VAR_8, 0);

 if (VAR_6 & VAR_3)
  FUNC_3(VAR_8, 1);
 if (VAR_6 & VAR_1)
  FUNC_1(VAR_8, 1);

 if (VAR_6 & VAR_2)
  FUNC_2(VAR_8, 1);
 if (VAR_6 & VAR_0)
  FUNC_0(VAR_8, 1);

 FUNC_4(VAR_9);
 return 0;
}
