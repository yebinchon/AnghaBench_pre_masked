
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct acm* driver_data; } ;
struct acm {int urb_task; int throttle_lock; scalar_t__ throttle; } ;


 int FUNC_0 (struct acm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0)
{
 struct acm *VAR_1 = VAR_0->driver_data;
 if (!FUNC_0(VAR_1))
  return;
 FUNC_1(&VAR_1->throttle_lock);
 VAR_1->throttle = 0;
 FUNC_2(&VAR_1->throttle_lock);
 FUNC_3(&VAR_1->urb_task);
}
