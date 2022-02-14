
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct Port {int State; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1)
{
 struct Port *VAR_2 = (struct Port *) VAR_1->driver_data;

 FUNC_0();





 VAR_2->State &= ~VAR_0;

 FUNC_1();
 return;
}
