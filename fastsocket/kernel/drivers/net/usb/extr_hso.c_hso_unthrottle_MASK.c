
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct hso_serial {int unthrottle_tasklet; } ;


 struct hso_serial* FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 struct hso_serial *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->unthrottle_tasklet);
}
