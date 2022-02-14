
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct i8042_port* port_data; } ;
struct i8042_port {int exists; } ;


 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct serio *VAR_0)
{
 struct i8042_port *VAR_1 = VAR_0->port_data;

 VAR_1->exists = 1;
 FUNC_0();
 return 0;
}
