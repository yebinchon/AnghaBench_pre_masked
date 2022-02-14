
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty3270 {int timer; } ;
struct raw3270_view {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct raw3270_view *VAR_0)
{
 struct tty3270 *VAR_1;

 VAR_1 = (struct tty3270 *) VAR_0;
 FUNC_0(&VAR_1->timer);
}
