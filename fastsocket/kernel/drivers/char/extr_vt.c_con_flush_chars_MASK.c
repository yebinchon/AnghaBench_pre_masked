
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;
struct tty_struct {struct vc_data* driver_data; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct vc_data*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0)
{
 struct vc_data *VAR_1;

 if (FUNC_1())
  return;


 FUNC_0();
 VAR_1 = VAR_0->driver_data;
 if (VAR_1)
  FUNC_3(VAR_1);
 FUNC_2();
}
