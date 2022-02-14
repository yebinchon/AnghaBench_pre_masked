
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct moxa_port* driver_data; scalar_t__ stopped; } ;
struct moxa_port {int dummy; } ;


 int FUNC_0 (struct moxa_port*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0)
{
 struct moxa_port *VAR_1;

 if (VAR_0->stopped)
  return 0;
 VAR_1 = VAR_0->driver_data;
 if (VAR_1 == ((void*)0))
  return 0;
 return FUNC_0(VAR_1);
}
