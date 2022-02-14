
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct smd_tty_info* driver_data; } ;
struct smd_tty_info {scalar_t__ open_count; scalar_t__ ch; int wake_lock; scalar_t__ tty; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_1, struct file *VAR_2)
{
 struct smd_tty_info *VAR_3 = VAR_1->driver_data;

 if (VAR_3 == 0)
  return;

 FUNC_0(&VAR_0);
 if (--VAR_3->open_count == 0) {
  VAR_3->tty = 0;
  VAR_1->driver_data = 0;
  FUNC_3(&VAR_3->wake_lock);
  if (VAR_3->ch) {
   FUNC_2(VAR_3->ch);
   VAR_3->ch = 0;
  }
 }
 FUNC_1(&VAR_0);
}
