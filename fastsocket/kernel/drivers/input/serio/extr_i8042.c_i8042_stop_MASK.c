
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct i8042_port* port_data; } ;
struct i8042_port {int exists; int * serio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct serio *VAR_2)
{
 struct i8042_port *VAR_3 = VAR_2->port_data;

 VAR_3->exists = 0;






 FUNC_0(VAR_0);
 FUNC_0(VAR_1);
 VAR_3->serio = ((void*)0);
}
