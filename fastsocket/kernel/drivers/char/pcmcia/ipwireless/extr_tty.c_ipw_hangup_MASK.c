
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ipw_tty* driver_data; } ;
struct ipw_tty {scalar_t__ open_count; int ipw_tty_mutex; } ;


 int FUNC_0 (struct ipw_tty*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0)
{
 struct ipw_tty *VAR_1 = VAR_0->driver_data;

 if (!VAR_1)
  return;

 FUNC_1(&VAR_1->ipw_tty_mutex);
 if (VAR_1->open_count == 0) {
  FUNC_2(&VAR_1->ipw_tty_mutex);
  return;
 }

 FUNC_0(VAR_1);

 FUNC_2(&VAR_1->ipw_tty_mutex);
}
