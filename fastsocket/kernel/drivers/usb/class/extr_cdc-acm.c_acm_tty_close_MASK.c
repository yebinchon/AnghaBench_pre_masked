
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct acm* driver_data; } ;
struct file {int dummy; } ;
struct acm {int port; int dev; } ;


 int FUNC_0 (struct acm*,int ) ;
 int FUNC_1 (struct acm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *,struct tty_struct*) ;
 scalar_t__ FUNC_5 (int *,struct tty_struct*,struct file*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_1, struct file *VAR_2)
{
 struct acm *VAR_3 = VAR_1->driver_data;



 if (!VAR_3)
  return;
 if (FUNC_5(&VAR_3->port, VAR_1, VAR_2) == 0) {
  FUNC_2(&VAR_0);
  if (!VAR_3->dev) {
   FUNC_6(&VAR_3->port, ((void*)0));
   FUNC_1(VAR_3);
   VAR_1->driver_data = ((void*)0);
  }
  FUNC_3(&VAR_0);
  return;
 }
 FUNC_0(VAR_3, 0);
 FUNC_4(&VAR_3->port, VAR_1);
 FUNC_6(&VAR_3->port, ((void*)0));
}
