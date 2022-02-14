
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct moxa_port* driver_data; } ;
struct moxa_port {int statusflags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct tty_struct *VAR_1)
{
 struct moxa_port *VAR_2 = VAR_1->driver_data;

 VAR_2->statusflags |= VAR_0;
}
