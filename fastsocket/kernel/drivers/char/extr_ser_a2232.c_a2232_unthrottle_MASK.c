
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct a2232_port* driver_data; } ;
struct a2232_port {scalar_t__ throttle_input; } ;



__attribute__((used)) static void FUNC_0(struct tty_struct *VAR_0)
{

 struct a2232_port *VAR_1 = VAR_0->driver_data;
 VAR_1->throttle_input = 0;
}
