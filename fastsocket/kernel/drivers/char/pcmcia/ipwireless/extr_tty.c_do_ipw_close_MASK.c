
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int * driver_data; } ;
struct ipw_tty {scalar_t__ open_count; scalar_t__ tty_type; int network; struct tty_struct* linux_tty; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ipw_tty *VAR_1)
{
 VAR_1->open_count--;

 if (VAR_1->open_count == 0) {
  struct tty_struct *VAR_2 = VAR_1->linux_tty;

  if (VAR_2 != ((void*)0)) {
   VAR_1->linux_tty = ((void*)0);
   VAR_2->driver_data = ((void*)0);

   if (VAR_1->tty_type == VAR_0)
    FUNC_0(VAR_1->network);
  }
 }
}
