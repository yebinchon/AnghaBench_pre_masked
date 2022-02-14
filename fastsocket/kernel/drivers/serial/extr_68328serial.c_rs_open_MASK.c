
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; struct m68k_serial* driver_data; int name; } ;
struct TYPE_2__ {struct tty_struct* tty; } ;
struct m68k_serial {TYPE_1__ port; int count; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty_struct*,struct file*,struct m68k_serial*) ;
 struct m68k_serial* VAR_2 ;
 scalar_t__ FUNC_1 (struct m68k_serial*,int ,char*) ;
 int FUNC_2 (struct m68k_serial*) ;

int FUNC_3(struct tty_struct *VAR_3, struct file * VAR_4)
{
 struct m68k_serial *VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = VAR_3->index;

 if (VAR_7 >= VAR_1 || VAR_7 < 0)
  return -VAR_0;

 VAR_5 = &VAR_2[VAR_7];

 if (FUNC_1(VAR_5, VAR_3->name, "rs_open"))
  return -VAR_0;

 VAR_5->count++;
 VAR_3->driver_data = VAR_5;
 VAR_5->port.tty = VAR_3;




 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_0(VAR_3, VAR_4, VAR_5);
}
